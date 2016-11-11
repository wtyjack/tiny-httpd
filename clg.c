#include <sys/socket.h>
#include <sys/types.h>
#include <sys/times.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

void error_handle(char *err) 
{
    perror(err);
    exit(EXIT_FAILURE);
}

int main(int argc, char *argv[]) {
    char clg_server[50];
    int clg_port;
    int clg_version;
    int clg_threadnum;

    int i;

    struct sockaddr_in myhttpd_sockaddr, client_sockaddr;
    socklen_t size;

    fd_set active_fdset, read_fdset;
    struct timeval tv;

    // verify arg first
    if (argc != 5) {
        error_handle("incorrect number of args");
    }
    if (strcmp(argv[1], "1") == 0) {
        // http 1.0
        myhttpd_version = 0;
        if (atoi(argv[3]) != 0) {
            error_handle("timeout for http 1.0 should be zero");
        }
    }
    else if (strcmp(argv[1], "1.1") == 0) {
        // http 1.1
        myhttpd_version = 1;
        if (atoi(argv[3]) <= 0) {
            error_handle("timeout for http 1.1 should be greater than zero");

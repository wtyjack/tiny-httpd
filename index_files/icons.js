$(document).ready(function() {
    // Add pdf icons to pdf links
    $("a[href$='.pdf']").addClass("pdf");
    $("a[href$='.PDF']").addClass("pdf");

    // Add txt icons to document links (doc, rtf, txt)
    $("a[href$='.txt'], a[href$='.rft']").addClass("txt");
    
    //Add Word icons to document links (doc, docx)
    $("a[href$='.doc'], a[href$='.docx']").addClass("word");    

    //Add Excel icons to document links (xls, xlsx)
    $("a[href$='.xls'], a[href$='.xlsx']").addClass("excel");
    
    //Add Power Point icons to document links (ppt, pptx)
    $("a[href$='.ppt'], a[href$='.pptx']").addClass("ppt");     
    
    // Add zip icons to Zip file links (zip, rar)
    $("a[href$='.zip'], a[href$='.rar']").addClass("zip"); 
});
/*-----------------------------------------------
   SYSMETS.H -- System metrics display structure
  -----------------------------------------------*/

#define NUMLINES ((int) (sizeof sysmetrics / sizeof sysmetrics [0]))

struct
{
    int     iIndex;
}
sysmetrics[] =
{
     SM_CXSCREEN,    
                     
     SM_CYSCREEN,    
                     
     SM_CXVSCROLL,   
                     
     SM_CYHSCROLL,   
                     
     SM_CYCAPTION,   
                     
     SM_CXBORDER,    
                     
     SM_CYBORDER,    
                     
     SM_CXFIXEDFRAME,
                     
     SM_CYFIXEDFRAME,
                     
     SM_CYVTHUMB,    
                     
     SM_CXHTHUMB,    
                     
     SM_CXICON,      
                     
     SM_CYICON,      
                     
     SM_CXCURSOR,    
                     
     SM_CYCURSOR,    
                     
     SM_CYMENU,      
                     
     SM_CXFULLSCREEN,
                     
     SM_CYFULLSCREEN,
                     
     SM_CYKANJIWINDOW,
                     
     SM_MOUSEPRESENT,
                     
     SM_CYVSCROLL,   
                     
     SM_CXHSCROLL,   
                     
     SM_DEBUG,       
                     
     SM_SWAPBUTTON,  
                     
     SM_CXMIN,       
                     
     SM_CYMIN,       
                     
     SM_CXSIZE,      
                     
     SM_CYSIZE,      
                     
     SM_CXSIZEFRAME, 
                     
     SM_CYSIZEFRAME, 
                     
     SM_CXMINTRACK,  
                     
     SM_CYMINTRACK,  
                     
     SM_CXDOUBLECLK, 
                     
     SM_CYDOUBLECLK, 
                     
     SM_CXICONSPACING,
                     
     SM_CYICONSPACING,                    
                     
     SM_PENWINDOWS,  
                     
     SM_DBCSENABLED, 
                     
     SM_CMOUSEBUTTONS,
                     
     SM_SECURE,      
                     
     SM_CXEDGE,      
                     
     SM_CYEDGE,      
                     
     SM_CXMINSPACING,
                     
     SM_CYMINSPACING,
                     
     SM_CXSMICON,    
                     
     SM_CYSMICON,    
                     
     SM_CYSMCAPTION, 
                     
     SM_CXSMSIZE,    
                     
     SM_CYSMSIZE,    
                     
     SM_CXMENUSIZE,  
                     
     SM_CYMENUSIZE,  
                     
     SM_ARRANGE,     
                     
     SM_CXMINIMIZED, 
                     
     SM_CYMINIMIZED, 
                     
     SM_CXMAXTRACK,  
                     
     SM_CYMAXTRACK,  
                     
     SM_CXMAXIMIZED, 
                     
     SM_CYMAXIMIZED, 
                     
     SM_NETWORK,     
                     
     SM_CLEANBOOT,   
                     
     SM_CXDRAG,      
                     
     SM_CYDRAG,      
                     
     SM_SHOWSOUNDS,  
                     
     SM_CXMENUCHECK, 
                     
     SM_CYMENUCHECK, 
                     
     SM_SLOWMACHINE, 
                     
     SM_CMONITORS
};

#include <iostream>
#include <vector>  
#include <string>  
#include <stdio.h>  
#include <stdlib.h> 

#include "path.h"

Path::Path(std::string path)
: Controller(path)
{
    this->title = path;
}

void Path::index()
{
   if (this->path == "") {
     Controller::index(); 
     return;
   }

   this->page_content = "This is the Path controller. <b>" + this->path + "</b>";
   this->render_view();
}

#include <iostream>
#include <vector>  
#include <string>  
#include <stdio.h>  
#include <stdlib.h> 

#include "errors.h"

Errors::Errors(std::string path)
: Controller(path)
{
}

void Errors::index()
{
   this->render_view();
}

void Errors::show404(std::string route)
{
    this->page_content = "There was an error trying to acces: <i>" + route + "</i>";
}

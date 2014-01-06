#include <iostream>
#include <vector>  
#include <string>  
#include <stdio.h>  
#include <stdlib.h> 

#include "controller.h"
#include "home.h"

Controller::Controller(std::string path)
{
   this->path = path;
}

Controller::~Controller()
{
}

void Controller::index()
{
    Home home(this->path);
    home.index();
}

void Controller::render_view() 
{
   std::cout << "Content-type:text/html\r\n\r\n";
   std::cout << "<html>\n";
   std::cout << "<head>\n";
   std::cout << "<title>" + this->title + "</title>\n";
   std::cout << "</head>\n";
   std::cout << "<body>\n";

   std::cout << this->page_content;
   
   std::cout << "<br>\n</body>\n";
   std::cout << "</html>\n";
}

void Controller::show404(std::string route) { }

void Controller::set_title(std::string new_title)
{
   this->title = new_title;
}

void Controller::append_page_content(std::string append)
{
   this->page_content.append(append);
}


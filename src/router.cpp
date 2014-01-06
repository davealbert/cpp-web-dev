#include <iostream>
#include <vector>  
#include <string>  
#include <stdio.h>  
#include <stdlib.h> 

#include <cgicc/CgiDefs.h> 
#include <cgicc/Cgicc.h> 

#include "controller.h"
#include "home.h"

using namespace std;
using namespace cgicc;

int main ()
{
   Cgicc cgi;

   string path = env.getPathInfo();
   std::string delimiter = "/";
   size_t pos = 0;

   // Discard first slash
   pos = path.find(delimiter);
   path.erase(0, pos + delimiter.length());

   pos = path.find(delimiter);
   string route;

   if ( pos != std::string::npos ) {
      route = path.substr(0, pos);
      path.erase(0, pos + delimiter.length());
   } else {
      route = path;
      path = "";
   }

   Controller* theController;
   if (route == "") {
      // Home Controller
      theController = new Home(path);
   } else {
      theController = new Controller(path);
   }
      theController->index();

   return 0;
}


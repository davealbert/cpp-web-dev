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
   CgiEnvironment env = cgi.getEnvironment();

//   cout << "OK<br>\n" << env.getPathInfo() << "<br><br>\n\n";


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

   if (route == "") {
      // Home Controller
      Home controller(path);
      controller.index();
   } else {
      Controller control(path);
      control.index();
   }


   return 0;
}



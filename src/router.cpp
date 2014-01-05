#include <iostream>
#include <vector>  
#include <string>  
#include <stdio.h>  
#include <stdlib.h> 

#include <cgicc/CgiDefs.h> 
#include <cgicc/Cgicc.h> 

#include "home.h"

using namespace std;
using namespace cgicc;

int main ()
{
   Cgicc cgi;
   CgiEnvironment env = cgi.getEnvironment();

   cout << "Content-type:text/html\r\n\r\n";
   cout << "<html>\n";
   cout << "<head>\n";
   cout << "<title>Router</title>\n";
   cout << "</head>\n";
   cout << "<body>\n";

   cout << "OK<br>\n" << env.getPathInfo() << "<br><br>\n\n";


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

   cout << "Route: " << route << " <br>\nPath: " << path;
   Home controller;
   controller.index();


   cout << "<br>\n</body>\n";
   cout << "</html>\n";
   return 0;
}



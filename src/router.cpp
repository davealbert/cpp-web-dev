#include <iostream>
#include <vector>  
#include <string>  
#include <stdio.h>  
#include <stdlib.h> 

#include <cgicc/CgiDefs.h> 
#include <cgicc/Cgicc.h> 

#include "controller.h"
#include "home.h"
#include "path.h"
#include "errors.h"

using namespace std;
using namespace cgicc;

void parseRouteAndPath(string &route, string &path);
void launchController(string route, string path);

int main ()
{
   Cgicc cgi;
   CgiEnvironment env = cgi.getEnvironment();

   string path = env.getPathInfo();
   string route;

   parseRouteAndPath(route, path);
   launchController(route, path);

   return 0;
}

void parseRouteAndPath(string &route, string &path)
{
   transform(path.begin(), path.end(), path.begin(), ::tolower);
   std::string delimiter = "/";
   size_t pos = 0;

   // Discard first slash
   pos = path.find(delimiter);
   path.erase(0, pos + delimiter.length());

   pos = path.find(delimiter);

   if ( pos != std::string::npos ) {
      route = path.substr(0, pos);
      path.erase(0, pos + delimiter.length());
   } else {
      route = path;
      path = "";
   }
}

void launchController(string route, string thePath)
{
   Controller* theController;
   if (route == "") {
      // Home Controller
      theController = new Home(thePath);
   } else if (route == "path") {
      theController = new Path(thePath);
   } else {
      theController = new Errors(route);
      theController->show404(route);
   }

   theController->index();
   delete theController;
}

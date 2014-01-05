#include <iostream>
#include <vector>  
#include <string>  
#include <stdio.h>  
#include <stdlib.h> 

#include <cgicc/CgiDefs.h> 
#include <cgicc/Cgicc.h> 

using namespace std;
using namespace cgicc;

int main ()
{
   Cgicc cgi;
   CgiEnvironment env = cgi.getEnvironment();
   
   cout << "Content-type:text/html\r\n\r\n";
   cout << "<html>\n";
   cout << "<head>\n";
   cout << "<title>Using GET and POST Methods</title>\n";
   cout << "</head>\n";
   cout << "<body>\n";
   cout << env.getRequestMethod() << "<br>\n";

   const_form_iterator iter;
   for(iter = cgi.getElements().begin(); 
         iter != cgi.getElements().end(); 
         ++iter) {
         cout << iter->getName() << " : "  << iter->getValue() << "<br>\n";
   }
   cout << "---------------------------------------<br><br>\n\n";


   form_iterator fi = cgi.getElement("first_name");  
   if (fi != cgi.getElements().end()) {
      cout << "First name: " << **fi << endl;  
   }else{
      cout << "No text entered for first name" << endl;  
   }
   cout << "<br/>\n";
   fi = cgi.getElement("last_name");  
   if (fi != cgi.getElements().end()) {
      cout << "Last name: " << **fi << endl;  
   }else{
      cout << "No text entered for last name" << endl;  
   }
   cout << "<br/>\n";

   cout << "</body>\n";
   cout << "</html>\n";

   return 0;
}


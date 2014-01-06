#include <iostream>
#include <string>

using namespace std;
using std::string;

class Foo {
   public :
   string bar() {
      return "<p>This is foo bar</p>";
   }

  int baz(int x) {
     int i;
      for (i = 0; i < x; i++) {
         /* code */
         cout << "<p>This is number: " << i << "<p>" << endl;
      }
      return 0;
   }
};

int main(){
   Foo foo;

   cout << "Content-type: text/html" << endl << endl;
   cout << "<html>" << endl;
   cout << "   <body>" << endl;
      cout << "       <p>Hello World!</p>" << endl;

   cout << foo.bar();
   foo.baz(10);

   cout << "   </body>" << endl;
   cout << "</html>" << endl;

   return 0;
}


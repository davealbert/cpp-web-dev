#ifndef HOME_CLASS_HEADER
#define HOME_CLASS_HEADER

#include <string>

#include "Controller.h"

class Home : Controller {
   public:
      Home(std::string path);
      void index();
};

#endif

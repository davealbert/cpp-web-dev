#ifndef HOME_CLASS_HEADER
#define HOME_CLASS_HEADER

#include <string>

#include "Controller.h"

class Home : public  Controller {
   public:
      Home(std::string path);
      virtual void index();
};

#endif

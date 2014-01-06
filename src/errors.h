#ifndef ERRORS_CLASS_HEADER
#define ERRORS_CLASS_HEADER

#include <string>

#include "Controller.h"

class Errors : public Controller {
   private:
      std::string errorMsg;

   public:
      Errors(std::string path);
      virtual void index();
      void show404(std::string route);
};

#endif

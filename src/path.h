#ifndef PATH_CLASS_HEADER
#define PATH_CLASS_HEADER

#include <string>

#include "Controller.h"

class Path : public Controller {
   public:
      Path(std::string path);
      virtual void index();
};

#endif

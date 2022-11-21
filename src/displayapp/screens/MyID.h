#pragma once

#include "displayapp/screens/Screen.h"
#include <lvgl/lvgl.h>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      class MyID : public Screen {
      public:
        MyID(DisplayApp* app);
        ~MyID() override;
      };
    }
  }
}
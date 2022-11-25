#pragma once

#include "displayapp/screens/Screen.h"
#include <lvgl/lvgl.h>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      class MyID : public Screen {
      public:
        MyID(DisplayApp* app);
            //  ,System::SystemTask& systemTask);
        ~MyID() override;
        // void OnButtonEvent(lv_obj_t* obj, lv_event_t event);
        // bool OnTouchEvent(TouchEvents event) override;
        // void OnValueChanged();

      private:


      };
    }
  }
}
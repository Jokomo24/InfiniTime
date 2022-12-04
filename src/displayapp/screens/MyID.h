#pragma once

#include "displayapp/screens/Screen.h"
#include "systemtask/SystemTask.h"
#include <lvgl/lvgl.h>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      class MyID : public Screen {
      public:
        MyID(DisplayApp* app,
             System::SystemTask& systemTask);
        ~MyID() override;

        void Refresh() override;
        // void OnButtonEvent(lv_obj_t* obj, lv_event_t event);
        // bool OnTouchEvent(TouchEvents event) override;
        // void OnValueChanged();

      private:
        System::SystemTask& systemTask;
        lv_obj_t* address2;
        int center = 100;
        int pos = 0;

        const char *nameLblStr   = "Full Name: ";
        const char *blTypeLblStr = "Blood Type: ";
        const char *addrLblStr   = "Address: ";
        const char *persCellLblStr  = "Cell #: ";
        const char *emgcyContactLblStr = "Emerg. Contact: ";
        const char *emgcyCellLblStr  = "Emerg. #:";

        const char *fullNameStr   = "Your Full Name";
        const char *bloodTypeStr  = "Your Blood Type";
        const char *addressStr    = "Your Address";
        const char *cellNumStr    = "Your Cellphone Number";
        const char *emgcyContactStr  = "Your Emergency Contact";
        const char *emgcyCellStr   = "Your Emergency Contact's Number";


        lv_task_t* taskRefresh;
      };
    }
  }
}
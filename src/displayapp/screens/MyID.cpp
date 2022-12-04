#include "displayapp/screens/MyID.h"
#include "displayapp/DisplayApp.h"

using namespace Pinetime::Applications::Screens;

MyID::MyID(DisplayApp* app,
           System::SystemTask& systemTask)
  : Screen(app), systemTask {systemTask} {

  lv_obj_t* nameLbl = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(nameLbl, nameLblStr);
  lv_label_set_align(nameLbl, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(nameLbl, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 0);

  lv_obj_t* fullName = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(fullName, );
  lv_label_set_align(fullName, LV_LABEL_ALIGN_RIGHT);
  lv_obj_align(fullName, lv_scr_act(), LV_ALIGN_IN_TOP_RIGHT, 0, 0);

  lv_obj_t* bloodTypeLbl = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(bloodTypeLbl, blTypeLblStr);
  lv_label_set_align(bloodTypeLbl, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(bloodTypeLbl, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 20);

  lv_obj_t* bloodType = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(bloodType, bloodTypeStr);
  lv_label_set_align(bloodType, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(bloodType, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 20);

  lv_obj_t* addressLbl = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(addressLbl, addrLblStr);
  lv_label_set_align(addressLbl, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(addressLbl, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 40);

  lv_obj_t* address = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(address, addressStr);
  lv_label_set_align(address, LV_LABEL_ALIGN_RIGHT);
  lv_obj_align(address, lv_scr_act(), LV_ALIGN_IN_TOP_RIGHT, 0, 40);

  lv_obj_t* persCellLbl = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(persCellLbl, persCellLblStr);
  lv_label_set_align(persCellLbl, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(persCellLbl, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 60);

  lv_obj_t* persCell = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(persCell, cellNumStr);
  lv_label_set_align(persCell, LV_LABEL_ALIGN_RIGHT);
  lv_obj_align(persCell, lv_scr_act(), LV_ALIGN_IN_TOP_RIGHT, 0, 60);

  lv_obj_t* emgcyContactLbl = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(emgcyContactLbl, emgcyContactLblStr);
  lv_label_set_align(emgcyContactLbl, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(emgcyContactLbl, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 80);

  lv_obj_t* emgcyContact = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(emgcyContact, emgcyContactStr);
  lv_label_set_align(emgcyContact, LV_LABEL_ALIGN_RIGHT);
  lv_obj_align(emgcyContact, lv_scr_act(), LV_ALIGN_IN_TOP_RIGHT, 0, 80);

  lv_obj_t* emgcyCellLbl = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(emgcyCellLbl, emgcyCellLblStr);
  lv_label_set_align(emgcyCellLbl, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(emgcyCellLbl, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 100);

  lv_obj_t* emgcyCellStr = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(emgcyCellStr, emergNumStr);
  lv_label_set_align(emgcyCellStr, LV_LABEL_ALIGN_RIGHT);
  lv_obj_align(emgcyCellStr, lv_scr_act(), LV_ALIGN_IN_TOP_RIGHT, 0, 100);

  taskRefresh = lv_task_create(RefreshTaskCallback, LV_DISP_DEF_REFR_PERIOD, LV_TASK_PRIO_MID, this);
}

MyID::~MyID() {
  lv_task_del(taskRefresh);
  lv_obj_clean(lv_scr_act());
}

void MyID::Refresh() {
  if (pos <= center)
  {
    ++pos;
    lv_obj_set_pos(address2, pos, 40);
  }
  else if (center >= 0)
  {
    --center;
    lv_obj_set_pos(address2, center, 40);
  }
  else
  {
    pos = 0;
    center = 100;
  }
  
}
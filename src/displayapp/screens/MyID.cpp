#include "displayapp/screens/MyID.h"
#include "displayapp/DisplayApp.h"

using namespace Pinetime::Applications::Screens;

MyID::MyID(DisplayApp* app) : Screen(app) {
  lv_obj_t* fullName = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(fullName, "Name: Komosa, Joseph");
  lv_label_set_align(fullName, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(fullName, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 0);

  lv_obj_t* address1 = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(address1, "Addr1: 300 E 13th");
  lv_label_set_align(address1, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(address1, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 20);

  lv_obj_t* address2 = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(address2, "Addr2: Unit 19");
  lv_label_set_align(address2, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(address2, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 40);

  lv_obj_t* city = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(city, "City: Pella");
  lv_label_set_align(city, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(city, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 60);

  lv_obj_t* stateZip = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(stateZip, "St-Zp: IA 50219");
  lv_label_set_align(city, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(stateZip, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 80);

  
}

MyID::~MyID() {
  lv_obj_clean(lv_scr_act());
}
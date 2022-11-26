#include "displayapp/screens/MyID.h"
#include "displayapp/DisplayApp.h"

using namespace Pinetime::Applications::Screens;

MyID::MyID(DisplayApp* app) : Screen(app) {
  lv_obj_t* fullName = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(fullName, "Name: Komosa, Joseph");
  lv_label_set_align(fullName, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(fullName, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 0);

  lv_obj_t* bloodType = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(bloodType, "Blood Type: ???");
  lv_label_set_align(bloodType, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(bloodType, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 20);

  lv_obj_t* address1 = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(address1, "Addr1: 300 E 13th");
  lv_label_set_align(address1, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(address1, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 40);

  lv_obj_t* address2 = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(address2, "Addr2: Unit 19");
  lv_label_set_align(address2, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(address2, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 60);

  lv_obj_t* cityState = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(cityState, "Cty, St: Pella, IA");
  lv_label_set_align(cityState, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(cityState, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 80);

  lv_obj_t* zip = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(zip, "Zip: 50219");
  lv_label_set_align(zip, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(zip, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 100);

  lv_obj_t* persCell = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(persCell, "Cell #: 815-382-9868");
  lv_label_set_align(persCell, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(persCell, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 120);

  lv_obj_t* emergCnt = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(emergCnt, "Emerg. Contact: ???");
  lv_label_set_align(emergCnt, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(emergCnt, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 140);

  lv_obj_t* emergCell = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(emergCell, "Emerg. #: ???");
  lv_label_set_align(emergCell, LV_LABEL_ALIGN_LEFT);
  lv_obj_align(emergCell, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, 0, 160);
}

MyID::~MyID() {
  lv_obj_clean(lv_scr_act());
}
#include "ruby.h"
#include "fit_convert.h"
#include "rubyfit2_functions.h"


static VALUE get_fit_manufacturer(FIT_MANUFACTURER id) {
  if (id != FIT_MANUFACTURER_INVALID) {
    int i;
    for (i = 0; i < (sizeof(rubyfit_fit_manufacturer) / sizeof(rubyfit_fit_manufacturer[0])); i++) {
      if (rubyfit_fit_manufacturer[i].rubyfit_id == id) {
        return rb_str_new2(rubyfit_fit_manufacturer[i].rubyfit_name);
      }
    }
  }
  return rb_str_new2("UNKNOWN");
}

static VALUE get_fit_garmin_product(FIT_GARMIN_PRODUCT id) {
  if (id != FIT_GARMIN_PRODUCT_INVALID) {
    int i;
    for (i = 0; i < (sizeof(rubyfit_fit_garmin_product) / sizeof(rubyfit_fit_garmin_product[0])); i++) {
      if (rubyfit_fit_garmin_product[i].rubyfit_id == id) {
        return rb_str_new2(rubyfit_fit_garmin_product[i].rubyfit_name);
      }
    }
  }
  return UINT2NUM(id);
  //  return rb_str_new2("UNKNOWN");
}

static VALUE get_fit_antplus_device_type(FIT_ANTPLUS_DEVICE_TYPE id) {
  if (id != FIT_ANTPLUS_DEVICE_TYPE_INVALID) {
    int i;
    for (i = 0; i < (sizeof(rubyfit_fit_antplus_device_type) / sizeof(rubyfit_fit_antplus_device_type[0])); i++) {
      if (rubyfit_fit_antplus_device_type[i].rubyfit_id == id) {
        return rb_str_new2(rubyfit_fit_antplus_device_type[i].rubyfit_name);
      }
    }
  }
  return rb_str_new2("UNKNOWN");
}

static VALUE get_fit_battery_status(FIT_BATTERY_STATUS id) {
  if (id != FIT_BATTERY_STATUS_INVALID) {
    int i;
    for (i = 0; i < (sizeof(rubyfit_fit_battery_status) / sizeof(rubyfit_fit_battery_status[0])); i++) {
      if (rubyfit_fit_battery_status[i].rubyfit_id == id) {
        return rb_str_new2(rubyfit_fit_battery_status[i].rubyfit_name);
      }
    }
  }
  return rb_str_new2("UNKNOWN");
}

static VALUE get_fit_sport(FIT_SPORT id) {
  if (id != FIT_SPORT_INVALID) {
    int i;
    for (i = 0; i < (sizeof(rubyfit_fit_sport) / sizeof(rubyfit_fit_sport[0])); i++) {
      if (rubyfit_fit_sport[i].rubyfit_id == id) {
        return rb_str_new2(rubyfit_fit_sport[i].rubyfit_name);
      }
    }
  }
  return rb_str_new2("UNKNOWN");
}

static VALUE get_fit_sub_sport(FIT_SUB_SPORT id) {
  if (id != FIT_SUB_SPORT_INVALID) {
    int i;
    for (i = 0; i < (sizeof(rubyfit_fit_sub_sport) / sizeof(rubyfit_fit_sub_sport[0])); i++) {
      if (rubyfit_fit_sub_sport[i].rubyfit_id == id) {
        return rb_str_new2(rubyfit_fit_sub_sport[i].rubyfit_name);
      }
    }
  }
  return rb_str_new2("UNKNOWN");
}

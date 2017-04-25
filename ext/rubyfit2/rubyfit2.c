////////////////////////////////////////////////////////////////////////////////
// The following .FIT software provided may be used with .FIT devices only and
// remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2008 Dynastream Innovations Inc.
// All rights reserved. This software may not be reproduced by any means
// without express written approval of Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////

#include "stdio.h"
#include "string.h"
#include "ruby.h"
// #include "math.h"

#include "fit_convert.h"
#include "rubyfit2_functions.h"



static VALUE parse(VALUE self, VALUE original_str) {

  VALUE manufacturer = rb_hash_new();

  int i;
  for (i = 0; i < (sizeof(rubyfit_fit_manufacturer) / sizeof(rubyfit_fit_manufacturer[0])); i++) {


    // VALUE **point;
    // point = &rubyfit_fit_manufacturer[i];

    VALUE name = rb_str_new2(rubyfit_fit_manufacturer[i].rubyfit_name);
    VALUE id = UINT2NUM(rubyfit_fit_manufacturer[i].rubyfit_id);
    rb_hash_aset(manufacturer, name, id);
  }

  return manufacturer;
}

void Init_rubyfit2() {
  VALUE mRubyFit2 = rb_define_module("RubyFit2");
  rb_define_singleton_method(mRubyFit2, "parse", parse, 1);
}

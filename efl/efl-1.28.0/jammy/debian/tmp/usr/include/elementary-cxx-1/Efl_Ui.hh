#ifndef EFL_CXX_EFL_UI_HH
#define EFL_CXX_EFL_UI_HH
#if defined(ELEMENTARY_H) || defined(ELM_WIDGET_H) || defined(_EFL_UI_H)
#error "Do not include Elm C API headers before including Efl_Ui.hh"
#endif

#ifndef EFL_BETA_API_SUPPORT
#define EFL_BETA_API_SUPPORT
#endif
#ifndef ELM_INTERNAL_API_ARGESFSDFEFC
#define ELM_INTERNAL_API_ARGESFSDFEFC
#endif

#include <Efl.hh>

extern "C" {
// Some Elm_* classes are built and require the old header.
#include "Elementary.h"
#include "Efl_Ui.h"
}

#include <Edje.hh>
#include "Elementary.eo.hh"

#endif

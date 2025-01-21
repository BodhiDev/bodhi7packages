#ifndef ELM_WIDGET_SCROLLER_H
#define ELM_WIDGET_SCROLLER_H

#include "Elementary.h"

/* DO NOT USE THIS HEADER UNLESS YOU ARE PREPARED FOR BREAKING OF YOUR
 * CODE. THIS IS ELEMENTARY'S INTERNAL WIDGET API (for now) AND IS NOT
 * FINAL. CALL elm_widget_api_check(ELM_INTERNAL_API_VERSION) TO CHECK
 * IT AT RUNTIME.
 */

/**
 * @addtogroup Widget
 * @{
 *
 * @section elm-scroller-class The Elementary Scroller Class
 *
 * Elementary, besides having the @ref Scroller widget, exposes its
 * foundation -- the Elementary Scroller Class -- in order to create
 * other widgets which are a scroller with some more logic on top.
 */

/**
 * Base widget smart data extended with scroller instance data.
 */
typedef struct _Elm_Scroller_Data Elm_Scroller_Data;
struct _Elm_Scroller_Data
{
   Evas_Object                          *hit_rect;
   Evas_Object                          *g_layer;

   Evas_Object                          *content;
   Evas_Object                          *contents;
   Evas_Object                          *proxy_content[3];

   Eina_Bool                             min_w : 1;
   Eina_Bool                             min_h : 1;
   Eina_Bool                             loop_h : 1;
   Eina_Bool                             loop_v : 1;
};

/**
 * @}
 */

#define ELM_SCROLLER_DATA_GET(o, sd) \
  Elm_Scroller_Data * sd = efl_data_scope_get(o, ELM_SCROLLER_CLASS)

#define ELM_SCROLLER_DATA_GET_OR_RETURN(o, ptr)      \
  ELM_SCROLLER_DATA_GET(o, ptr);                     \
  if (EINA_UNLIKELY(!ptr))                           \
    {                                                \
       ERR("No widget data for object %p (%s)",      \
           o, evas_object_type_get(o));              \
       return;                                       \
    }

#define ELM_SCROLLER_DATA_GET_OR_RETURN_VAL(o, ptr, val) \
  ELM_SCROLLER_DATA_GET(o, ptr);                         \
  if (EINA_UNLIKELY(!ptr))                               \
    {                                                    \
       ERR("No widget data for object %p (%s)",          \
           o, evas_object_type_get(o));                  \
       return val;                                       \
    }

#define ELM_SCROLLER_CHECK(obj)                              \
  if (EINA_UNLIKELY(!efl_isa((obj), ELM_SCROLLER_CLASS))) \
    return

#endif

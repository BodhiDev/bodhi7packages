#ifndef ELM_WIDGET_SLIDESHOW_H
#define ELM_WIDGET_SLIDESHOW_H

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
 * @section elm-slideshow-class The Elementary Slideshow Class
 *
 * Elementary, besides having the @ref Slideshow widget, exposes its
 * foundation -- the Elementary Slideshow Class -- in order to create other
 * widgets which are a slideshow with some more logic on top.
 */

/**
 * Base layout smart data extended with slideshow instance data.
 */
typedef struct _Elm_Slideshow_Data       Elm_Slideshow_Data;
typedef struct _Elm_Slideshow_Item_Data       Elm_Slideshow_Item_Data;

struct _Elm_Slideshow_Item_Data
{
   Elm_Widget_Item_Data           *base;

   Eina_List                      *l, *l_built;

   const Elm_Slideshow_Item_Class *itc;
};

struct _Elm_Slideshow_Data
{
   // list of Elm_Slideshow_Item*
   Eina_List            *items;
   Eina_List            *items_built;

   Elm_Slideshow_Item_Data   *current;
   Elm_Slideshow_Item_Data   *previous;

   Eina_List            *transitions;
   const char           *transition;

   int                   count_item_pre_before;
   int                   count_item_pre_after;
   Ecore_Timer          *timer;
   double                timeout;
   Eina_Bool             loop : 1;

   struct
   {
      const char *current;
      Eina_List  *list;  //list of const char *
   } layout;
};

/**
 * @}
 */

#define ELM_SLIDESHOW_DATA_GET(o, sd) \
  Elm_Slideshow_Data * sd = efl_data_scope_get(o, ELM_SLIDESHOW_CLASS)

#define ELM_SLIDESHOW_DATA_GET_OR_RETURN(o, ptr)     \
  ELM_SLIDESHOW_DATA_GET(o, ptr);                    \
  if (EINA_UNLIKELY(!ptr))                           \
    {                                                \
       ERR("No widget data for object %p (%s)",      \
           o, evas_object_type_get(o));              \
       return;                                       \
    }

#define ELM_SLIDESHOW_DATA_GET_OR_RETURN_VAL(o, ptr, val) \
  ELM_SLIDESHOW_DATA_GET(o, ptr);                         \
  if (EINA_UNLIKELY(!ptr))                                \
    {                                                     \
       ERR("No widget data for object %p (%s)",           \
           o, evas_object_type_get(o));                   \
       return val;                                        \
    }

#define ELM_SLIDESHOW_CHECK(obj)                              \
  if (EINA_UNLIKELY(!efl_isa((obj), ELM_SLIDESHOW_CLASS))) \
    return

#define ELM_SLIDESHOW_ITEM_CHECK(obj)                          \
  if (EINA_UNLIKELY(!efl_isa(EO_OBJ(obj), ELM_SLIDESHOW_ITEM_CLASS))) \
    return

#define ELM_SLIDESHOW_ITEM_CHECK_OR_RETURN(obj, ...)           \
  if (EINA_UNLIKELY(!efl_isa(EO_OBJ(obj), ELM_SLIDESHOW_ITEM_CLASS))) \
    return __VA_ARGS__;

#define ELM_SLIDESHOW_ITEM_DATA_GET(o, sd) \
  Elm_Slideshow_Item_Data *sd = efl_data_scope_get(o, ELM_SLIDESHOW_ITEM_CLASS)

#endif

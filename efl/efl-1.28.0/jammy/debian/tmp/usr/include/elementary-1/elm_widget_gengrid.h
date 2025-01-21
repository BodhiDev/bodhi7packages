#ifndef ELM_WIDGET_GENGRID_H
#define ELM_WIDGET_GENGRID_H

#include "elm_gen_common.h"
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
 * @section elm-gengrid-class The Elementary Gengrid Class
 *
 * Elementary, besides having the @ref Gengrid widget, exposes its
 * foundation -- the Elementary Gengrid Class -- in order to create
 * other widgets which are a gengrid with some more logic on top.
 */

/**
 * Base widget smart data extended with gengrid instance data.
 */
typedef struct _Elm_Gengrid_Data Elm_Gengrid_Data;
struct _Elm_Gengrid_Data
{
   Eina_Inlist_Sorted_State             *state;
   Evas_Object                          *hit_rect;
   Evas_Object                          *pan_obj;
   Evas_Object                          *obj; // the object itself
   Evas_Object                          *stack; // stacking markers in pan for selectraise feature

   Eina_List                            *selected; /* a list of
                                                    * selected
                                                    * items */
   Eina_List                            *group_items; /* a list of
                                                       * groups index
                                                       * items */
   Eina_Inlist                          *items; /* an inlist of all items */
   Elm_Gen_Item                         *reorder_it; /* item currently
                                                     * being
                                                     * repositioned */
   Elm_Object_Item                      *last_selected_item;
   Elm_Object_Item                      *focused_item; /**< a focused item by keypad arrow or mouse. This is set to NULL if widget looses focus. */
   Elm_Object_Item                      *last_focused_item; /**< This records the last focused item when widget looses focus. This is required to set the focus on last focused item when widgets gets focus. */
   Elm_Object_Item                      *show_it;
   Elm_Object_Item                      *bring_in_it;
   Elm_Gengrid_Item_Scrollto_Type        scroll_to_type;

   Eina_Hash                            *content_item_map;
   Eo                                   *provider;
   Elm_Gen_Item                         *focus_on_realization;

   Ecore_Job                            *calc_job;
   int                                   walking;
   int                                   item_width, item_height;
   int                                   group_item_width, group_item_height;
   int                                   minw, minh;
   unsigned int                          item_count;
   Evas_Coord                            pan_x, pan_y;
   Elm_Object_Select_Mode                select_mode;
   Elm_Object_Multi_Select_Mode          multi_select_mode; /**< select mode for multiple selection */

   Ecore_Cb                              calc_cb;
   Ecore_Cb                              clear_cb;

   /* longpress timeout. this value comes from _elm_config by
    * default. this can be changed by
    * elm_config_longpress_timeout_set() */
   double                                longpress_timeout;

   /* a generation of gengrid. when gengrid is cleared, this value
    * will be increased and a new generation will start */
   int                                   generation;
   Eina_Compare_Cb                       item_compare_cb;

   /* The stuff below directly come from gengrid without any thinking */
   unsigned int                          nmax;
   Evas_Coord                            reorder_item_x, reorder_item_y;
   Evas_Coord                            old_pan_x, old_pan_y;
   long                                  items_lost;
   double                                align_x, align_y;

   struct
   {
      Elm_Gen_Item                          *it1, *it2; /**< The items which are getting swapped */
      void                                  *data; /**< This is the data used to store information related to animation */
      Elm_Focus_Direction                   dir; /**< focus key direction */
      Ecore_Pos_Map                         tween_mode; /**< Position mappings for animation */
      Evas_Coord                            x1, y1, x2, y2; /**< Coordinates of it1 and it2 */
      Elm_Gengrid_Reorder_Type              type; /**< Reorder type */
      Eina_Bool                             running : 1; /**< animation is happening */
   } reorder;
   Elm_Focus_Region_Show_Mode            mode; /**< the mode which describes which rectangle should be returned in the interest region getter*/


   Eina_Bool                             reorder_item_changed : 1;
   Eina_Bool                             move_effect_enabled : 1;

   Eina_Bool                             old_h_bounce;
   Eina_Bool                             old_v_bounce;

   /* a flag for reorder mode enable/disable */
   Eina_Bool                             reorder_mode : 1;
   Eina_Bool                             was_selected : 1;

   Eina_Bool                             longpressed : 1;
   Eina_Bool                             pan_changed : 1;
   Eina_Bool                             horizontal : 1;

   /* a flag for items can be highlighted or not. by default this flag
    * is true. */
   Eina_Bool                             highlight : 1;

   Eina_Bool                             clear_me : 1; /**< a flag whether
                                                        * gengrid is marked
                                                        * as to be cleared or
                                                        * not. if this flag
                                                        * is true, gengrid
                                                        * clear was already
                                                        * deferred.  */

   Eina_Bool                             on_hold : 1;

   Eina_Bool                             filled : 1;
   Eina_Bool                             multi : 1; /* a flag for item
                                                     * multi
                                                     * selection */
   Eina_Bool                             show_region : 1;
   Eina_Bool                             bring_in : 1;
   Eina_Bool                             mouse_down : 1; /**< a flag that mouse is down on the list at the moment. this flag is set to true on mouse and reset to false on mouse up */
   /**< value whether item loop feature is enabled or not. */
   Eina_Bool                             item_loop_enable : 1;

   Eina_Inlist                          *item_cache; /* an inlist of
                                                      * edje object it
                                                      * cache. */
   int                                   item_cache_count;
   int                                   item_cache_max;

   /* custom dimensions may be set for any item.
    * the logic for placing items requires that either item widths
    * for horizontal gengrid or item height for vertical gengrid
    * may be varied at once. */

   Eina_Bool                          custom_size_mode : 1; /* a flag that items have custom sizes */
   unsigned int                       *custom_size_sum; /* array to store sum of the widths for items placed already for each row or sum of heights for each column. this is to find location of next item. */
   unsigned int                       *custom_tot_sum; /* array to store total sum of all widths or heights. this is used for item alignment calculations. */
   unsigned int                       custom_tot_max; /* maximum of the total sums over all rows or columns. this is also used for item alignment calculations. */
   unsigned int                       custom_alloc_size; /* amount of memory allocated to above dynamic arrays in terms of number of rows or columns. */

   Eina_Bool                          scr_minw;
   Eina_Bool                          scr_minh;
   Eina_Bool                          order_dirty; /* boolean flag indicating if there needs to be an update to the focus_order of the widget.*/
};

struct Elm_Gen_Item_Type
{
   Elm_Gen_Item           *it;

   Elm_Gengrid_Data       *wsd;

   Ecore_Animator         *item_reorder_move_animator;
   Evas_Coord              gx, gy, ox, oy, tx, ty, rx, ry;
   unsigned int            moving_effect_start_time;
   int                     prev_group;

   Eina_Bool               group_realized : 1;
   Eina_Bool               moving : 1;
   Eina_Bool               nocache_once : 1; /* do not use cache for
                                              * this item only once */
   Eina_Bool               nocache : 1; /* do not use cache for this item */

   /* for non homogeneous items */
   Evas_Coord              w, h, sw, sh;
};

typedef struct _Item_Cache Item_Cache;
struct _Item_Cache
{
   EINA_INLIST;
   Evas_Object *base_view, *spacer;
   const char  *item_style; // it->itc->item_style
   Eina_List *contents;
};

typedef struct _Elm_Gengrid_Pan_Data Elm_Gengrid_Pan_Data;
struct _Elm_Gengrid_Pan_Data
{
   Evas_Object            *wobj;
   Elm_Gengrid_Data       *wsd;
   Ecore_Job              *resize_job;
};

/**
 * @}
 */

#define GG_IT(_it) (_it->item)

#define ELM_GENGRID_DATA_GET(o, sd) \
  Elm_Gengrid_Data * sd = efl_data_scope_get(o, ELM_GENGRID_CLASS)

#define ELM_GENGRID_PAN_DATA_GET(o, sd) \
  Elm_Gengrid_Pan_Data * sd = efl_data_scope_get(o, ELM_GENGRID_PAN_CLASS)

#define ELM_GENGRID_DATA_GET_FROM_ITEM(it, sd) \
  Elm_Gengrid_Data * sd = GG_IT(it)->wsd

#define ELM_GENGRID_DATA_GET_OR_RETURN(o, ptr)       \
  ELM_GENGRID_DATA_GET(o, ptr);                      \
  if (EINA_UNLIKELY(!ptr))                           \
    {                                                \
       ERR("No widget data for object %p (%s)",      \
           o, evas_object_type_get(o));              \
       return;                                       \
    }

#define ELM_GENGRID_DATA_GET_OR_RETURN_VAL(o, ptr, val) \
  ELM_GENGRID_DATA_GET(o, ptr);                         \
  if (EINA_UNLIKELY(!ptr))                              \
    {                                                   \
       ERR("No widget data for object %p (%s)",         \
           o, evas_object_type_get(o));                 \
       return val;                                      \
    }

#define ELM_GENGRID_CHECK(obj)                              \
  if (EINA_UNLIKELY(!efl_isa((obj), ELM_GENGRID_CLASS))) \
    return

#define ELM_GENGRID_ITEM_CHECK(it)                          \
  ELM_WIDGET_ITEM_CHECK_OR_RETURN(it->base, ); \
  ELM_GENGRID_CHECK(it->base->widget);

#define ELM_GENGRID_ITEM_CHECK_OR_RETURN(it, ...)                      \
  ELM_WIDGET_ITEM_CHECK_OR_RETURN(it->base, __VA_ARGS__); \
  ELM_GENGRID_CHECK(it->base->widget) __VA_ARGS__;

#define ELM_GENGRID_ITEM_CHECK_OR_GOTO(it, label)              \
  ELM_WIDGET_ITEM_CHECK_OR_GOTO(it->base, label); \
  if (!it->base->widget || !efl_isa                              \
        ((it->base->widget), ELM_GENGRID_CLASS)) goto label;

#define ELM_GENGRID_ITEM_DATA_GET(o, sd) \
  Elm_Gen_Item* sd = efl_data_scope_get(o, ELM_GENGRID_ITEM_CLASS)

#endif

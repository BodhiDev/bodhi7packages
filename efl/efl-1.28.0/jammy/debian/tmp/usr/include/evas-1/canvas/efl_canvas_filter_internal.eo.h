#ifndef _EFL_CANVAS_FILTER_INTERNAL_EO_H_
#define _EFL_CANVAS_FILTER_INTERNAL_EO_H_

#ifndef _EFL_CANVAS_FILTER_INTERNAL_EO_CLASS_TYPE
#define _EFL_CANVAS_FILTER_INTERNAL_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Filter_Internal;

#endif

#ifndef _EFL_CANVAS_FILTER_INTERNAL_EO_TYPES
#define _EFL_CANVAS_FILTER_INTERNAL_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** 32 bit color data structure
 *
 * @ingroup Efl_Gfx_Color32
 */
typedef struct _Efl_Gfx_Color32
{
  uint8_t r; /**< Red component of the color */
  uint8_t g; /**< Green component of the color */
  uint8_t b; /**< Blue component of the color */
  uint8_t a; /**< Translucent component of the color */
} Efl_Gfx_Color32;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Filter state name structure
 *
 * @ingroup Efl_Canvas_Filter_State_Name
 */
typedef struct _Efl_Canvas_Filter_State_Name
{
  const char *name; /**< Filter state name */
  double value; /**< Filter state value */
} Efl_Canvas_Filter_State_Name;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Filter state text structure
 *
 * @ingroup Efl_Canvas_Filter_State_Text
 */
typedef struct _Efl_Canvas_Filter_State_Text
{
  Efl_Gfx_Color32 outline; /**< Text outline color */
  Efl_Gfx_Color32 shadow; /**< Text shadow color */
  Efl_Gfx_Color32 glow; /**< Text glow color */
  Efl_Gfx_Color32 glow2; /**< Text glow2 color */
} Efl_Canvas_Filter_State_Text;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Internal structure representing the state of a Gfx Filter
 *
 * @ingroup Efl_Canvas_Filter_State
 */
typedef struct _Efl_Canvas_Filter_State
{
  Efl_Canvas_Filter_State_Text text; /**< Text state */
  Efl_Gfx_Color32 color; /**< Color */
  Efl_Canvas_Filter_State_Name cur; /**< Current state */
  Efl_Canvas_Filter_State_Name next; /**< Next state */
  int w; /**< Width */
  int h; /**< Height */
  double scale; /**< Scale factor */
  double pos; /**< Position */
} Efl_Canvas_Filter_State;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Evas internal implementation of filters.
 *
 * @ingroup Efl_Canvas_Filter_Internal
 */
#define EFL_CANVAS_FILTER_INTERNAL_MIXIN efl_canvas_filter_internal_mixin_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_filter_internal_mixin_get(void) EINA_CONST;

#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
/**
 * @brief Marks this filter as changed.
 *
 * @param[in] obj The object.
 * @param[in] val @c true if filter changed, @c false otherwise
 *
 * @ingroup Efl_Canvas_Filter_Internal
 */
EVAS_API EVAS_API_WEAK void evas_filter_changed_set(Eo *obj, Eina_Bool val);
#endif

#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
/**
 * @brief Marks this filter as invalid.
 *
 * @param[in] obj The object.
 * @param[in] val @c true if filter is invalid, @c false otherwise
 *
 * @ingroup Efl_Canvas_Filter_Internal
 */
EVAS_API EVAS_API_WEAK void evas_filter_invalid_set(Eo *obj, Eina_Bool val);
#endif

#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
/**
 * @brief Called by Efl.Canvas.Filter.Internal to determine whether the input
 * is alpha or rgba.
 *
 * @param[in] obj The object.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Canvas_Filter_Internal
 */
EVAS_API EVAS_API_WEAK Eina_Bool evas_filter_input_alpha(Eo *obj);
#endif

#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
/**
 * @brief Called by Efl.Canvas.Filter.Internal to request the parent class for
 * state information (color, etc...).
 *
 * @param[in] obj The object.
 * @param[out] state State info to fill in
 * @param[in] data Private data for the class
 *
 * @ingroup Efl_Canvas_Filter_Internal
 */
EVAS_API EVAS_API_WEAK void evas_filter_state_prepare(Eo *obj, Efl_Canvas_Filter_State *state, void *data);
#endif

#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
/**
 * @brief Called by Efl.Canvas.Filter.Internal when the parent class must
 * render the input.
 *
 * @param[in] obj The object.
 * @param[in] filter Current filter context
 * @param[in] engine Engine context
 * @param[in] output Output context
 * @param[in] drawctx Draw context (for evas engine)
 * @param[in] data Private data used by textblock
 * @param[in] l Left
 * @param[in] r Right
 * @param[in] t Top
 * @param[in] b Bottom
 * @param[in] x X offset
 * @param[in] y Y offset
 * @param[in] do_async @c true when the operation should be done
 * asynchronously, @c false otherwise
 *
 * @return Indicates success from the object render function.
 *
 * @ingroup Efl_Canvas_Filter_Internal
 */
EVAS_API EVAS_API_WEAK Eina_Bool evas_filter_input_render(Eo *obj, void *filter, void *engine, void *output, void *drawctx, void *data, int l, int r, int t, int b, int x, int y, Eina_Bool do_async);
#endif

#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
/**
 * @brief Called when filter changes must trigger a redraw of the object.
 *
 * Virtual, to be implemented in the parent class.
 * @param[in] obj The object.
 *
 * @ingroup Efl_Canvas_Filter_Internal
 */
EVAS_API EVAS_API_WEAK void evas_filter_dirty(Eo *obj);
#endif

#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
/**
 * @brief Retrieves cached output buffer, if any.
 *
 * Does not increment the reference count.
 *
 * @param[in] obj The object.
 *
 * @return Output buffer
 *
 * @ingroup Efl_Canvas_Filter_Internal
 */
EVAS_API EVAS_API_WEAK void *evas_filter_output_buffer_get(const Eo *obj);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#endif

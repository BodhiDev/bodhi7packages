#ifndef _EFL_UI_WIN_INLINED_EO_H_
#define _EFL_UI_WIN_INLINED_EO_H_

#ifndef _EFL_UI_WIN_INLINED_EO_CLASS_TYPE
#define _EFL_UI_WIN_INLINED_EO_CLASS_TYPE

typedef Eo Efl_Ui_Win_Inlined;

#endif

#ifndef _EFL_UI_WIN_INLINED_EO_TYPES
#define _EFL_UI_WIN_INLINED_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief An inlined window.
 *
 * The window is rendered onto an image buffer. No actual window is created,
 * instead the window and all of its contents will be rendered to an image
 * buffer. This allows child windows inside a parent just like any other
 * object.  You can also do other things like apply map effects. This window
 * must have a valid @ref Efl_Canvas_Object parent.
 *
 * @ingroup Efl_Ui_Win_Inlined
 */
#define EFL_UI_WIN_INLINED_CLASS efl_ui_win_inlined_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_win_inlined_class_get(void) EINA_CONST;

/**
 * @brief This property holds the parent object in the parent canvas.
 *
 * @param[in] obj The object.
 *
 * @return An object in the parent canvas.
 *
 * @ingroup Efl_Ui_Win_Inlined
 */
EAPI EAPI_WEAK Efl_Canvas_Object *efl_ui_win_inlined_parent_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif

#ifndef _EFL_CANVAS_POINTER_EO_H_
#define _EFL_CANVAS_POINTER_EO_H_

#ifndef _EFL_CANVAS_POINTER_EO_CLASS_TYPE
#define _EFL_CANVAS_POINTER_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Pointer;

#endif

#ifndef _EFL_CANVAS_POINTER_EO_TYPES
#define _EFL_CANVAS_POINTER_EO_TYPES


#endif
/** Efl Canvas Pointer interface
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Pointer
 */
#define EFL_CANVAS_POINTER_INTERFACE efl_canvas_pointer_interface_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_pointer_interface_get(void) EINA_CONST;

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Whether the mouse pointer is logically inside the canvas.
 *
 * This value is @c false or @c true, depending on whether a pointer,in or
 * pointer,out event has been previously received.
 *
 * A return value of @c true indicates the mouse is logically inside the
 * canvas, and @c false implies it is logically outside the canvas.
 *
 * A canvas begins with the mouse being assumed outside ($false).
 *
 * @param[in] obj The object.
 * @param[in] seat The seat to consider, if @c null then the default seat will
 * be used.
 *
 * @return @c true if the mouse pointer is inside the canvas, @c false
 * otherwise
 *
 * @since 1.22
 *
 * @ingroup Efl_Canvas_Pointer
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_pointer_inside_get(const Eo *obj, Efl_Input_Device *seat);
#endif /* EFL_BETA_API_SUPPORT */

#endif

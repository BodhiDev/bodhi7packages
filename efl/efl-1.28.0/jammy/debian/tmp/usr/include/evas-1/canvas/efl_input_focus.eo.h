#ifndef _EFL_INPUT_FOCUS_EO_H_
#define _EFL_INPUT_FOCUS_EO_H_

#ifndef _EFL_INPUT_FOCUS_EO_CLASS_TYPE
#define _EFL_INPUT_FOCUS_EO_CLASS_TYPE

typedef Eo Efl_Input_Focus;

#endif

#ifndef _EFL_INPUT_FOCUS_EO_TYPES
#define _EFL_INPUT_FOCUS_EO_TYPES


#endif
/** Represents a focus event.
 *
 * @since 1.22
 *
 * @ingroup Efl_Input_Focus
 */
#define EFL_INPUT_FOCUS_CLASS efl_input_focus_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_input_focus_class_get(void) EINA_CONST;

/**
 * @brief The focused object.
 *
 * @param[in] obj The object.
 * @param[in] object The focused object, or @c NULL if the event comes from the
 * canvas.
 *
 * @since 1.22
 *
 * @ingroup Efl_Input_Focus
 */
EVAS_API EVAS_API_WEAK void efl_input_focus_object_set(Eo *obj, Efl_Object *object);

/**
 * @brief The focused object.
 *
 * @param[in] obj The object.
 *
 * @return The focused object, or @c NULL if the event comes from the canvas.
 *
 * @since 1.22
 *
 * @ingroup Efl_Input_Focus
 */
EVAS_API EVAS_API_WEAK Efl_Object *efl_input_focus_object_get(const Eo *obj);

#endif

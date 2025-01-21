#ifndef _EFL_CANVAS_EVENT_GRABBER_EO_H_
#define _EFL_CANVAS_EVENT_GRABBER_EO_H_

#ifndef _EFL_CANVAS_EVENT_GRABBER_EO_CLASS_TYPE
#define _EFL_CANVAS_EVENT_GRABBER_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Event_Grabber;

#endif

#ifndef _EFL_CANVAS_EVENT_GRABBER_EO_TYPES
#define _EFL_CANVAS_EVENT_GRABBER_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Low-level rectangle object.
 *
 * This provides a smart version of the typical "event rectangle", which allows
 * objects to set this as their parent and route events to a group of objects.
 * Events will not propagate to non-member objects below this object.
 *
 * Adding members is done just like a normal smart object, using
 * efl_canvas_group_member_add (Eo API) or evas_object_smart_member_add
 * (legacy).
 *
 * Child objects are not modified in any way, unlike other types of smart
 * objects.
 *
 * No child objects should be stacked above the event grabber parent while the
 * grabber is visible. A critical error will be raised if this is detected.
 *
 * @ingroup Efl_Canvas_Event_Grabber
 */
#define EFL_CANVAS_EVENT_GRABBER_CLASS efl_canvas_event_grabber_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_event_grabber_class_get(void) EINA_CONST;

/**
 * @brief Stops the grabber from updating its internal stacking order while
 * visible
 *
 * @param[in] obj The object.
 * @param[in] set If @c true, stop updating
 *
 * @ingroup Efl_Canvas_Event_Grabber
 */
EVAS_API EVAS_API_WEAK void efl_canvas_event_grabber_freeze_when_visible_set(Eo *obj, Eina_Bool set);

/**
 * @brief Stops the grabber from updating its internal stacking order while
 * visible
 *
 * @param[in] obj The object.
 *
 * @return If @c true, stop updating
 *
 * @ingroup Efl_Canvas_Event_Grabber
 */
EVAS_API EVAS_API_WEAK Eina_Bool efl_canvas_event_grabber_freeze_when_visible_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif

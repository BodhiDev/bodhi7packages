#ifndef _EFL_CANVAS_LAYOUT_PART_EXTERNAL_EO_H_
#define _EFL_CANVAS_LAYOUT_PART_EXTERNAL_EO_H_

#ifndef _EFL_CANVAS_LAYOUT_PART_EXTERNAL_EO_CLASS_TYPE
#define _EFL_CANVAS_LAYOUT_PART_EXTERNAL_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Layout_Part_External;

#endif

#ifndef _EFL_CANVAS_LAYOUT_PART_EXTERNAL_EO_TYPES
#define _EFL_CANVAS_LAYOUT_PART_EXTERNAL_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Class representing an external part in Edje layouts.
 *
 * An object of this type is an Efl.Part object, which means its lifecycle is
 * limited to only one function call.
 *
 * An external part contains one object, which can be retrieved with
 * @ref efl_content_get(). Do not delete this object. Just like for other parts
 * Edje is in charge of the visibility, geometry, clip, etc.
 *
 * Common usage in pseudo-C would be as follows: Eo *widget =
 * efl_content_get(efl_part(layout, "extpartname")); efl_text_set(widget,
 * "hello");
 *
 * Note that as a shortcut the widget's functions can be called directly on
 * this part object. In C++:
 * efl::eo::downcast<efl::Text>(layout.part("title")).text_set("hello"); Or in
 * pseudo-C: efl_text_set(efl_part(layout, "title"), "hello"); Or in
 * pseudo-script: layout["title"].text = "hello";
 *
 * @ingroup Efl_Canvas_Layout_Part_External
 */
#define EFL_CANVAS_LAYOUT_PART_EXTERNAL_CLASS efl_canvas_layout_part_external_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_canvas_layout_part_external_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif

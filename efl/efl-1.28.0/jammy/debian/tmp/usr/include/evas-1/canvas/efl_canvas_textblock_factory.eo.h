#ifndef _EFL_CANVAS_TEXTBLOCK_FACTORY_EO_H_
#define _EFL_CANVAS_TEXTBLOCK_FACTORY_EO_H_

#ifndef _EFL_CANVAS_TEXTBLOCK_FACTORY_EO_CLASS_TYPE
#define _EFL_CANVAS_TEXTBLOCK_FACTORY_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Textblock_Factory;

#endif

#ifndef _EFL_CANVAS_TEXTBLOCK_FACTORY_EO_TYPES
#define _EFL_CANVAS_TEXTBLOCK_FACTORY_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Object factory that creates Efl.Canvas.Object objects.
 *
 * Translates a given key to an object (item), to be later placed in a text for
 * higher level usages. The translation implementation is left to be decided by
 * the inheriting class, whether it is by treating the @c key as an image path,
 * or a key associated with a real-path in a hashtable or something else
 * entirely.
 *
 * @ingroup Efl_Canvas_Textblock_Factory
 */
#define EFL_CANVAS_TEXTBLOCK_FACTORY_INTERFACE efl_canvas_textblock_factory_interface_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_textblock_factory_interface_get(void) EINA_CONST;

/**
 * @brief Translates a given @c key to an item object, and returns the object.
 * The returned object should be owned by the passed @c object.
 *
 * @param[in] obj The object.
 * @param[in] object The parent of the created object
 * @param[in] key Key that is associated to an item object
 *
 * @ingroup Efl_Canvas_Textblock_Factory
 */
EVAS_API EVAS_API_WEAK Efl_Canvas_Object *efl_canvas_textblock_factory_create(Eo *obj, Efl_Canvas_Object *object, const char *key) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;
#endif /* EFL_BETA_API_SUPPORT */

#endif

#ifndef _EFL_UI_RELATIVE_CONTAINER_EO_H_
#define _EFL_UI_RELATIVE_CONTAINER_EO_H_

#ifndef _EFL_UI_RELATIVE_CONTAINER_EO_CLASS_TYPE
#define _EFL_UI_RELATIVE_CONTAINER_EO_CLASS_TYPE

typedef Eo Efl_Ui_Relative_Container;

#endif

#ifndef _EFL_UI_RELATIVE_CONTAINER_EO_TYPES
#define _EFL_UI_RELATIVE_CONTAINER_EO_TYPES


#endif
/**
 * @brief The relative container class.
 *
 * A relative container calculates the size and position of all the children
 * based on their relationship to each other.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Relative_Container
 */
#define EFL_UI_RELATIVE_CONTAINER_CLASS efl_ui_relative_container_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_relative_container_class_get(void) EINA_CONST;

/**
 * @brief Specifies the left side edge of the @c child object relative to the
 * @c base object. When @c relative_position is 0 the left edges of the two
 * objects are aligned. When @c relative_position is 1 the left edge of the
 * @c child object is aligned to the right edge of the @c base object.
 *
 * @param[in] obj The object.
 * @param[in] child The child object whose size and position is being changed.
 * @param[in] base The object whose size and position is being used as
 * reference. @c NULL means that the container object is used (this is the
 * default value).
 * @param[in] relative_position The ratio between left and right of the base,
 * ranging from 0.0 to 1.0.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Relative_Container
 */
EAPI EAPI_WEAK void efl_ui_relative_container_relation_left_set(Eo *obj, Efl_Gfx_Entity *child, Efl_Gfx_Entity *base, Efl_Gfx_Align relative_position);

/**
 * @brief Specifies the left side edge of the @c child object relative to the
 * @c base object. When @c relative_position is 0 the left edges of the two
 * objects are aligned. When @c relative_position is 1 the left edge of the
 * @c child object is aligned to the right edge of the @c base object.
 *
 * @param[in] obj The object.
 * @param[in] child The child object whose size and position is being changed.
 * @param[out] base The object whose size and position is being used as
 * reference. @c NULL means that the container object is used (this is the
 * default value).
 * @param[out] relative_position The ratio between left and right of the base,
 * ranging from 0.0 to 1.0.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Relative_Container
 */
EAPI EAPI_WEAK void efl_ui_relative_container_relation_left_get(const Eo *obj, Efl_Gfx_Entity *child, Efl_Gfx_Entity **base, Efl_Gfx_Align *relative_position);

/**
 * @brief Specifies the right side edge of the @c child object relative to the
 * @c base object. When @c relative_position is 0 the right edge of the
 * @c child object is aligned to the left edge of the @c base object. When
 * @c relative_position is 1 the right edges of the two objects are aligned.
 *
 * @param[in] obj The object.
 * @param[in] child The child object whose size and position is being changed.
 * @param[in] base The object whose size and position is being used as
 * reference. @c NULL means that the container object is used (this is the
 * default value).
 * @param[in] relative_position The ratio between left and right of the base,
 * ranging from 0.0 to 1.0.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Relative_Container
 */
EAPI EAPI_WEAK void efl_ui_relative_container_relation_right_set(Eo *obj, Efl_Gfx_Entity *child, Efl_Gfx_Entity *base, Efl_Gfx_Align relative_position);

/**
 * @brief Specifies the right side edge of the @c child object relative to the
 * @c base object. When @c relative_position is 0 the right edge of the
 * @c child object is aligned to the left edge of the @c base object. When
 * @c relative_position is 1 the right edges of the two objects are aligned.
 *
 * @param[in] obj The object.
 * @param[in] child The child object whose size and position is being changed.
 * @param[out] base The object whose size and position is being used as
 * reference. @c NULL means that the container object is used (this is the
 * default value).
 * @param[out] relative_position The ratio between left and right of the base,
 * ranging from 0.0 to 1.0.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Relative_Container
 */
EAPI EAPI_WEAK void efl_ui_relative_container_relation_right_get(const Eo *obj, Efl_Gfx_Entity *child, Efl_Gfx_Entity **base, Efl_Gfx_Align *relative_position);

/**
 * @brief Specifies the top side edge of the @c child object relative to the
 * @c base object. When @c relative_position is 0 the top edges of the two
 * objects are aligned. When @c relative_position is 1 the top edge of the
 * @c child object is aligned to the bottom edge of the @c base object.
 *
 * @param[in] obj The object.
 * @param[in] child The child object whose size and position is being changed.
 * @param[in] base The object whose size and position is being used as
 * reference. @c NULL means that the container object is used (this is the
 * default value).
 * @param[in] relative_position The ratio between top and bottom of the base,
 * ranging from 0.0 to 1.0.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Relative_Container
 */
EAPI EAPI_WEAK void efl_ui_relative_container_relation_top_set(Eo *obj, Efl_Gfx_Entity *child, Efl_Gfx_Entity *base, Efl_Gfx_Align relative_position);

/**
 * @brief Specifies the top side edge of the @c child object relative to the
 * @c base object. When @c relative_position is 0 the top edges of the two
 * objects are aligned. When @c relative_position is 1 the top edge of the
 * @c child object is aligned to the bottom edge of the @c base object.
 *
 * @param[in] obj The object.
 * @param[in] child The child object whose size and position is being changed.
 * @param[out] base The object whose size and position is being used as
 * reference. @c NULL means that the container object is used (this is the
 * default value).
 * @param[out] relative_position The ratio between top and bottom of the base,
 * ranging from 0.0 to 1.0.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Relative_Container
 */
EAPI EAPI_WEAK void efl_ui_relative_container_relation_top_get(const Eo *obj, Efl_Gfx_Entity *child, Efl_Gfx_Entity **base, Efl_Gfx_Align *relative_position);

/**
 * @brief Specifies the bottom side edge of the @c child object relative to the
 * @c base object. When @c relative_position is 0 the bottom edge of the
 * @c child object is aligned to the top edge of the @c base object. When
 * @c relative_position is 1 the bottom edges of the two objects are aligned.
 *
 * @param[in] obj The object.
 * @param[in] child The child object whose size and position is being changed.
 * @param[in] base The object whose size and position is being used as
 * reference. @c NULL means that the container object is used (this is the
 * default value).
 * @param[in] relative_position The ratio between top and bottom of the base,
 * ranging from 0.0 to 1.0.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Relative_Container
 */
EAPI EAPI_WEAK void efl_ui_relative_container_relation_bottom_set(Eo *obj, Efl_Gfx_Entity *child, Efl_Gfx_Entity *base, Efl_Gfx_Align relative_position);

/**
 * @brief Specifies the bottom side edge of the @c child object relative to the
 * @c base object. When @c relative_position is 0 the bottom edge of the
 * @c child object is aligned to the top edge of the @c base object. When
 * @c relative_position is 1 the bottom edges of the two objects are aligned.
 *
 * @param[in] obj The object.
 * @param[in] child The child object whose size and position is being changed.
 * @param[out] base The object whose size and position is being used as
 * reference. @c NULL means that the container object is used (this is the
 * default value).
 * @param[out] relative_position The ratio between top and bottom of the base,
 * ranging from 0.0 to 1.0.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Relative_Container
 */
EAPI EAPI_WEAK void efl_ui_relative_container_relation_bottom_get(const Eo *obj, Efl_Gfx_Entity *child, Efl_Gfx_Entity **base, Efl_Gfx_Align *relative_position);

#endif

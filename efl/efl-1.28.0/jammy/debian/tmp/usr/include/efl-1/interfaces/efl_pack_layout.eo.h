#ifndef _EFL_PACK_LAYOUT_EO_H_
#define _EFL_PACK_LAYOUT_EO_H_

#ifndef _EFL_PACK_LAYOUT_EO_CLASS_TYPE
#define _EFL_PACK_LAYOUT_EO_CLASS_TYPE

typedef Eo Efl_Pack_Layout;

#endif

#ifndef _EFL_PACK_LAYOUT_EO_TYPES
#define _EFL_PACK_LAYOUT_EO_TYPES


#endif
/**
 * @brief Low-level APIs for objects that can lay their children out.
 *
 * Used for containers like @ref Efl_Ui_Box and @ref Efl_Ui_Table.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Layout
 */
#define EFL_PACK_LAYOUT_INTERFACE efl_pack_layout_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_pack_layout_interface_get(void) EINA_CONST;

/**
 * @brief Requests EFL to recalculate the layout of this object.
 *
 * Internal layout methods might be called asynchronously.
 *
 * @param[in] obj The object.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Layout
 */
EAPI EAPI_WEAK void efl_pack_layout_request(Eo *obj);

#ifdef EFL_PACK_LAYOUT_PROTECTED
/**
 * @brief Implementation of this container's layout algorithm.
 *
 * EFL will call this function whenever the contents of this container need to
 * be re-laid out on the canvas.
 *
 * This can be overridden to implement custom layout behaviors.
 *
 * @param[in] obj The object.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Layout
 */
EAPI EAPI_WEAK void efl_pack_layout_update(Eo *obj);
#endif

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_PACK_EVENT_LAYOUT_UPDATED;

/** Sent after the layout was updated.
 *
 * @since 1.23
 *
 * @ingroup Efl_Pack_Layout
 */
#define EFL_PACK_EVENT_LAYOUT_UPDATED (&(_EFL_PACK_EVENT_LAYOUT_UPDATED))

#endif

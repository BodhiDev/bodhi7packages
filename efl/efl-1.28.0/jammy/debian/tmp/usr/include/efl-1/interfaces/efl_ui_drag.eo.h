#ifndef _EFL_UI_DRAG_EO_H_
#define _EFL_UI_DRAG_EO_H_

#ifndef _EFL_UI_DRAG_EO_CLASS_TYPE
#define _EFL_UI_DRAG_EO_CLASS_TYPE

typedef Eo Efl_Ui_Drag;

#endif

#ifndef _EFL_UI_DRAG_EO_TYPES
#define _EFL_UI_DRAG_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Common interface for draggable objects and parts.
 *
 * @ingroup Efl_Ui_Drag
 */
#define EFL_UI_DRAG_INTERFACE efl_ui_drag_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_drag_interface_get(void) EINA_CONST;

/**
 * @brief The draggable object relative location.
 *
 * Some parts in Edje can be dragged along the X/Y axes, if the part contains a
 * "draggable" section (in EDC). For instance, scroll bars can be draggable
 * objects.
 *
 * @c dx and @c dy are real numbers that range from 0 to 1, representing the
 * relative position to the draggable area on that axis.
 *
 * This value means, for the vertical axis, that 0.0 will be at the top if the
 * first parameter of @c y in the draggable part theme is 1 and at the bottom
 * if it is -1.
 *
 * For the horizontal axis, 0.0 means left if the first parameter of @c x in
 * the draggable part theme is 1, and right if it is -1.
 *
 * @param[in] obj The object.
 * @param[in] dx The x relative position, from 0 to 1.
 * @param[in] dy The y relative position, from 0 to 1.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Ui_Drag
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_drag_value_set(Eo *obj, double dx, double dy);

/**
 * @brief The draggable object relative location.
 *
 * Some parts in Edje can be dragged along the X/Y axes, if the part contains a
 * "draggable" section (in EDC). For instance, scroll bars can be draggable
 * objects.
 *
 * @c dx and @c dy are real numbers that range from 0 to 1, representing the
 * relative position to the draggable area on that axis.
 *
 * This value means, for the vertical axis, that 0.0 will be at the top if the
 * first parameter of @c y in the draggable part theme is 1 and at the bottom
 * if it is -1.
 *
 * For the horizontal axis, 0.0 means left if the first parameter of @c x in
 * the draggable part theme is 1, and right if it is -1.
 *
 * @param[in] obj The object.
 * @param[out] dx The x relative position, from 0 to 1.
 * @param[out] dy The y relative position, from 0 to 1.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Ui_Drag
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_drag_value_get(const Eo *obj, double *dx, double *dy);

/**
 * @brief The draggable object relative size.
 *
 * Values for @c dw and @c dh are real numbers that range from 0 to 1,
 * representing the relative size of the draggable area on that axis.
 *
 * For instance a scroll bar handle size may depend on the size of the
 * scroller's content.
 *
 * @param[in] obj The object.
 * @param[in] dw The drag relative width, from 0 to 1.
 * @param[in] dh The drag relative height, from 0 to 1.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Ui_Drag
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_drag_size_set(Eo *obj, double dw, double dh);

/**
 * @brief The draggable object relative size.
 *
 * Values for @c dw and @c dh are real numbers that range from 0 to 1,
 * representing the relative size of the draggable area on that axis.
 *
 * For instance a scroll bar handle size may depend on the size of the
 * scroller's content.
 *
 * @param[in] obj The object.
 * @param[out] dw The drag relative width, from 0 to 1.
 * @param[out] dh The drag relative height, from 0 to 1.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Ui_Drag
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_drag_size_get(const Eo *obj, double *dw, double *dh);

/**
 * @brief Determines the draggable directions (read-only).
 *
 * The draggable directions are defined in the EDC file, inside the "draggable"
 * section, by the attributes @c x and @c y. See the EDC reference
 * documentation for more information.
 *
 * @param[in] obj The object.
 *
 * @return The direction(s) premitted for drag.
 *
 * @ingroup Efl_Ui_Drag
 */
EAPI EAPI_WEAK Efl_Ui_Drag_Dir efl_ui_drag_dir_get(const Eo *obj);

/**
 * @brief The drag step increment.
 *
 * Values for @c dx and @c dy are real numbers that range from 0 to 1,
 * representing the relative size of the draggable area on that axis by which
 * the part will be moved.
 *
 * This differs from @ref efl_ui_drag_page_get in that this is meant to
 * represent a unit increment, like a single line for example.
 *
 * See also @ref efl_ui_drag_page_get.
 *
 * @param[in] obj The object.
 * @param[in] dx The x step relative amount, from 0 to 1.
 * @param[in] dy The y step relative amount, from 0 to 1.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Ui_Drag
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_drag_step_set(Eo *obj, double dx, double dy);

/**
 * @brief The drag step increment.
 *
 * Values for @c dx and @c dy are real numbers that range from 0 to 1,
 * representing the relative size of the draggable area on that axis by which
 * the part will be moved.
 *
 * This differs from @ref efl_ui_drag_page_get in that this is meant to
 * represent a unit increment, like a single line for example.
 *
 * See also @ref efl_ui_drag_page_get.
 *
 * @param[in] obj The object.
 * @param[out] dx The x step relative amount, from 0 to 1.
 * @param[out] dy The y step relative amount, from 0 to 1.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Ui_Drag
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_drag_step_get(const Eo *obj, double *dx, double *dy);

/**
 * @brief Moves the draggable by @c dx,$dy steps.
 *
 * This moves the draggable part by @c dx,$dy steps where the step increment is
 * the amount set by @ref efl_ui_drag_step_set().
 *
 * @c dx and @c dy can be positive or negative numbers, integer values are
 * recommended.
 *
 * @param[in] obj The object.
 * @param[in] dx The number of steps horizontally.
 * @param[in] dy The number of steps vertically.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Ui_Drag
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_drag_step_move(Eo *obj, double dx, double dy);

/**
 * @brief The page step increments.
 *
 * Values for @c dx and @c dy are real numbers that range from 0 to 1,
 * representing the relative size of the draggable area on that axis by which
 * the part will be moved.
 *
 * This differs from @ref efl_ui_drag_step_get in that this is meant to be a
 * larger step size, basically an entire page as opposed to a single or couple
 * of lines.
 *
 * See also @ref efl_ui_drag_step_get.
 *
 * @param[in] obj The object.
 * @param[in] dx The x page step increment
 * @param[in] dy The y page step increment
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Ui_Drag
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_drag_page_set(Eo *obj, double dx, double dy);

/**
 * @brief The page step increments.
 *
 * Values for @c dx and @c dy are real numbers that range from 0 to 1,
 * representing the relative size of the draggable area on that axis by which
 * the part will be moved.
 *
 * This differs from @ref efl_ui_drag_step_get in that this is meant to be a
 * larger step size, basically an entire page as opposed to a single or couple
 * of lines.
 *
 * See also @ref efl_ui_drag_step_get.
 *
 * @param[in] obj The object.
 * @param[out] dx The x page step increment
 * @param[out] dy The y page step increment
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Ui_Drag
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_drag_page_get(const Eo *obj, double *dx, double *dy);

/**
 * @brief Moves the draggable by @c dx,$dy pages.
 *
 * This moves the draggable by @c dx,$dy pages. The increment is defined by
 * @ref efl_ui_drag_page_set().
 *
 * @c dx and @c dy can be positive or negative numbers, integer values are
 * recommended.
 *
 * @warning Paging is bugged!
 *
 * @param[in] obj The object.
 * @param[in] dx The number of pages horizontally.
 * @param[in] dy The number of pages vertically.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Ui_Drag
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_drag_page_move(Eo *obj, double dx, double dy);
#endif /* EFL_BETA_API_SUPPORT */

#endif

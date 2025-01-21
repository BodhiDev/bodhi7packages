#ifndef _EFL_UI_SPOTLIGHT_MANAGER_EO_H_
#define _EFL_UI_SPOTLIGHT_MANAGER_EO_H_

#ifndef _EFL_UI_SPOTLIGHT_MANAGER_EO_CLASS_TYPE
#define _EFL_UI_SPOTLIGHT_MANAGER_EO_CLASS_TYPE

typedef Eo Efl_Ui_Spotlight_Manager;

#endif

#ifndef _EFL_UI_SPOTLIGHT_MANAGER_EO_TYPES
#define _EFL_UI_SPOTLIGHT_MANAGER_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Indicator for the reason of a @ref efl_ui_spotlight_manager_switch_to call
 *
 * @ingroup Efl_Ui_Spotlight_Manager_Switch_Reason
 */
typedef enum
{
  EFL_UI_SPOTLIGHT_MANAGER_SWITCH_REASON_JUMP = 0, /**< The Reason for this
                                                    * switch is a casual jump
                                                    * caused by
                                                    * @ref efl_ui_spotlight_active_element_get
                                                    */
  EFL_UI_SPOTLIGHT_MANAGER_SWITCH_REASON_PUSH, /**< The Reason for this switch
                                                * is a casual jump caused by
                                                * @ref efl_ui_spotlight_push */
  EFL_UI_SPOTLIGHT_MANAGER_SWITCH_REASON_POP /**< The Reason for this switch is
                                              * a casual jump caused by
                                              * @ref efl_ui_spotlight_pop */
} Efl_Ui_Spotlight_Manager_Switch_Reason;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Manager object used by @ref Efl_Ui_Spotlight_Container to handle
 * rendering and animation of its sub-widgets, and user interaction.
 *
 * For instance, changes to the current sub-widget in the spotlight
 * (@Efl.Ui.Spotlight.Container.active_element) can be animated with a
 * transition. This object can also handle user interaction. For example,
 * dragging the sub-widget to one side to get to a different sub-widget (like
 * an smartphone home screen). Such user interactions should end up setting a
 * new @ref efl_ui_spotlight_active_element_get. During a transition, the
 * evolution of the current position should be exposed by emitting
 * @c pos_update events.
 *
 * @ingroup Efl_Ui_Spotlight_Manager
 */
#define EFL_UI_SPOTLIGHT_MANAGER_CLASS efl_ui_spotlight_manager_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_spotlight_manager_class_get(void) EINA_CONST;

/**
 * @brief This method is called the first time an @ref Efl_Ui_Spotlight_Manager
 * is assigned to an @ref Efl_Ui_Spotlight_Container, binding them together.
 * The manager can read the current content of the container, subscribe to
 * events, or do any initialization it requires.
 *
 * @param[in] obj The object.
 * @param[in] spotlight The container to bind the manager to.
 *
 * @ingroup Efl_Ui_Spotlight_Manager
 */
EAPI EAPI_WEAK void efl_ui_spotlight_manager_bind(Eo *obj, Efl_Ui_Spotlight_Container *spotlight);

/**
 * @brief A @c subobj has been added at position @c index in the bound
 * container.
 *
 * @param[in] obj The object.
 * @param[in] subobj The new object that has been added to the container.
 * @param[in] index The index of the new object in the container's list.
 *
 * @ingroup Efl_Ui_Spotlight_Manager
 */
EAPI EAPI_WEAK void efl_ui_spotlight_manager_content_add(Eo *obj, Efl_Gfx_Entity *subobj, int index);

/**
 * @brief The @c subobj at position @c index in the bound container has been
 * removed.
 *
 * @param[in] obj The object.
 * @param[in] subobj The object being removed from the container.
 * @param[in] index The index this object had in the container's list.
 *
 * @ingroup Efl_Ui_Spotlight_Manager
 */
EAPI EAPI_WEAK void efl_ui_spotlight_manager_content_del(Eo *obj, Efl_Gfx_Entity *subobj, int index);

/**
 * @brief Switch from one sub-widget to another. If there was no previous
 * sub-widget, @c from might be -1. This function should display an animation
 * if the @ref Efl_Ui_Spotlight_Manager supports them.
 *
 * @param[in] obj The object.
 * @param[in] from Index of the starting sub-widget in the container's list.
 * Might be -1 if unknown.
 * @param[in] to Index of the target sub-widget in the container's list.
 * @param[in] reason The reason for this switch to call
 *
 * @ingroup Efl_Ui_Spotlight_Manager
 */
EAPI EAPI_WEAK void efl_ui_spotlight_manager_switch_to(Eo *obj, int from, int to, Efl_Ui_Spotlight_Manager_Switch_Reason reason);

/**
 * @brief Will be called whenever the @ref efl_ui_spotlight_size_get changes so
 * the @ref Efl_Ui_Spotlight_Manager can update itself.
 *
 * @param[in] obj The object.
 * @param[in] size The new size of the sub-widgets.
 *
 * @ingroup Efl_Ui_Spotlight_Manager
 */
EAPI EAPI_WEAK void efl_ui_spotlight_manager_size_set(Eo *obj, Eina_Size2D size);

/**
 * @brief When this flag is @c true the transition from the previous element to
 * the new one will be animated whenever
 * @ref efl_ui_spotlight_active_element_get changes.
 *
 * @param[in] obj The object.
 * @param[in] enable @c true to enable animated transitions. If @c false, the
 * new active element is shown immediately.
 *
 * @ingroup Efl_Ui_Spotlight_Manager
 */
EAPI EAPI_WEAK void efl_ui_spotlight_manager_animated_transition_set(Eo *obj, Eina_Bool enable);

/**
 * @brief When this flag is @c true the transition from the previous element to
 * the new one will be animated whenever
 * @ref efl_ui_spotlight_active_element_get changes.
 *
 * @param[in] obj The object.
 *
 * @return @c true to enable animated transitions. If @c false, the new active
 * element is shown immediately.
 *
 * @ingroup Efl_Ui_Spotlight_Manager
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_spotlight_manager_animated_transition_get(const Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_SPOTLIGHT_MANAGER_EVENT_POS_UPDATE;

/** Index of the sub-widget currently being displayed. Fractional values
 * indicate a position in-between sub-widgets. For instance, when transitioning
 * from sub-widget 2 to sub-widget 3, this event should be emitted with
 * monotonically increasing values ranging from 2.0 to 3.0. Animations can
 * perform any movement they want, but the reported @c pos_update must move in
 * the same direction.
 * @return double
 *
 * @ingroup Efl_Ui_Spotlight_Manager
 */
#define EFL_UI_SPOTLIGHT_MANAGER_EVENT_POS_UPDATE (&(_EFL_UI_SPOTLIGHT_MANAGER_EVENT_POS_UPDATE))
#endif /* EFL_BETA_API_SUPPORT */

#endif

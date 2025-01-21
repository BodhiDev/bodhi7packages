#ifndef _EFL_UI_SPOTLIGHT_CONTAINER_EO_H_
#define _EFL_UI_SPOTLIGHT_CONTAINER_EO_H_

#ifndef _EFL_UI_SPOTLIGHT_CONTAINER_EO_CLASS_TYPE
#define _EFL_UI_SPOTLIGHT_CONTAINER_EO_CLASS_TYPE

typedef Eo Efl_Ui_Spotlight_Container;

#endif

#ifndef _EFL_UI_SPOTLIGHT_CONTAINER_EO_TYPES
#define _EFL_UI_SPOTLIGHT_CONTAINER_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Information regarding transition events.
 *
 * @ingroup Efl_Ui_Spotlight_Transition_Event
 */
typedef struct _Efl_Ui_Spotlight_Transition_Event
{
  int from; /**< The index from where the transition started, -1 if not known.
             */
  int to; /**< The index to where the transition is headed, -1 if not known. */
} Efl_Ui_Spotlight_Transition_Event;
#endif /* EFL_BETA_API_SUPPORT */


#endif
/**
 * @brief The Spotlight widget is a container for other sub-widgets, where only
 * one sub-widget is active at any given time.
 *
 * Sub-widgets are added using the @ref Efl_Pack_Linear interface and the
 * active one (the one in the "spotlight") is selected using
 * @ref efl_ui_spotlight_active_element_get.
 *
 * The way the different sub-widgets are rendered can be customized through the
 * @ref efl_ui_spotlight_manager_get object. For example, only the active
 * sub-widget might be shown, or it might be shown in a central position
 * whereas the other sub-widgets are displayed on the sides, or grayed-out. All
 * sub-widgets are displayed with the same size, selected with
 * @ref efl_ui_spotlight_size_get.
 *
 * Additionally, the transition from one sub-widget to another can be animated.
 * This animation is also controlled by the @ref efl_ui_spotlight_manager_get
 * object.
 *
 * Also, an indicator widget can be used to show a visual cue of how many
 * sub-widgets are there and which one is the active one.
 *
 * This class can be used to create other widgets like Pagers, Tabbed pagers or
 * Stacks, where each sub-widget represents a "page" full of other widgets. All
 * these cases can be implemented with a different
 * @ref efl_ui_spotlight_manager_get and use the same
 * @ref Efl_Ui_Spotlight_Container.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Spotlight_Container
 */
#define EFL_UI_SPOTLIGHT_CONTAINER_CLASS efl_ui_spotlight_container_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_spotlight_container_class_get(void) EINA_CONST;

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief This object defines how sub-widgets are rendered and animated. If it
 * is not set, only the active sub-widget is shown and transitions are
 * instantaneous (not animated).
 *
 * @param[in] obj The object.
 * @param[in] spotlight_manager The Spotlight Manager object or @c NULL.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Spotlight_Container
 */
EAPI EAPI_WEAK void efl_ui_spotlight_manager_set(Eo *obj, Efl_Ui_Spotlight_Manager *spotlight_manager EFL_TRANSFER_OWNERSHIP);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief This object defines how sub-widgets are rendered and animated. If it
 * is not set, only the active sub-widget is shown and transitions are
 * instantaneous (not animated).
 *
 * @param[in] obj The object.
 *
 * @return The Spotlight Manager object or @c NULL.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Spotlight_Container
 */
EAPI EAPI_WEAK Efl_Ui_Spotlight_Manager *efl_ui_spotlight_manager_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief An indicator object to use, which will display the current state of
 * the spotlight (number of sub-widgets and active one). When this object is
 * set, it is immediately updated to reflect the current state of the widget.
 * Its location inside the container is controlled by the
 * @ref efl_ui_spotlight_manager_get.
 *
 * @param[in] obj The object.
 * @param[in] indicator The Indicator object or @c NULL.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Spotlight_Container
 */
EAPI EAPI_WEAK void efl_ui_spotlight_indicator_set(Eo *obj, Efl_Ui_Spotlight_Indicator *indicator EFL_TRANSFER_OWNERSHIP);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief An indicator object to use, which will display the current state of
 * the spotlight (number of sub-widgets and active one). When this object is
 * set, it is immediately updated to reflect the current state of the widget.
 * Its location inside the container is controlled by the
 * @ref efl_ui_spotlight_manager_get.
 *
 * @param[in] obj The object.
 *
 * @return The Indicator object or @c NULL.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Spotlight_Container
 */
EAPI EAPI_WEAK Efl_Ui_Spotlight_Indicator *efl_ui_spotlight_indicator_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief Currently active sub-widget (the one with the spotlight) among all
 * the sub-widgets added to this widget
 *
 * Changing this value might trigger an animation.
 *
 * @param[in] obj The object.
 * @param[in] element Sub-widget that has the spotlight. The element has to be
 * added prior to this call via the @ref Efl_Pack_Linear interface.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Spotlight_Container
 */
EAPI EAPI_WEAK void efl_ui_spotlight_active_element_set(Eo *obj, Efl_Ui_Widget *element);

/**
 * @brief Currently active sub-widget (the one with the spotlight) among all
 * the sub-widgets added to this widget
 *
 * Changing this value might trigger an animation.
 *
 * @param[in] obj The object.
 *
 * @return Sub-widget that has the spotlight. The element has to be added prior
 * to this call via the @ref Efl_Pack_Linear interface.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Spotlight_Container
 */
EAPI EAPI_WEAK Efl_Ui_Widget *efl_ui_spotlight_active_element_get(const Eo *obj);

/**
 * @brief The size to use when displaying the Sub-Widget which has the
 * spotlight. This is used by the @ref efl_ui_spotlight_manager_get to perform
 * the rendering. Sub-Widgets other than the Active one may or may not use this
 * size.
 *
 * @param[in] obj The object.
 * @param[in] size Render size for the spotlight. (-1, -1) means that all
 * available space inside the container can be used.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Spotlight_Container
 */
EAPI EAPI_WEAK void efl_ui_spotlight_size_set(Eo *obj, Eina_Size2D size);

/**
 * @brief The size to use when displaying the Sub-Widget which has the
 * spotlight. This is used by the @ref efl_ui_spotlight_manager_get to perform
 * the rendering. Sub-Widgets other than the Active one may or may not use this
 * size.
 *
 * @param[in] obj The object.
 *
 * @return Render size for the spotlight. (-1, -1) means that all available
 * space inside the container can be used.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Spotlight_Container
 */
EAPI EAPI_WEAK Eina_Size2D efl_ui_spotlight_size_get(const Eo *obj);

/**
 * @brief When this flag is @c true the transitions caused by
 * @ref efl_ui_spotlight_push, @ref efl_ui_spotlight_pop or
 * @ref efl_ui_spotlight_active_element_get are animated (if the
 * @ref efl_ui_spotlight_manager_get supports that). @c false means immidiate
 * displaying at the final position.
 *
 * @param[in] obj The object.
 * @param[in] enable @c true to enable animated transitions. If @c false, then
 * any transition is displayed at the final position immidiatly
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Spotlight_Container
 */
EAPI EAPI_WEAK void efl_ui_spotlight_animated_transition_set(Eo *obj, Eina_Bool enable);

/**
 * @brief When this flag is @c true the transitions caused by
 * @ref efl_ui_spotlight_push, @ref efl_ui_spotlight_pop or
 * @ref efl_ui_spotlight_active_element_get are animated (if the
 * @ref efl_ui_spotlight_manager_get supports that). @c false means immidiate
 * displaying at the final position.
 *
 * @param[in] obj The object.
 *
 * @return @c true to enable animated transitions. If @c false, then any
 * transition is displayed at the final position immidiatly
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Spotlight_Container
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_spotlight_animated_transition_get(const Eo *obj);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Packs a new sub-widget after
 * @ref efl_ui_spotlight_active_element_get, and move the spotlight there.
 *
 * This is the same behavior as a push operation on a stack. When sub-widgets
 * are added using only @ref efl_ui_spotlight_push and
 * @ref efl_ui_spotlight_pop you don't have to worry about
 * @ref efl_ui_spotlight_active_element_get since only the last sub-widget is
 * manipulated, and this container behaves like a traditional stack.
 *
 * An animation might be triggered to give the new sub-widget the spotlight and
 * come into position.
 *
 * @param[in] obj The object.
 * @param[in] widget Sub-Widget to add and set to be the spotlight sub-widget.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Spotlight_Container
 */
EAPI EAPI_WEAK void efl_ui_spotlight_push(Eo *obj, Efl_Gfx_Entity *widget);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Removes the sub-widget that has the spotlight from the widget.
 *
 * The spotlight is moved to the previous sub-widget. This is the same behavior
 * as a pop operation on a stack. When sub-widgets are added using only
 * @ref efl_ui_spotlight_push and @ref efl_ui_spotlight_pop you don't have to
 * worry about @ref efl_ui_spotlight_active_element_get since only the last
 * sub-widget is manipulated, and this container behaves like a traditional
 * stack.
 *
 * An animation might be triggered to give the new sub-widget the spotlight,
 * come into position and the old one disappear.
 *
 * The removed sub-widget can be returned to the caller or deleted (depending
 * on @c delete_on_transition_end).
 *
 * @param[in] obj The object.
 * @param[in] deletion_on_transition_end If @c true, then the object will be
 * deleted before resolving the future, and a @c NULL pointer is the value of
 * the future. @c false if no operation should be applied to it.
 *
 * @return This Future gets resolved when any transition animation finishes and
 * the popped sub-widget is ready for collection. If there is no animation, the
 * Future resolves immediately. If @c deletion_on_transition_end is @c true
 * then this widget will destroy the popped sub-widget and the Future will
 * contain no Value. Otherwise, the caller becomes the owner of the sub-widget
 * contained in the Future and must dispose of it appropriately.
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Spotlight_Container
 */
EAPI EAPI_WEAK Eina_Future *efl_ui_spotlight_pop(Eo *obj, Eina_Bool deletion_on_transition_end);
#endif /* EFL_BETA_API_SUPPORT */
#ifdef EFL_BETA_API_SUPPORT
EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_SPOTLIGHT_EVENT_TRANSITION_START;

/** A transition animation has started.
 * @return Efl_Ui_Spotlight_Transition_Event
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Spotlight_Container
 */
#define EFL_UI_SPOTLIGHT_EVENT_TRANSITION_START (&(_EFL_UI_SPOTLIGHT_EVENT_TRANSITION_START))
#endif /* EFL_BETA_API_SUPPORT */
#ifdef EFL_BETA_API_SUPPORT
EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_SPOTLIGHT_EVENT_TRANSITION_END;

/** A transition animation has ended.
 * @return Efl_Ui_Spotlight_Transition_Event
 *
 * @since 1.24
 *
 * @ingroup Efl_Ui_Spotlight_Container
 */
#define EFL_UI_SPOTLIGHT_EVENT_TRANSITION_END (&(_EFL_UI_SPOTLIGHT_EVENT_TRANSITION_END))
#endif /* EFL_BETA_API_SUPPORT */

#endif

#ifndef _EFL_UI_DND_EO_H_
#define _EFL_UI_DND_EO_H_

#ifndef _EFL_UI_DND_EO_CLASS_TYPE
#define _EFL_UI_DND_EO_CLASS_TYPE

typedef Eo Efl_Ui_Dnd;

#endif

#ifndef _EFL_UI_DND_EO_TYPES
#define _EFL_UI_DND_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Information sent along with Drag & Drop events.
 *
 * @ingroup Efl_Ui_Drop_Event
 */
typedef struct _Efl_Ui_Drop_Event
{
  Eina_Position2D position; /**< The position where the drop event occurred, in
                             * window coordinates. */
  unsigned int seat; /**< Which seat triggered the event. */
  Eina_Accessor *available_types; /**<
                                   * @brief Types with automatic conversion
                                   * available. Use one of them in the call to
                                   * @ref efl_ui_dnd_drop_data_get.
                                   *
                                   * Types are IANA MIME types:
                                   * https://www.iana.org/assignments/media-types/media-types.xhtml
                                   */
} Efl_Ui_Drop_Event;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Information sent along with Drop events.
 *
 * @ingroup Efl_Ui_Drop_Dropped_Event
 */
typedef struct _Efl_Ui_Drop_Dropped_Event
{
  Efl_Ui_Drop_Event dnd; /**< Common information. */
  const char *action; /**< Requested action to perform upon reception of this
                       * data. */
} Efl_Ui_Drop_Dropped_Event;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Information sent along with @ref Efl_Ui_Drag_Started_Event events.
 *
 * @ingroup Efl_Ui_Drag_Started_Event
 */
typedef struct _Efl_Ui_Drag_Started_Event
{
  unsigned int seat; /**< Which seat triggered the event. */
} Efl_Ui_Drag_Started_Event;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Information sent along with @ref Efl_Ui_Drag_Finished_Event events.
 *
 * @ingroup Efl_Ui_Drag_Finished_Event
 */
typedef struct _Efl_Ui_Drag_Finished_Event
{
  unsigned int seat; /**< Which seat triggered the event. */
  Eina_Bool accepted; /**< @c true if the operation completed with a Drop, or
                       * @c false if it was cancelled. */
} Efl_Ui_Drag_Finished_Event;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief This mixin provides the ability to interact with the system's Drag &
 * Drop facilities.
 *
 * Applications starting a Drag & Drop operation operation are said to perform
 * a "Drag" and use the methods prefixed "drag_". On the other hand,
 * applications receiving dragged content are said to perform a "Drop"
 * operation and use the methods prefixed "drop_".
 *
 * @ingroup Efl_Ui_Dnd
 */
#define EFL_UI_DND_MIXIN efl_ui_dnd_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_dnd_mixin_get(void) EINA_CONST;

/**
 * @brief Starts a drag from this client.
 *
 * @[Efl.Ui.Dnd.drag,started] is emitted each time a successful drag is
 * started. @[Efl.Ui.Dnd.drag,finished] is emitted every time a drag is
 * finished.
 *
 * @param[in] obj The object.
 * @param[in] content The content being dragged.
 * @param[in] action Requested action to perform by the receiver once content
 * is transferred.
 * @param[in] seat Seat starting the drag operation. When in doubt use 0.
 *
 * @return An Efl.Ui element which you can use to render a visual
 * representation of the content being dragged (like a thumbnail, for example).
 * Use @ref efl_content_set on it to do so.
 *
 * @ingroup Efl_Ui_Dnd
 */
EAPI EAPI_WEAK Efl_Content *efl_ui_dnd_drag_start(Eo *obj, Eina_Content *content, const char *action, unsigned int seat);

/**
 * @brief Set the offset during a drag that was initiated through drag_start
 *
 * @param[in] obj The object.
 * @param[in] seat Seat setting the offset on.
 * @param[in] offset The offset for which the window will be shifted. The upper
 * left of the window is calculated by adding this offset to the cursor
 * position
 *
 * @ingroup Efl_Ui_Dnd
 */
EAPI EAPI_WEAK void efl_ui_dnd_drag_offset_set(Eo *obj, unsigned int seat, Eina_Size2D offset);

/**
 * @brief Cancels an on-going drag operation.
 *
 * @param[in] obj The object.
 * @param[in] seat Seat that started the drag operation. When in doubt use 0.
 *
 * @ingroup Efl_Ui_Dnd
 */
EAPI EAPI_WEAK void efl_ui_dnd_drag_cancel(Eo *obj, unsigned int seat);

/**
 * @brief Retrieves the dropped data.
 *
 * @param[in] obj The object.
 * @param[in] seat Seat that started the drag operation. When in doubt use 0.
 * @param[in] acceptable_types List of strings describing the type of content
 * the application can accept. Types are IANA MIME types:
 * https://www.iana.org/assignments/media-types/media-types.xhtml.
 *
 * @return This future is fulfilled when the content is received
 * (asynchronously) and ready to use. The Eina.Content specifies the type of
 * the data. If no matching type was found it returns an error.
 *
 * @ingroup Efl_Ui_Dnd
 */
EAPI EAPI_WEAK Eina_Future *efl_ui_dnd_drop_data_get(Eo *obj, unsigned int seat, Eina_Iterator *acceptable_types) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_DND_EVENT_DROP_ENTERED;

/** Dragged content entered the window. Its type can already be checked with
 * @ref efl_ui_dnd_drop_data_get to react before it is dropped, for example.
 * @return Efl_Ui_Drop_Event
 *
 * @ingroup Efl_Ui_Dnd
 */
#define EFL_UI_DND_EVENT_DROP_ENTERED (&(_EFL_UI_DND_EVENT_DROP_ENTERED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_DND_EVENT_DROP_LEFT;

/** Dragged content left the window.
 * @return Efl_Ui_Drop_Event
 *
 * @ingroup Efl_Ui_Dnd
 */
#define EFL_UI_DND_EVENT_DROP_LEFT (&(_EFL_UI_DND_EVENT_DROP_LEFT))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_DND_EVENT_DROP_POSITION_CHANGED;

/** Dragged content moved over the window. Its type can already be checked with
 * @ref efl_ui_dnd_drop_data_get to react before it is dropped, for example.
 * @return Efl_Ui_Drop_Event
 *
 * @ingroup Efl_Ui_Dnd
 */
#define EFL_UI_DND_EVENT_DROP_POSITION_CHANGED (&(_EFL_UI_DND_EVENT_DROP_POSITION_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_DND_EVENT_DROP_DROPPED;

/** Dragged content was dropped over the window.
 * @return Efl_Ui_Drop_Dropped_Event
 *
 * @ingroup Efl_Ui_Dnd
 */
#define EFL_UI_DND_EVENT_DROP_DROPPED (&(_EFL_UI_DND_EVENT_DROP_DROPPED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_DND_EVENT_DRAG_STARTED;

/** A Drag operation started.
 * @return Efl_Ui_Drag_Started_Event
 *
 * @ingroup Efl_Ui_Dnd
 */
#define EFL_UI_DND_EVENT_DRAG_STARTED (&(_EFL_UI_DND_EVENT_DRAG_STARTED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_DND_EVENT_DRAG_FINISHED;

/** A Drag operation finished.
 * @return Efl_Ui_Drag_Finished_Event
 *
 * @ingroup Efl_Ui_Dnd
 */
#define EFL_UI_DND_EVENT_DRAG_FINISHED (&(_EFL_UI_DND_EVENT_DRAG_FINISHED))
#endif /* EFL_BETA_API_SUPPORT */

#endif

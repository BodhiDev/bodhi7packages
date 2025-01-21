#ifndef _EFL_UI_ITEM_CLICKABLE_EO_H_
#define _EFL_UI_ITEM_CLICKABLE_EO_H_

#ifndef _EFL_UI_ITEM_CLICKABLE_EO_CLASS_TYPE
#define _EFL_UI_ITEM_CLICKABLE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Item_Clickable;

#endif

#ifndef _EFL_UI_ITEM_CLICKABLE_EO_TYPES
#define _EFL_UI_ITEM_CLICKABLE_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** A struct that expresses a click in item of container widget.
 *
 * @ingroup Efl_Ui_Item_Clickable_Clicked
 */
typedef struct _Efl_Ui_Item_Clickable_Clicked
{
  Efl_Input_Clickable_Clicked clicked; /**< The input clicked event data. */
  Efl_Ui_Item *item; /**< The clicked item. */
} Efl_Ui_Item_Clickable_Clicked;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** A struct that expresses a press or unpress in item of container widget.
 *
 * @ingroup Efl_Ui_Item_Clickable_Pressed
 */
typedef struct _Efl_Ui_Item_Clickable_Pressed
{
  int button; /**< The button which was pressed or unpressed. */
  Efl_Ui_Item *item; /**< The corresponding item. */
} Efl_Ui_Item_Clickable_Pressed;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Shared sets of events between @ref Efl_Ui_Collection and
 * @ref Efl_Ui_Collection_View.
 *
 * @ingroup Efl_Ui_Item_Clickable
 */
#define EFL_UI_ITEM_CLICKABLE_INTERFACE efl_ui_item_clickable_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_item_clickable_interface_get(void) EINA_CONST;

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_ITEM_PRESSED;

/** A @c pressed event occurred over an item.
 * @return Efl_Ui_Item_Clickable_Pressed
 *
 * @ingroup Efl_Ui_Item_Clickable
 */
#define EFL_UI_EVENT_ITEM_PRESSED (&(_EFL_UI_EVENT_ITEM_PRESSED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_ITEM_UNPRESSED;

/** An @c unpressed event occurred over an item.
 * @return Efl_Ui_Item_Clickable_Pressed
 *
 * @ingroup Efl_Ui_Item_Clickable
 */
#define EFL_UI_EVENT_ITEM_UNPRESSED (&(_EFL_UI_EVENT_ITEM_UNPRESSED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_ITEM_LONGPRESSED;

/** A @c longpressed event occurred over an item.
 * @return Efl_Ui_Item_Clickable_Pressed
 *
 * @ingroup Efl_Ui_Item_Clickable
 */
#define EFL_UI_EVENT_ITEM_LONGPRESSED (&(_EFL_UI_EVENT_ITEM_LONGPRESSED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_ITEM_CLICKED;

/** A @c clicked event occurred over an item.
 * @return Efl_Ui_Item_Clickable_Clicked
 *
 * @ingroup Efl_Ui_Item_Clickable
 */
#define EFL_UI_EVENT_ITEM_CLICKED (&(_EFL_UI_EVENT_ITEM_CLICKED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_EVENT_ITEM_CLICKED_ANY;

/** A <tt>clicked,any</tt> event occurred over an item.
 * @return Efl_Ui_Item_Clickable_Clicked
 *
 * @ingroup Efl_Ui_Item_Clickable
 */
#define EFL_UI_EVENT_ITEM_CLICKED_ANY (&(_EFL_UI_EVENT_ITEM_CLICKED_ANY))
#endif /* EFL_BETA_API_SUPPORT */

#endif

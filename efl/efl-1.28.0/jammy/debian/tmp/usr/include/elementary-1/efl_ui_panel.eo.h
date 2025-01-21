#ifndef _EFL_UI_PANEL_EO_H_
#define _EFL_UI_PANEL_EO_H_

#ifndef _EFL_UI_PANEL_EO_CLASS_TYPE
#define _EFL_UI_PANEL_EO_CLASS_TYPE

typedef Eo Efl_Ui_Panel;

#endif

#ifndef _EFL_UI_PANEL_EO_TYPES
#define _EFL_UI_PANEL_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Panel orientation mode
 *
 * @ingroup Efl_Ui_Panel_Orient
 */
typedef enum
{
  EFL_UI_PANEL_ORIENT_TOP = 0, /**< Panel (dis)appears from the top */
  EFL_UI_PANEL_ORIENT_BOTTOM, /**< Panel (dis)appears from the bottom */
  EFL_UI_PANEL_ORIENT_LEFT, /**< Panel (dis)appears from the left */
  EFL_UI_PANEL_ORIENT_RIGHT /**< Panel (dis)appears from the right */
} Efl_Ui_Panel_Orient;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Panel scroll information
 *
 * @ingroup Efl_Ui_Panel_Scroll_Info
 */
typedef struct _Efl_Ui_Panel_Scroll_Info
{
  double rel_x; /**< content scrolled position (0.0 ~ 1.0) in the panel */
  double rel_y; /**< content scrolled position (0.0 ~ 1.0) in the panel */
} Efl_Ui_Panel_Scroll_Info;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Elementary panel class
 *
 * @ingroup Efl_Ui_Panel
 */
#define EFL_UI_PANEL_CLASS efl_ui_panel_class_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_panel_class_get(void) EINA_CONST;

/**
 * @brief The orientation of the panel
 *
 * Sets from where the panel will (dis)appear.
 *
 * @param[in] obj The object.
 * @param[in] orient The panel orientation.
 *
 * @ingroup Efl_Ui_Panel
 */
EAPI EAPI_WEAK void efl_ui_panel_orient_set(Eo *obj, Efl_Ui_Panel_Orient orient);

/**
 * @brief The orientation of the panel
 *
 * Sets from where the panel will (dis)appear.
 *
 * @param[in] obj The object.
 *
 * @return The panel orientation.
 *
 * @ingroup Efl_Ui_Panel
 */
EAPI EAPI_WEAK Efl_Ui_Panel_Orient efl_ui_panel_orient_get(const Eo *obj);

/**
 * @brief The state of the panel.
 *
 * @param[in] obj The object.
 * @param[in] hidden If @c true, the panel will run the animation to disappear.
 *
 * @ingroup Efl_Ui_Panel
 */
EAPI EAPI_WEAK void efl_ui_panel_hidden_set(Eo *obj, Eina_Bool hidden);

/**
 * @brief The state of the panel.
 *
 * @param[in] obj The object.
 *
 * @return If @c true, the panel will run the animation to disappear.
 *
 * @ingroup Efl_Ui_Panel
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_panel_hidden_get(const Eo *obj);

/**
 * @brief The scrollability of the panel.
 *
 * @param[in] obj The object.
 * @param[in] scrollable The scrollable state.
 *
 * @ingroup Efl_Ui_Panel
 */
EAPI EAPI_WEAK void efl_ui_panel_scrollable_set(Eo *obj, Eina_Bool scrollable);

/**
 * @brief The scrollability of the panel.
 *
 * @param[in] obj The object.
 *
 * @return The scrollable state.
 *
 * @ingroup Efl_Ui_Panel
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_panel_scrollable_get(const Eo *obj);

/**
 * @brief The size of the scrollable panel.
 *
 * @param[in] obj The object.
 * @param[in] ratio Size ratio
 *
 * @ingroup Efl_Ui_Panel
 */
EAPI EAPI_WEAK void efl_ui_panel_scrollable_content_size_set(Eo *obj, double ratio);

/**
 * @brief The size of the scrollable panel.
 *
 * @param[in] obj The object.
 *
 * @return Size ratio
 *
 * @ingroup Efl_Ui_Panel
 */
EAPI EAPI_WEAK double efl_ui_panel_scrollable_content_size_get(const Eo *obj);

/** Toggle the hidden state of the panel from code
 *
 * @ingroup Efl_Ui_Panel
 */
EAPI EAPI_WEAK void efl_ui_panel_toggle(Eo *obj);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_PANEL_EVENT_TOGGLED;

/** Called when the hidden state was toggled
 *
 * @ingroup Efl_Ui_Panel
 */
#define EFL_UI_PANEL_EVENT_TOGGLED (&(_EFL_UI_PANEL_EVENT_TOGGLED))
#endif /* EFL_BETA_API_SUPPORT */

#endif

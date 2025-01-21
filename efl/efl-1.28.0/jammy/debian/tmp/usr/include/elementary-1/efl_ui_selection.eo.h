#ifndef _EFL_UI_SELECTION_EO_H_
#define _EFL_UI_SELECTION_EO_H_

#ifndef _EFL_UI_SELECTION_EO_CLASS_TYPE
#define _EFL_UI_SELECTION_EO_CLASS_TYPE

typedef Eo Efl_Ui_Selection;

#endif

#ifndef _EFL_UI_SELECTION_EO_TYPES
#define _EFL_UI_SELECTION_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** System buffer to use in Copy & Paste operations.
 *
 * @ingroup Efl_Ui_Cnp_Buffer
 */
typedef enum
{
  EFL_UI_CNP_BUFFER_SELECTION = 0, /**< Buffer typically used when the user
                                    * selects (highlights) some text without
                                    * explicitly requesting to copy it. */
  EFL_UI_CNP_BUFFER_COPY_AND_PASTE = 1 /**< Buffer used when the user requests
                                        * that the current selection is copied
                                        * (using Ctrl+C, for example). */
} Efl_Ui_Cnp_Buffer;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Information sent along the @[Efl.Ui.Selection.wm_selection,changed] event.
 *
 * @ingroup Efl_Ui_Wm_Selection_Changed
 */
typedef struct _Efl_Ui_Wm_Selection_Changed
{
  Efl_Ui_Cnp_Buffer buffer; /**< The system buffer that has changed. */
  Efl_Ui_Selection *caused_by; /**< The EFL widget that triggered the change.
                                * @c NULL if it is not an EFL widget. */
  unsigned int seat; /**< The seat that triggered the change. */
} Efl_Ui_Wm_Selection_Changed;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/** This mixin provides the ability to interact with the system's Copy & Paste
 * facilities.
 *
 * @ingroup Efl_Ui_Selection
 */
#define EFL_UI_SELECTION_MIXIN efl_ui_selection_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_ui_selection_mixin_get(void) EINA_CONST;

/**
 * @brief Sets the current selection.
 *
 * This sends the selected data to the system's specified buffer, making it
 * available to other applications for "pasting" it.
 *
 * This is typically used when the user requests a "copy" operation.
 *
 * @param[in] obj The object.
 * @param[in] buffer System buffer to use.
 * @param[in] content Data to copy.
 * @param[in] seat Seat the data comes from. Use 0 when in doubt.
 *
 * @ingroup Efl_Ui_Selection
 */
EAPI EAPI_WEAK void efl_ui_selection_set(Eo *obj, Efl_Ui_Cnp_Buffer buffer, Eina_Content *content, unsigned int seat);

/**
 * @brief Clears the current selection.
 *
 * No data will be available to other applications to paste (until something
 * else is selected).
 *
 * @param[in] obj The object.
 * @param[in] buffer System buffer to clear.
 * @param[in] seat Seat to clear. Use 0 when in doubt.
 *
 * @ingroup Efl_Ui_Selection
 */
EAPI EAPI_WEAK void efl_ui_selection_clear(Eo *obj, Efl_Ui_Cnp_Buffer buffer, unsigned int seat);

/**
 * @brief Retrieves the data currently held in the specified buffer.
 *
 * This is typically used when the user requests a "paste" operation.
 *
 * This method is time consuming (since data can potentially be provided by
 * another application), therefore, it is recommended to verify the existence
 * of a selection using @ref efl_ui_selection_has_selection before calling it.
 *
 * @param[in] obj The object.
 * @param[in] buffer System buffer to use.
 * @param[in] seat Seat where the data should be pasted. Use 0 when in doubt.
 * @param[in] acceptable_types List of accepted IANA MIME types:
 * https://www.iana.org/assignments/media-types/media-types.xhtml If automatic
 * conversion cannot be provided to any of the accepted types, an error will be
 * returned.
 *
 * @return A future that will be resolved to the requested content, or to an
 * error if type conversion is not available or the requested buffer is empty.
 *
 * @ingroup Efl_Ui_Selection
 */
EAPI EAPI_WEAK Eina_Future *efl_ui_selection_get(Eo *obj, Efl_Ui_Cnp_Buffer buffer, unsigned int seat, Eina_Iterator *acceptable_types) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;

/**
 * @brief Checks if the specified system buffer has content.
 *
 * @param[in] obj The object.
 * @param[in] buffer System buffer to query.
 * @param[in] seat Seat to query. Use 0 when in doubt.
 *
 * @return @c true if there is data available in the requested buffer.
 *
 * @ingroup Efl_Ui_Selection
 */
EAPI EAPI_WEAK Eina_Bool efl_ui_selection_has_selection(Eo *obj, Efl_Ui_Cnp_Buffer buffer, unsigned int seat);

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_UI_SELECTION_EVENT_WM_SELECTION_CHANGED;

/** Event emitted when the content of one of the system's buffers changes.
 * @return Efl_Ui_Wm_Selection_Changed
 *
 * @ingroup Efl_Ui_Selection
 */
#define EFL_UI_SELECTION_EVENT_WM_SELECTION_CHANGED (&(_EFL_UI_SELECTION_EVENT_WM_SELECTION_CHANGED))
#endif /* EFL_BETA_API_SUPPORT */

#endif

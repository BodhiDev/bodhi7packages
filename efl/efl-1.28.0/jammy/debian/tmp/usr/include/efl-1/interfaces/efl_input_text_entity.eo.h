#ifndef _EFL_INPUT_TEXT_ENTITY_EO_H_
#define _EFL_INPUT_TEXT_ENTITY_EO_H_

#ifndef _EFL_INPUT_TEXT_ENTITY_EO_CLASS_TYPE
#define _EFL_INPUT_TEXT_ENTITY_EO_CLASS_TYPE

typedef Eo Efl_Input_Text_Entity;

#endif

#ifndef _EFL_INPUT_TEXT_ENTITY_EO_TYPES
#define _EFL_INPUT_TEXT_ENTITY_EO_TYPES

/** Input panel (virtual keyboard) layout types. Type of input panel (virtual
 * keyboard) to use - this is a hint and may not provide exactly what is
 * desired.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Panel_Layout_Type
 */
typedef enum
{
  EFL_INPUT_TEXT_PANEL_LAYOUT_TYPE_NORMAL = 0, /**< Default layout.
                                                *
                                                * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_LAYOUT_TYPE_NUMBER, /**< Number layout.
                                            *
                                            * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_LAYOUT_TYPE_EMAIL, /**< Email layout.
                                           *
                                           * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_LAYOUT_TYPE_URL, /**< URL layout.
                                         *
                                         * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_LAYOUT_TYPE_PHONE_NUMBER, /**< Phone Number layout.
                                                  *
                                                  * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_LAYOUT_TYPE_IP, /**< IP layout.
                                        *
                                        * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_LAYOUT_TYPE_MONTH, /**< Month layout.
                                           *
                                           * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_LAYOUT_TYPE_NUMBER_ONLY, /**< Number Only layout.
                                                 *
                                                 * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_LAYOUT_TYPE_INVALID, /**< Never use this.
                                             *
                                             * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_LAYOUT_TYPE_HEX, /**< Hexadecimal layout.
                                         *
                                         * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_LAYOUT_TYPE_TERMINAL, /**< Command-line terminal layout
                                              * including esc, alt, ctrl key,
                                              * so on (no auto-correct, no
                                              * auto-capitalization).
                                              *
                                              * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_LAYOUT_TYPE_PASSWORD, /**< Like normal, but no
                                              * auto-correct, no
                                              * auto-capitalization etc.
                                              *
                                              * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_LAYOUT_TYPE_DATETIME, /**< Date and time layout.
                                              *
                                              * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_LAYOUT_TYPE_EMOTICON, /**< Emoticon layout.
                                              *
                                              * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_LAYOUT_TYPE_VOICE /**< Voice layout, but if the IME does
                                          * not support voice layout, then
                                          * normal layout will be shown.
                                          *
                                          * @since 1.24 */
} Efl_Input_Text_Panel_Layout_Type;

/** Input panel (virtual keyboard) language modes.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Panel_Language_Type
 */
typedef enum
{
  EFL_INPUT_TEXT_PANEL_LANGUAGE_TYPE_AUTOMATIC = 0, /**< Automatic
                                                     *
                                                     * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_LANGUAGE_TYPE_ALPHABET /**< Alphabet
                                               *
                                               * @since 1.24 */
} Efl_Input_Text_Panel_Language_Type;

/** Autocapitalization Types. Choose method of auto-capitalization.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Capitalize_Type
 */
typedef enum
{
  EFL_INPUT_TEXT_CAPITALIZE_TYPE_NONE = 0, /**< No auto-capitalization when
                                            * typing.
                                            *
                                            * @since 1.24 */
  EFL_INPUT_TEXT_CAPITALIZE_TYPE_WORD, /**< Autocapitalize each word typed.
                                        *
                                        * @since 1.24 */
  EFL_INPUT_TEXT_CAPITALIZE_TYPE_SENTENCE, /**< Autocapitalize the start of each
                                            * sentence.
                                            *
                                            * @since 1.24 */
  EFL_INPUT_TEXT_CAPITALIZE_TYPE_ALL /**< Autocapitalize all letters.
                                      *
                                      * @since 1.24 */
} Efl_Input_Text_Capitalize_Type;

/** "Return" Key types on the input panel (virtual keyboard).
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Panel_Return_Key_Type
 */
typedef enum
{
  EFL_INPUT_TEXT_PANEL_RETURN_KEY_TYPE_DEFAULT = 0, /**< Default.
                                                     *
                                                     * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_RETURN_KEY_TYPE_DONE, /**< Done.
                                              *
                                              * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_RETURN_KEY_TYPE_GO, /**< Go.
                                            *
                                            * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_RETURN_KEY_TYPE_JOIN, /**< Join.
                                              *
                                              * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_RETURN_KEY_TYPE_LOGIN, /**< Login.
                                               *
                                               * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_RETURN_KEY_TYPE_NEXT, /**< Next.
                                              *
                                              * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_RETURN_KEY_TYPE_SEARCH, /**< Search string or magnifier
                                                * icon.
                                                *
                                                * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_RETURN_KEY_TYPE_SEND, /**< Send.
                                              *
                                              * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_RETURN_KEY_TYPE_SIGNIN /**< Sign-in.
                                               *
                                               * @since 1.24 */
} Efl_Input_Text_Panel_Return_Key_Type;

/** "Return" Key state on the input panel (virtual keyboard).
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Panel_Return_Key_State
 */
typedef enum
{
  EFL_INPUT_TEXT_PANEL_RETURN_KEY_STATE_AUTO = 0, /**< The return key on input
                                                   * panel is disabled when the
                                                   * entry has no text, if
                                                   * entry has text, return key
                                                   * is enabled.
                                                   *
                                                   * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_RETURN_KEY_STATE_ENABLED, /**< The return key on input
                                                  * panel is enabled.
                                                  *
                                                  * @since 1.24 */
  EFL_INPUT_TEXT_PANEL_RETURN_KEY_STATE_DISABLED /**< The return key on input
                                                  * panel is disabled.
                                                  *
                                                  * @since 1.24 */
} Efl_Input_Text_Panel_Return_Key_State;

/** Enumeration that defines the types of Input Hints.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Content_Type
 */
typedef enum
{
  EFL_INPUT_TEXT_CONTENT_TYPE_NONE = 0, /**< No active hints.
                                         *
                                         * @since 1.24 */
  EFL_INPUT_TEXT_CONTENT_TYPE_AUTO_COMPLETE = 1 /* 1 >> 0 */, /**< Suggest word auto completion.
                                                               *
                                                               * @since 1.24 */
  EFL_INPUT_TEXT_CONTENT_TYPE_SENSITIVE_DATA = 2 /* 1 >> 1 */, /**< Typed text should not be stored.
                                                                *
                                                                * @since 1.24 */
  EFL_INPUT_TEXT_CONTENT_TYPE_AUTOFILL_CREDIT_CARD_EXPIRATION_DATE = 256, /**< Autofill hint for a credit card
                                                                           * expiration date.
                                                                           *
                                                                           * @since 1.24 */
  EFL_INPUT_TEXT_CONTENT_TYPE_AUTOFILL_CREDIT_CARD_EXPIRATION_DAY = 512, /**< Autofill hint for a credit card
                                                                          * expiration day.
                                                                          *
                                                                          * @since 1.24 */
  EFL_INPUT_TEXT_CONTENT_TYPE_AUTOFILL_CREDIT_CARD_EXPIRATION_MONTH = 768, /**< Autofill hint for a credit card
                                                                            * expiration month.
                                                                            *
                                                                            * @since 1.24 */
  EFL_INPUT_TEXT_CONTENT_TYPE_AUTOFILL_CREDIT_CARD_EXPIRATION_YEAR = 1024, /**< Autofill hint for a credit card
                                                                            * expiration year.
                                                                            *
                                                                            * @since 1.24 */
  EFL_INPUT_TEXT_CONTENT_TYPE_AUTOFILL_CREDIT_CARD_NUMBER = 1280, /**< Autofill hint for a credit card
                                                                   * number.
                                                                   *
                                                                   * @since 1.24 */
  EFL_INPUT_TEXT_CONTENT_TYPE_AUTOFILL_EMAIL_ADDRESS = 1536, /**< Autofill hint for an email address.
                                                              *
                                                              * @since 1.24 */
  EFL_INPUT_TEXT_CONTENT_TYPE_AUTOFILL_NAME = 1792, /**< Autofill hint for a
                                                     * user's real name.
                                                     *
                                                     * @since 1.24 */
  EFL_INPUT_TEXT_CONTENT_TYPE_AUTOFILL_PHONE = 2048, /**< Autofill hint for a
                                                      * phone number.
                                                      *
                                                      * @since 1.24 */
  EFL_INPUT_TEXT_CONTENT_TYPE_AUTOFILL_POSTAL_ADDRESS = 2304, /**< Autofill hint for a postal address.
                                                               *
                                                               * @since 1.24 */
  EFL_INPUT_TEXT_CONTENT_TYPE_AUTOFILL_POSTAL_CODE = 2560, /**< Autofill hint
                                                            * for a postal
                                                            * code.
                                                            *
                                                            * @since 1.24 */
  EFL_INPUT_TEXT_CONTENT_TYPE_AUTOFILL_ID = 2816 /**< Autofill hint for a user's
                                                  * ID.
                                                  *
                                                  * @since 1.24 */
} Efl_Input_Text_Content_Type;

#ifdef EFL_BETA_API_SUPPORT
/** Enumeration for defining the types of @ref Efl_Input_Text_Panel_Layout_Type
 * for normal variation.
 *
 * @ingroup Efl_Input_Text_Panel_Layout_Normal_Variation_Type
 */
typedef enum
{
  EFL_INPUT_TEXT_PANEL_LAYOUT_NORMAL_VARIATION_TYPE_NORMAL = 0, /**< The plain normal layout. */
  EFL_INPUT_TEXT_PANEL_LAYOUT_NORMAL_VARIATION_TYPE_FILE_NAME, /**< Filename layout. Symbols such as
                                                                * '/' should be disabled. */
  EFL_INPUT_TEXT_PANEL_LAYOUT_NORMAL_VARIATION_TYPE_PERSON_NAME /**< The name of a person,
                                                                 * @ref efl_input_text_autocapitalization_get
                                                                 * will be set to
                                                                 * @ref EFL_INPUT_TEXT_CAPITALIZE_TYPE_WORD.
                                                                 */
} Efl_Input_Text_Panel_Layout_Normal_Variation_Type;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Enumeration for defining the types of @ref Efl_Input_Text_Panel_Layout_Type
 * for normal variation.
 *
 * @ingroup Efl_Input_Text_Panel_Layout_Numberonly_Variation_Type
 */
typedef enum
{
  EFL_INPUT_TEXT_PANEL_LAYOUT_NUMBERONLY_VARIATION_TYPE_NORMAL = 0, /**< The plain normal number layout. */
  EFL_INPUT_TEXT_PANEL_LAYOUT_NUMBERONLY_VARIATION_TYPE_SIGNED, /**< The number layout to allow a
                                                                 * positive or negative sign at the
                                                                 * start. */
  EFL_INPUT_TEXT_PANEL_LAYOUT_NUMBERONLY_VARIATION_TYPE_DECIMAL, /**< The number layout to allow decimal
                                                                  * point to provide fractional value.
                                                                  */
  EFL_INPUT_TEXT_PANEL_LAYOUT_NUMBERONLY_VARIATION_TYPE_SIGNED_AND_DECIMAL /**< The number layout to allow decimal
                                                                            * point and negative sign. */
} Efl_Input_Text_Panel_Layout_Numberonly_Variation_Type;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Enumeration for defining the types of @ref Efl_Input_Text_Panel_Layout_Type
 * for normal variation.
 *
 * @ingroup Efl_Input_Text_Panel_Layout_Password_Variation_Type
 */
typedef enum
{
  EFL_INPUT_TEXT_PANEL_LAYOUT_PASSWORD_VARIATION_TYPE_NORMAL = 0, /**< The normal password layout. */
  EFL_INPUT_TEXT_PANEL_LAYOUT_PASSWORD_VARIATION_TYPE_NUMBER_ONLY /**< The password layout to allow only
                                                                   * number. */
} Efl_Input_Text_Panel_Layout_Password_Variation_Type;
#endif /* EFL_BETA_API_SUPPORT */


#endif
/** All the functionality relating to input hints/
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
#define EFL_INPUT_TEXT_ENTITY_INTERFACE efl_input_text_entity_interface_get()

EAPI EAPI_WEAK const Efl_Class *efl_input_text_entity_interface_get(void) EINA_CONST;

/**
 * @brief Set/Get the attribute to show the input panel in case of only a
 * user's explicit Mouse Up event. It doesn't request to show the input panel
 * even though it has focus.
 *
 * @param[in] obj The object.
 * @param[in] ondemand If @c true, the input panel will be shown in case of
 * only Mouse up event. (Focus event will be ignored.)
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK void efl_input_text_input_panel_show_on_demand_set(Eo *obj, Eina_Bool ondemand);

/**
 * @brief Set/Get the attribute to show the input panel in case of only a
 * user's explicit Mouse Up event. It doesn't request to show the input panel
 * even though it has focus.
 *
 * @param[in] obj The object.
 *
 * @return If @c true, the input panel will be shown in case of only Mouse up
 * event. (Focus event will be ignored.)
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK Eina_Bool efl_input_text_input_panel_show_on_demand_get(const Eo *obj);

/**
 * @brief The language mode of the input panel. This API can be used if you
 * want to show the alphabet keyboard mode.
 *
 * @param[in] obj The object.
 * @param[in] lang Language to be set to the input panel.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK void efl_input_text_input_panel_language_set(Eo *obj, Efl_Input_Text_Panel_Language_Type lang);

/**
 * @brief The language mode of the input panel. This API can be used if you
 * want to show the alphabet keyboard mode.
 *
 * @param[in] obj The object.
 *
 * @return Language to be set to the input panel.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK Efl_Input_Text_Panel_Language_Type efl_input_text_input_panel_language_get(const Eo *obj);

/**
 * @brief The input panel layout variation of the entry, this can be
 * @ref Efl_Input_Text_Panel_Layout_Normal_Variation_Type ,
 * @ref Efl_Input_Text_Panel_Layout_Numberonly_Variation_Type or
 * @ref Efl_Input_Text_Panel_Layout_Password_Variation_Type.
 *
 * @param[in] obj The object.
 * @param[in] variation Layout variation type.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK void efl_input_text_input_panel_layout_variation_set(Eo *obj, int variation);

/**
 * @brief The input panel layout variation of the entry, this can be
 * @ref Efl_Input_Text_Panel_Layout_Normal_Variation_Type ,
 * @ref Efl_Input_Text_Panel_Layout_Numberonly_Variation_Type or
 * @ref Efl_Input_Text_Panel_Layout_Password_Variation_Type.
 *
 * @param[in] obj The object.
 *
 * @return Layout variation type.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK int efl_input_text_input_panel_layout_variation_get(const Eo *obj);

/**
 * @brief The autocapitalization type on the immodule.
 *
 * @param[in] obj The object.
 * @param[in] autocapital_type The type of autocapitalization.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK void efl_input_text_autocapitalization_set(Eo *obj, Efl_Input_Text_Capitalize_Type autocapital_type);

/**
 * @brief The autocapitalization type on the immodule.
 *
 * @param[in] obj The object.
 *
 * @return The type of autocapitalization.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK Efl_Input_Text_Capitalize_Type efl_input_text_autocapitalization_get(const Eo *obj);

/**
 * @brief Whether the entry should allow predictive text.
 *
 * @param[in] obj The object.
 * @param[in] prediction Whether the entry should allow predictive text.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK void efl_input_text_predictable_set(Eo *obj, Eina_Bool prediction);

/**
 * @brief Whether the entry should allow predictive text.
 *
 * @param[in] obj The object.
 *
 * @return Whether the entry should allow predictive text.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK Eina_Bool efl_input_text_predictable_get(const Eo *obj);

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The input hint which allows input methods to fine-tune their
 * behavior.
 *
 * @param[in] obj The object.
 * @param[in] hints Input hint.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK void efl_input_text_input_content_type_set(Eo *obj, Efl_Input_Text_Content_Type hints);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The input hint which allows input methods to fine-tune their
 * behavior.
 *
 * @param[in] obj The object.
 *
 * @return Input hint.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK Efl_Input_Text_Content_Type efl_input_text_input_content_type_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief The input panel layout of the entry.
 *
 * @param[in] obj The object.
 * @param[in] layout Layout type.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK void efl_input_text_input_panel_layout_set(Eo *obj, Efl_Input_Text_Panel_Layout_Type layout);

/**
 * @brief The input panel layout of the entry.
 *
 * @param[in] obj The object.
 *
 * @return Layout type.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK Efl_Input_Text_Panel_Layout_Type efl_input_text_input_panel_layout_get(const Eo *obj);

/**
 * @brief The "return" key type. This type is used to set string or icon on the
 * "return" key of the input panel. An input panel displays the string or icon
 * associated with this type.
 *
 * @param[in] obj The object.
 * @param[in] return_key_type The type of "return" key on the input panel.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK void efl_input_text_input_panel_return_key_type_set(Eo *obj, Efl_Input_Text_Panel_Return_Key_Type return_key_type);

/**
 * @brief The "return" key type. This type is used to set string or icon on the
 * "return" key of the input panel. An input panel displays the string or icon
 * associated with this type.
 *
 * @param[in] obj The object.
 *
 * @return The type of "return" key on the input panel.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK Efl_Input_Text_Panel_Return_Key_Type efl_input_text_input_panel_return_key_type_get(const Eo *obj);

/**
 * @brief The attribute to show the input panel automatically.
 *
 * @param[in] obj The object.
 * @param[in] enabled If @c true, the input panel is appeared when entry is
 * clicked or has a focus.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK void efl_input_text_input_panel_autoshow_set(Eo *obj, Eina_Bool enabled);

/**
 * @brief The attribute to show the input panel automatically.
 *
 * @param[in] obj The object.
 *
 * @return If @c true, the input panel is appeared when entry is clicked or has
 * a focus.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK Eina_Bool efl_input_text_input_panel_autoshow_get(const Eo *obj);

/**
 * @brief State for the return key on the input panel see
 * @ref Efl_Input_Text_Panel_Return_Key_State.
 *
 * @param[in] obj The object.
 * @param[in] state Enable state for return key, see
 * @ref Efl_Input_Text_Panel_Return_Key_State.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK void efl_input_text_input_panel_return_key_state_set(Eo *obj, Efl_Input_Text_Panel_Return_Key_State state);

/**
 * @brief State for the return key on the input panel see
 * @ref Efl_Input_Text_Panel_Return_Key_State.
 *
 * @param[in] obj The object.
 *
 * @return Enable state for return key, see
 * @ref Efl_Input_Text_Panel_Return_Key_State.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK Efl_Input_Text_Panel_Return_Key_State efl_input_text_input_panel_return_key_state_get(const Eo *obj);

/**
 * @brief Show the input panel (virtual keyboard) based on the input panel
 * property of entry such as layout, autocapital types and so on.
 *
 * Note that input panel is shown or hidden automatically according to the
 * focus state of entry widget. This API can be used in the case of manually
 * controlling by using @ref efl_input_text_input_panel_autoshow_set(en,
 * @c false).
 *
 * @param[in] obj The object.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK void efl_input_text_input_panel_show(Eo *obj);

/** Hide the input panel (virtual keyboard). Note that input panel is shown or
 * hidden automatically according to the focus state of entry widget. This API
 * can be used in the case of manually controlling by using
 * @ref efl_input_text_input_panel_autoshow_set(en, @c false).
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK void efl_input_text_input_panel_hide(Eo *obj);

/**
 * @brief Set/Get the input panel-specific data to deliver to the input panel.
 *
 * This API is used by applications to deliver specific data to the input
 * panel. The data format MUST be negotiated by both application and the input
 * panel. The size and format of data are defined by the input panel.
 *
 * @param[in] obj The object.
 * @param[in] value The specific data to be set/get to the input panel.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK void efl_input_text_input_panel_imdata_set(Eo *obj, Eina_Slice value);

/**
 * @brief Set/Get the input panel-specific data to deliver to the input panel.
 *
 * This API is used by applications to deliver specific data to the input
 * panel. The data format MUST be negotiated by both application and the input
 * panel. The size and format of data are defined by the input panel.
 *
 * @param[in] obj The object.
 *
 * @return The specific data to be set/get to the input panel.
 *
 * @since 1.24
 *
 * @ingroup Efl_Input_Text_Entity
 */
EAPI EAPI_WEAK Eina_Slice efl_input_text_input_panel_imdata_get(const Eo *obj);

#endif

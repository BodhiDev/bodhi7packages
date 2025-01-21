#ifndef _EFL_ACCESS_OBJECT_EO_H_
#define _EFL_ACCESS_OBJECT_EO_H_

#ifndef _EFL_ACCESS_OBJECT_EO_CLASS_TYPE
#define _EFL_ACCESS_OBJECT_EO_CLASS_TYPE

typedef Eo Efl_Access_Object;

#endif

#ifndef _EFL_ACCESS_OBJECT_EO_TYPES
#define _EFL_ACCESS_OBJECT_EO_TYPES

#ifdef EFL_BETA_API_SUPPORT
/** Type of accessibility object
 *
 * @ingroup Efl_Access_Type
 */
typedef enum
{
  EFL_ACCESS_TYPE_REGULAR = 0, /**< default accessible object */
  EFL_ACCESS_TYPE_DISABLED, /**< skip object and its children in accessibility
                             * hierarchy */
  EFL_ACCESS_TYPE_SKIPPED /**< skip object in accessibility hierarchy */
} Efl_Access_Type;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Describes the role of an object visible to Accessibility Clients.
 *
 * @ingroup Efl_Access_Role
 */
typedef enum
{
  EFL_ACCESS_ROLE_INVALID = 0, /**< Role: invalid */
  EFL_ACCESS_ROLE_ACCELERATOR_LABEL, /**< Role: accelerator label */
  EFL_ACCESS_ROLE_ALERT, /**< Role: alert */
  EFL_ACCESS_ROLE_ANIMATION, /**< Role: animation */
  EFL_ACCESS_ROLE_ARROW, /**< Role: arrow */
  EFL_ACCESS_ROLE_CALENDAR, /**< Role: calendar */
  EFL_ACCESS_ROLE_CANVAS, /**< Role: canvas */
  EFL_ACCESS_ROLE_CHECK_BOX, /**< Role: check box */
  EFL_ACCESS_ROLE_CHECK_MENU_ITEM, /**< Role: check menu item */
  EFL_ACCESS_ROLE_COLOR_CHOOSER, /**< Role: color chooser */
  EFL_ACCESS_ROLE_COLUMN_HEADER, /**< Role: column header */
  EFL_ACCESS_ROLE_COMBO_BOX, /**< Role: combo box */
  EFL_ACCESS_ROLE_DATE_EDITOR, /**< Role: data editor */
  EFL_ACCESS_ROLE_DESKTOP_ICON, /**< Role: desktop icon */
  EFL_ACCESS_ROLE_DESKTOP_FRAME, /**< Role: desktop frame */
  EFL_ACCESS_ROLE_DIAL, /**< Role: dial */
  EFL_ACCESS_ROLE_DIALOG, /**< Role: dialog */
  EFL_ACCESS_ROLE_DIRECTORY_PANE, /**< Role: directory pane */
  EFL_ACCESS_ROLE_DRAWING_AREA, /**< Role: drawing area */
  EFL_ACCESS_ROLE_FILE_CHOOSER, /**< Role: file chooser */
  EFL_ACCESS_ROLE_FILLER, /**< Role: filler */
  EFL_ACCESS_ROLE_FOCUS_TRAVERSABLE, /**< Role: focus traversable */
  EFL_ACCESS_ROLE_FONT_CHOOSER, /**< Role: font chooser */
  EFL_ACCESS_ROLE_FRAME, /**< Role: frame */
  EFL_ACCESS_ROLE_GLASS_PANE, /**< Role: glass pane */
  EFL_ACCESS_ROLE_HTML_CONTAINER, /**< Role: HTML container */
  EFL_ACCESS_ROLE_ICON, /**< Role: icon */
  EFL_ACCESS_ROLE_IMAGE, /**< Role: image */
  EFL_ACCESS_ROLE_INTERNAL_FRAME, /**< Role: internal frame */
  EFL_ACCESS_ROLE_LABEL, /**< Role: label */
  EFL_ACCESS_ROLE_LAYERED_PANE, /**< Role: layered pane */
  EFL_ACCESS_ROLE_LIST, /**< Role: list */
  EFL_ACCESS_ROLE_LIST_ITEM, /**< Role: list item */
  EFL_ACCESS_ROLE_MENU, /**< Role: menu */
  EFL_ACCESS_ROLE_MENU_BAR, /**< Role: menu bar */
  EFL_ACCESS_ROLE_MENU_ITEM, /**< Role: menu item */
  EFL_ACCESS_ROLE_OPTION_PANE, /**< Role: option pane */
  EFL_ACCESS_ROLE_PAGE_TAB, /**< Role: page tab */
  EFL_ACCESS_ROLE_PAGE_TAB_LIST, /**< Role: page tab list */
  EFL_ACCESS_ROLE_PANEL, /**< Role: panel */
  EFL_ACCESS_ROLE_PASSWORD_TEXT, /**< Role: password text */
  EFL_ACCESS_ROLE_POPUP_MENU, /**< Role: popup menu */
  EFL_ACCESS_ROLE_PROGRESS_BAR, /**< Role: progress bar */
  EFL_ACCESS_ROLE_PUSH_BUTTON, /**< Role: push button */
  EFL_ACCESS_ROLE_RADIO_BUTTON, /**< Role: radio button */
  EFL_ACCESS_ROLE_RADIO_MENU_ITEM, /**< Role: radio menu item */
  EFL_ACCESS_ROLE_ROOT_PANE, /**< Role: root pane */
  EFL_ACCESS_ROLE_ROW_HEADER, /**< Role: row header */
  EFL_ACCESS_ROLE_SCROLL_BAR, /**< Role: scroll bar */
  EFL_ACCESS_ROLE_SCROLL_PANE, /**< Role: scroll pane */
  EFL_ACCESS_ROLE_SEPARATOR, /**< Role: separator */
  EFL_ACCESS_ROLE_SLIDER, /**< Role: slider */
  EFL_ACCESS_ROLE_SPIN_BUTTON, /**< Role: spin button */
  EFL_ACCESS_ROLE_SPLIT_PANE, /**< Role: split pane */
  EFL_ACCESS_ROLE_STATUS_BAR, /**< Role: status bar */
  EFL_ACCESS_ROLE_TABLE, /**< Role: table */
  EFL_ACCESS_ROLE_TABLE_CELL, /**< Role: table cell */
  EFL_ACCESS_ROLE_TABLE_COLUMN_HEADER, /**< Role: table column header */
  EFL_ACCESS_ROLE_TABLE_ROW_HEADER, /**< Role: table row header */
  EFL_ACCESS_ROLE_TEAROFF_MENU_ITEM, /**< Role: tearoff menu item */
  EFL_ACCESS_ROLE_TERMINAL, /**< Role: terminal */
  EFL_ACCESS_ROLE_TEXT, /**< Role: text */
  EFL_ACCESS_ROLE_TOGGLE_BUTTON, /**< Role: toggle button */
  EFL_ACCESS_ROLE_TOOL_BAR, /**< Role: too bar */
  EFL_ACCESS_ROLE_TOOL_TIP, /**< Role: tool tip */
  EFL_ACCESS_ROLE_TREE, /**< Role: tree */
  EFL_ACCESS_ROLE_TREE_TABLE, /**< Role: tree table */
  EFL_ACCESS_ROLE_UNKNOWN, /**< Role: unknown */
  EFL_ACCESS_ROLE_VIEWPORT, /**< Role: viewport */
  EFL_ACCESS_ROLE_WINDOW, /**< Role: window */
  EFL_ACCESS_ROLE_EXTENDED, /**< Role: extended */
  EFL_ACCESS_ROLE_HEADER, /**< Role: header */
  EFL_ACCESS_ROLE_FOOTER, /**< Role: footer */
  EFL_ACCESS_ROLE_PARAGRAPH, /**< Role: paragraph */
  EFL_ACCESS_ROLE_RULER, /**< Role: ruler */
  EFL_ACCESS_ROLE_APPLICATION, /**< Role: application */
  EFL_ACCESS_ROLE_AUTOCOMPLETE, /**< Role: autocomplete */
  EFL_ACCESS_ROLE_EDITBAR, /**< Role: editbar */
  EFL_ACCESS_ROLE_EMBEDDED, /**< Role: embedded */
  EFL_ACCESS_ROLE_ENTRY, /**< Role: entry */
  EFL_ACCESS_ROLE_CHART, /**< Role: chart */
  EFL_ACCESS_ROLE_CAPTION, /**< Role: caption */
  EFL_ACCESS_ROLE_DOCUMENT_FRAME, /**< Role: document frame */
  EFL_ACCESS_ROLE_HEADING, /**< Role: heading */
  EFL_ACCESS_ROLE_PAGE, /**< Role: page */
  EFL_ACCESS_ROLE_SECTION, /**< Role: section */
  EFL_ACCESS_ROLE_REDUNDANT_OBJECT, /**< Role: redundant object */
  EFL_ACCESS_ROLE_FORM, /**< Role: form */
  EFL_ACCESS_ROLE_LINK, /**< Role: link */
  EFL_ACCESS_ROLE_INPUT_METHOD_WINDOW, /**< Role: input method window */
  EFL_ACCESS_ROLE_TABLE_ROW, /**< Role: table row */
  EFL_ACCESS_ROLE_TREE_ITEM, /**< Role: table item */
  EFL_ACCESS_ROLE_DOCUMENT_SPREADSHEET, /**< Role: document spreadsheet */
  EFL_ACCESS_ROLE_DOCUMENT_PRESENTATION, /**< Role: document presentation */
  EFL_ACCESS_ROLE_DOCUMENT_TEXT, /**< Role: document text */
  EFL_ACCESS_ROLE_DOCUMENT_WEB, /**< Role: document web */
  EFL_ACCESS_ROLE_DOCUMENT_EMAIL, /**< Role: document email */
  EFL_ACCESS_ROLE_COMMENT, /**< Role: comment */
  EFL_ACCESS_ROLE_LIST_BOX, /**< Role: list box */
  EFL_ACCESS_ROLE_GROUPING, /**< Role: grouping */
  EFL_ACCESS_ROLE_IMAGE_MAP, /**< Role: image map */
  EFL_ACCESS_ROLE_NOTIFICATION, /**< Role: notification */
  EFL_ACCESS_ROLE_INFO_BAR, /**< Role: info bar */
  EFL_ACCESS_ROLE_LAST_DEFINED /**< Last enum entry sentinel */
} Efl_Access_Role;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Describes the possible states for an object visible to accessibility
 * clients.
 *
 * @ingroup Efl_Access_State_Type
 */
typedef enum
{
  EFL_ACCESS_STATE_TYPE_INVALID = 0, /**< State: invalid */
  EFL_ACCESS_STATE_TYPE_ACTIVE, /**< State: active */
  EFL_ACCESS_STATE_TYPE_ARMED, /**< State: armed */
  EFL_ACCESS_STATE_TYPE_BUSY, /**< State: busy */
  EFL_ACCESS_STATE_TYPE_CHECKED, /**< State: checked */
  EFL_ACCESS_STATE_TYPE_COLLAPSED, /**< State: collapsed */
  EFL_ACCESS_STATE_TYPE_DEFUNCT, /**< State: defunct */
  EFL_ACCESS_STATE_TYPE_EDITABLE, /**< State: editable */
  EFL_ACCESS_STATE_TYPE_ENABLED, /**< State: enabled */
  EFL_ACCESS_STATE_TYPE_EXPANDABLE, /**< State: expandable */
  EFL_ACCESS_STATE_TYPE_EXPANDED, /**< State: expanded */
  EFL_ACCESS_STATE_TYPE_FOCUSABLE, /**< State: focusable */
  EFL_ACCESS_STATE_TYPE_FOCUSED, /**< State: focused */
  EFL_ACCESS_STATE_TYPE_HAS_TOOLTIP, /**< State: has a tooltip */
  EFL_ACCESS_STATE_TYPE_HORIZONTAL, /**< State: horizontal */
  EFL_ACCESS_STATE_TYPE_MINIMIZED, /**< State: minimized */
  EFL_ACCESS_STATE_TYPE_MODAL, /**< State: modal */
  EFL_ACCESS_STATE_TYPE_MULTI_LINE, /**< State: multi line */
  EFL_ACCESS_STATE_TYPE_MULTISELECTABLE, /**< State: multiselectable */
  EFL_ACCESS_STATE_TYPE_OPAQUE, /**< State: opaque */
  EFL_ACCESS_STATE_TYPE_PRESSED, /**< State: pressed */
  EFL_ACCESS_STATE_TYPE_RESIZABLE, /**< State: resizable */
  EFL_ACCESS_STATE_TYPE_SELECTABLE, /**< State: selectable */
  EFL_ACCESS_STATE_TYPE_SELECTED, /**< State: selected */
  EFL_ACCESS_STATE_TYPE_SENSITIVE, /**< State: sensitive */
  EFL_ACCESS_STATE_TYPE_SHOWING, /**< State: showing */
  EFL_ACCESS_STATE_TYPE_SINGLE_LINE, /**< State: single line */
  EFL_ACCESS_STATE_TYPE_STALE, /**< State: stale */
  EFL_ACCESS_STATE_TYPE_TRANSIENT, /**< State: transient */
  EFL_ACCESS_STATE_TYPE_VERTICAL, /**< State: vertical */
  EFL_ACCESS_STATE_TYPE_VISIBLE, /**< State: visible */
  EFL_ACCESS_STATE_TYPE_MANAGES_DESCENDANTS, /**< State: manage descendants */
  EFL_ACCESS_STATE_TYPE_INDETERMINATE, /**< State: indeterminate */
  EFL_ACCESS_STATE_TYPE_REQUIRED, /**< State: required */
  EFL_ACCESS_STATE_TYPE_TRUNCATED, /**< State: truncated */
  EFL_ACCESS_STATE_TYPE_ANIMATED, /**< State: animated */
  EFL_ACCESS_STATE_TYPE_INVALID_ENTRY, /**< State: invalid entry */
  EFL_ACCESS_STATE_TYPE_SUPPORTS_AUTOCOMPLETION, /**< State: supports
                                                  * autocompletion */
  EFL_ACCESS_STATE_TYPE_SELECTABLE_TEXT, /**< State: selectable text */
  EFL_ACCESS_STATE_TYPE_IS_DEFAULT, /**< State: is default */
  EFL_ACCESS_STATE_TYPE_VISITED, /**< State: visited */
  EFL_ACCESS_STATE_TYPE_LAST_DEFINED /**< Last enum entry sentinel */
} Efl_Access_State_Type;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Describes the relationship between two objects.
 *
 * @ingroup Efl_Access_Relation_Type
 */
typedef enum
{
  EFL_ACCESS_RELATION_TYPE_NULL = 0, /**< No relation */
  EFL_ACCESS_RELATION_TYPE_LABEL_FOR, /**< Label for relation */
  EFL_ACCESS_RELATION_TYPE_LABELLED_BY, /**< Labelled by relation */
  EFL_ACCESS_RELATION_TYPE_CONTROLLER_FOR, /**< Controller for relation */
  EFL_ACCESS_RELATION_TYPE_CONTROLLED_BY, /**< Controlled by relation */
  EFL_ACCESS_RELATION_TYPE_MEMBER_OF, /**< Member of relation */
  EFL_ACCESS_RELATION_TYPE_TOOLTIP_FOR, /**< Tooltip for relation */
  EFL_ACCESS_RELATION_TYPE_NODE_CHILD_OF, /**< Node child of relation */
  EFL_ACCESS_RELATION_TYPE_NODE_PARENT_OF, /**< Node parent of relation */
  EFL_ACCESS_RELATION_TYPE_EXTENDED, /**< Extended relation */
  EFL_ACCESS_RELATION_TYPE_FLOWS_TO, /**< Flows to relation */
  EFL_ACCESS_RELATION_TYPE_FLOWS_FROM, /**< Flows from relation */
  EFL_ACCESS_RELATION_TYPE_SUBWINDOW_OF, /**< Subwindow of relation */
  EFL_ACCESS_RELATION_TYPE_EMBEDS, /**< Embeds relation */
  EFL_ACCESS_RELATION_TYPE_EMBEDDED_BY, /**< Embedded by relation */
  EFL_ACCESS_RELATION_TYPE_POPUP_FOR, /**< Popup for relation */
  EFL_ACCESS_RELATION_TYPE_PARENT_WINDOW_OF, /**< Parent window of relation */
  EFL_ACCESS_RELATION_TYPE_DESCRIPTION_FOR, /**< Description for relation */
  EFL_ACCESS_RELATION_TYPE_DESCRIBED_BY, /**< Described by relation */
  EFL_ACCESS_RELATION_TYPE_LAST_DEFINED /**< Last enum entry sentinel */
} Efl_Access_Relation_Type;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** The accessible Reading information type that can be read.
 *
 * @ingroup Efl_Access_Reading_Info_Type
 */
typedef enum
{
  EFL_ACCESS_READING_INFO_TYPE_NAME = 1 /* 1 >> 0 */, /**< Name should be read
                                                       */
  EFL_ACCESS_READING_INFO_TYPE_ROLE = 2 /* 1 >> 1 */, /**< Role should be read
                                                       */
  EFL_ACCESS_READING_INFO_TYPE_DESCRIPTION = 4 /* 1 >> 2 */, /**< description should be read. */
  EFL_ACCESS_READING_INFO_TYPE_STATE = 8 /* 1 >> 3 */ /**< State should be read.
                                                       */
} Efl_Access_Reading_Info_Type;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Accessibility object state set.
 *
 * @ingroup Efl_Access_State_Set
 */
typedef uint64_t Efl_Access_State_Set;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Accessibility event listener
 *
 * @ingroup Efl_Access_Event_Handler
 */
typedef struct _Efl_Access_Event_Handler Efl_Access_Event_Handler;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Accessibility state changed event data
 *
 * @ingroup Efl_Access_Event_State_Changed_Data
 */
typedef struct _Efl_Access_Event_State_Changed_Data
{
  Efl_Access_State_Type type; /**< Type of the state changed event */
  Eina_Bool new_value; /**< New value */
} Efl_Access_Event_State_Changed_Data;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Accessibility geometry changed event data
 *
 * @ingroup Efl_Access_Event_Geometry_Changed_Data
 */
typedef struct _Efl_Access_Event_Geometry_Changed_Data
{
  int x; /**< X coordinate */
  int y; /**< Y coordinate */
  int width; /**< Width */
  int height; /**< Height */
} Efl_Access_Event_Geometry_Changed_Data;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Accessibility children changed event data
 *
 * @ingroup Efl_Access_Event_Children_Changed_Data
 */
typedef struct _Efl_Access_Event_Children_Changed_Data
{
  Eina_Bool is_added; /**< Child is added or not */
  Efl_Object *child; /**< Child object */
} Efl_Access_Event_Children_Changed_Data;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Accessibility Attribute
 *
 * @ingroup Efl_Access_Attribute
 */
typedef struct _Efl_Access_Attribute
{
  const char *key; /**< Attribute key */
  const char *value; /**< Attribute value */
} Efl_Access_Attribute;
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Accessibility Relation
 *
 * @ingroup Efl_Access_Relation
 */
typedef struct _Efl_Access_Relation
{
  Efl_Access_Relation_Type type; /**< Relation type */
  Eina_List *objects; /**< List with relation objects */
} Efl_Access_Relation;
#endif /* EFL_BETA_API_SUPPORT */


#endif
#ifdef EFL_BETA_API_SUPPORT
/** Accessibility accessible mixin
 *
 * @ingroup Efl_Access_Object
 */
#define EFL_ACCESS_OBJECT_MIXIN efl_access_object_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_access_object_mixin_get(void) EINA_CONST;

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
/**
 * @brief Gets an localized string describing accessible object role name.
 *
 * @param[in] obj The object.
 *
 * @return Localized accessible object role name
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK const char *efl_access_object_localized_role_name_get(const Eo *obj);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Accessible name of the object.
 *
 * @param[in] obj The object.
 * @param[in] i18n_name Accessible name
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK void efl_access_object_i18n_name_set(Eo *obj, const char *i18n_name);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Accessible name of the object.
 *
 * @param[in] obj The object.
 *
 * @return Accessible name
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK const char *efl_access_object_i18n_name_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
/**
 * @brief Gets an all relations between accessible object and other accessible
 * objects.
 *
 * @param[in] obj The object.
 *
 * @return Accessible relation set
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK Eina_Iterator *efl_access_object_relations_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The role of the object in accessibility domain.
 *
 * @param[in] obj The object.
 * @param[in] role Accessible role
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK void efl_access_object_role_set(Eo *obj, Efl_Access_Role role);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The role of the object in accessibility domain.
 *
 * @param[in] obj The object.
 *
 * @return Accessible role
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK Efl_Access_Role efl_access_object_role_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
/**
 * @brief Gets object's accessible children.
 *
 * @param[in] obj The object.
 *
 * @return List of widget's children
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK Eina_List *efl_access_object_access_children_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
/**
 * @brief Gets human-readable string identifying object accessibility role.
 *
 * @param[in] obj The object.
 *
 * @return Accessible role name
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK const char *efl_access_object_role_name_get(const Eo *obj);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
/**
 * @brief Gets key-value pairs identifying object extra attributes. Must be
 * free by a user.
 *
 * @param[in] obj The object.
 *
 * @return List of object attributes. Must be freed by the user
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK Eina_List *efl_access_object_attributes_get(const Eo *obj) EFL_TRANSFER_OWNERSHIP EINA_WARN_UNUSED_RESULT;
#endif
#endif /* EFL_BETA_API_SUPPORT */

/**
 * @brief Add key-value pair identifying object extra attributes
 *
 * @param[in] obj The object.
 * @param[in] key The string key to give extra information
 * @param[in] value The string value to give extra information
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK void efl_access_object_attribute_append(Eo *obj, const char *key, const char *value);

/**
 * @brief delete key-value pair identifying object extra attributes when key is
 * given
 *
 * @param[in] obj The object.
 * @param[in] key The string key to identify the key-value pair
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK void efl_access_object_attribute_del(Eo *obj, const char *key);

/** Removes all attributes in accessible object.
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK void efl_access_object_attributes_clear(Eo *obj);

#ifdef EFL_ACCESS_OBJECT_PROTECTED
/**
 * @brief Reading information of an accessible object.
 *
 * If no reading information is set, 0 is returned which means all four reading
 * information types will be read from object highlight. If set to 0, existing
 * reading info will be deleted.
 *
 * @param[in] obj The object.
 * @param[in] reading_info Reading information types
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK void efl_access_object_reading_info_type_set(Eo *obj, Efl_Access_Reading_Info_Type reading_info);
#endif

#ifdef EFL_ACCESS_OBJECT_PROTECTED
/**
 * @brief Reading information of an accessible object.
 *
 * If no reading information is set, 0 is returned which means all four reading
 * information types will be read from object highlight. If set to 0, existing
 * reading info will be deleted.
 *
 * @param[in] obj The object.
 *
 * @return Reading information types
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK Efl_Access_Reading_Info_Type efl_access_object_reading_info_type_get(const Eo *obj);
#endif

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
/**
 * @brief Gets index of the child in parent's children list.
 *
 * @param[in] obj The object.
 *
 * @return Index in children list
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK int efl_access_object_index_in_parent_get(const Eo *obj);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Contextual information about object.
 *
 * @param[in] obj The object.
 * @param[in] description Accessible contextual information
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK void efl_access_object_description_set(Eo *obj, const char *description);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Contextual information about object.
 *
 * @param[in] obj The object.
 *
 * @return Accessible contextual information
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK const char *efl_access_object_description_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
/**
 * @brief Gets set describing object accessible states.
 *
 * @param[in] obj The object.
 *
 * @return Accessible state set
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK Efl_Access_State_Set efl_access_object_state_set_get(const Eo *obj);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
/**
 * @brief Register accessibility event listener
 *
 * @param[in] cb Callback
 * @param[in] data Data
 *
 * @return Event handler
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK Efl_Access_Event_Handler *efl_access_object_event_handler_add(Efl_Event_Cb cb, void *data);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
/**
 * @brief Deregister accessibility event listener
 *
 * @param[in] handler Event handler
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK void efl_access_object_event_handler_del(Efl_Access_Event_Handler *handler);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
/**
 * @brief Emit event
 *
 * @param[in] accessible Accessibility object.
 * @param[in] event Accessibility event type.
 * @param[in] event_info Accessibility event details.
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK void efl_access_object_event_emit(Efl_Access_Object *accessible, const Efl_Event_Description *event, void *event_info);
#endif
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The translation domain of "name" and "description" properties.
 *
 * Translation domain should be set if the application wants to support i18n
 * for accessibility "name" and "description" properties.
 *
 * When translation domain is set, values of "name" and "description"
 * properties will be translated with the dgettext function using the current
 * translation domain as the "domainname" parameter.
 *
 * It is the application developer's responsibility to ensure that translation
 * files are loaded and bound to the translation domain when accessibility is
 * enabled.
 *
 * @param[in] obj The object.
 * @param[in] domain Translation domain
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK void efl_access_object_translation_domain_set(Eo *obj, const char *domain);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief The translation domain of "name" and "description" properties.
 *
 * Translation domain should be set if the application wants to support i18n
 * for accessibility "name" and "description" properties.
 *
 * When translation domain is set, values of "name" and "description"
 * properties will be translated with the dgettext function using the current
 * translation domain as the "domainname" parameter.
 *
 * It is the application developer's responsibility to ensure that translation
 * files are loaded and bound to the translation domain when accessibility is
 * enabled.
 *
 * @param[in] obj The object.
 *
 * @return Translation domain
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK const char *efl_access_object_translation_domain_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Type of accessibility object
 *
 * @param[in] obj The object.
 * @param[in] type Object type
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK void efl_access_object_access_type_set(Eo *obj, Efl_Access_Type type);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Type of accessibility object
 *
 * @param[in] obj The object.
 *
 * @return Object type
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK Efl_Access_Type efl_access_object_access_type_get(const Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Defines the relationship between two accessible objects.
 *
 * Adds a unique relationship between source object and relation_object of a
 * given type.
 *
 * Relationships can be queried by Assistive Technology clients to provide
 * customized feedback, improving overall user experience.
 *
 * Relationship_append API is asymmetric, which means that appending, for
 * example, relation EFL_ACCESS_RELATION_TYPE_FLOWS_TO from object A to B, do
 * NOT append relation EFL_ACCESS_RELATION_TYPE_FLOWS_FROM from object B to
 * object A.
 *
 * @param[in] obj The object.
 * @param[in] type Relation type
 * @param[in] relation_object Object to relate to
 *
 * @return @c true if relationship was successfully appended, @c false
 * otherwise
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK Eina_Bool efl_access_object_relationship_append(Eo *obj, Efl_Access_Relation_Type type, const Efl_Access_Object *relation_object);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Removes the relationship between two accessible objects.
 *
 * If relation_object is @c NULL function removes all relations of the given
 * type.
 *
 * @param[in] obj The object.
 * @param[in] type Relation type
 * @param[in] relation_object Object to remove relation from
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK void efl_access_object_relationship_remove(Eo *obj, Efl_Access_Relation_Type type, const Efl_Access_Object *relation_object);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/** Removes all relationships in accessible object.
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK void efl_access_object_relationships_clear(Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Root object of accessible object hierarchy
 *
 * @return Root object
 *
 * @ingroup Efl_Access_Object
 */
EAPI EAPI_WEAK Efl_Object *efl_access_object_access_root_get(void);
#endif /* EFL_BETA_API_SUPPORT */

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_ACCESS_OBJECT_EVENT_PROPERTY_CHANGED;

/** Called when property has changed
 * @return const char *
 *
 * @ingroup Efl_Access_Object
 */
#define EFL_ACCESS_OBJECT_EVENT_PROPERTY_CHANGED (&(_EFL_ACCESS_OBJECT_EVENT_PROPERTY_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_ACCESS_OBJECT_EVENT_CHILDREN_CHANGED;

/** Called when children have changed
 * @return Efl_Access_Event_Children_Changed_Data
 *
 * @ingroup Efl_Access_Object
 */
#define EFL_ACCESS_OBJECT_EVENT_CHILDREN_CHANGED (&(_EFL_ACCESS_OBJECT_EVENT_CHILDREN_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_ACCESS_OBJECT_EVENT_STATE_CHANGED;

/** Called when state has changed
 * @return Efl_Access_Event_State_Changed_Data
 *
 * @ingroup Efl_Access_Object
 */
#define EFL_ACCESS_OBJECT_EVENT_STATE_CHANGED (&(_EFL_ACCESS_OBJECT_EVENT_STATE_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_ACCESS_OBJECT_EVENT_BOUNDS_CHANGED;

/** Called when boundaries have changed
 * @return Efl_Access_Event_Geometry_Changed_Data
 *
 * @ingroup Efl_Access_Object
 */
#define EFL_ACCESS_OBJECT_EVENT_BOUNDS_CHANGED (&(_EFL_ACCESS_OBJECT_EVENT_BOUNDS_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_ACCESS_OBJECT_EVENT_VISIBLE_DATA_CHANGED;

/** Called when visibility has changed
 *
 * @ingroup Efl_Access_Object
 */
#define EFL_ACCESS_OBJECT_EVENT_VISIBLE_DATA_CHANGED (&(_EFL_ACCESS_OBJECT_EVENT_VISIBLE_DATA_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_ACCESS_OBJECT_EVENT_ACTIVE_DESCENDANT_CHANGED;

/** Called when active state of descendant has changed
 * @return Efl_Object *
 *
 * @ingroup Efl_Access_Object
 */
#define EFL_ACCESS_OBJECT_EVENT_ACTIVE_DESCENDANT_CHANGED (&(_EFL_ACCESS_OBJECT_EVENT_ACTIVE_DESCENDANT_CHANGED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_ACCESS_OBJECT_EVENT_ADDED;

/** Called when item is added
 *
 * @ingroup Efl_Access_Object
 */
#define EFL_ACCESS_OBJECT_EVENT_ADDED (&(_EFL_ACCESS_OBJECT_EVENT_ADDED))

EAPI EAPI_WEAK extern const Efl_Event_Description _EFL_ACCESS_OBJECT_EVENT_REMOVED;

/** Called when item is removed
 *
 * @ingroup Efl_Access_Object
 */
#define EFL_ACCESS_OBJECT_EVENT_REMOVED (&(_EFL_ACCESS_OBJECT_EVENT_REMOVED))
#endif /* EFL_BETA_API_SUPPORT */

#endif

#ifndef _EFL_CANVAS_SNAPSHOT_EO_H_
#define _EFL_CANVAS_SNAPSHOT_EO_H_

#ifndef _EFL_CANVAS_SNAPSHOT_EO_CLASS_TYPE
#define _EFL_CANVAS_SNAPSHOT_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Snapshot;

#endif

#ifndef _EFL_CANVAS_SNAPSHOT_EO_TYPES
#define _EFL_CANVAS_SNAPSHOT_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/**
 * @brief Low-level snapshot image object.
 *
 * A snapshot is a special kind of image containing the pixels from all the
 * objects below it. This allows applications to save screenshots of all or
 * part of their UI, or apply filters to parts of the UI.
 *
 * @ingroup Efl_Canvas_Snapshot
 */
#define EFL_CANVAS_SNAPSHOT_CLASS efl_canvas_snapshot_class_get()

EVAS_API EVAS_API_WEAK const Efl_Class *efl_canvas_snapshot_class_get(void) EINA_CONST;
#endif /* EFL_BETA_API_SUPPORT */

#endif

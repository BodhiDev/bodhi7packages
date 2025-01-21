#ifndef EFL_ACCESS_WINDOW_H
#define EFL_ACCESS_WINDOW_H

#ifdef EFL_BETA_API_SUPPORT
#include "efl_access_window.eo.h"

/**
 * Emits 'Window:Activated' accessible signal.
 */
#define efl_access_window_activated_signal_emit(obj) \
   efl_access_object_event_emit(obj, EFL_ACCESS_WINDOW_EVENT_WINDOW_ACTIVATED, NULL);

/**
 * Emits 'Window:Deactivated' accessible signal.
 */
#define efl_access_window_deactivated_signal_emit(obj) \
   efl_access_object_event_emit(obj, EFL_ACCESS_WINDOW_EVENT_WINDOW_DEACTIVATED, NULL);

/**
 * Emits 'Window:Created' accessible signal.
 */
#define efl_access_window_created_signal_emit(obj) \
   efl_access_object_event_emit(obj, EFL_ACCESS_WINDOW_EVENT_WINDOW_CREATED, NULL);

/**
 * Emits 'Window:Destroyed' accessible signal.
 */
#define efl_access_window_destroyed_signal_emit(obj) \
   efl_access_object_event_emit(obj, EFL_ACCESS_WINDOW_EVENT_WINDOW_DESTROYED, NULL);

/**
 * Emits 'Window:Maximized' accessible signal.
 */
#define efl_access_window_maximized_signal_emit(obj) \
   efl_access_object_event_emit(obj, EFL_ACCESS_WINDOW_EVENT_WINDOW_MAXIMIZED, NULL);

/**
 * Emits 'Window:Minimized' accessible signal.
 */
#define efl_access_window_minimized_signal_emit(obj) \
   efl_access_object_event_emit(obj, EFL_ACCESS_WINDOW_EVENT_WINDOW_MINIMIZED, NULL);

/**
 * Emits 'Window:Restored' accessible signal.
 */
#define efl_access_window_restored_signal_emit(obj) \
   efl_access_object_event_emit(obj, EFL_ACCESS_WINDOW_EVENT_WINDOW_RESTORED, NULL);

#endif
#endif

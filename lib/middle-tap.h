#ifndef MIDDLE_TAP_H
#define MIDDLE_TAP_H

#include <glib-object.h>
#include <clutter/clutter.h>

G_BEGIN_DECLS

void middle_tap_enable(ClutterInputDevice *device, gboolean enabled);

G_END_DECLS

#endif /* MIDDLE_TAP_H */
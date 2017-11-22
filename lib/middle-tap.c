#define CLUTTER_ENABLE_COMPOSITOR_API

#include <libinput.h>
#include <clutter/evdev/clutter-evdev.h>

#include "middle-tap.h"

void middle_tap_enable(ClutterInputDevice *device, gboolean enabled)
{
  struct libinput_device *libinput_device;

  libinput_device = clutter_evdev_input_device_get_libinput_device(device);
  if (!libinput_device)
    return;

  if (libinput_device_config_tap_get_finger_count(libinput_device) > 0)
  {
    libinput_device_config_tap_set_button_map(libinput_device,
                                              enabled
                                                  ? LIBINPUT_CONFIG_TAP_MAP_LMR
                                                  : LIBINPUT_CONFIG_TAP_MAP_LRM);
  }
}

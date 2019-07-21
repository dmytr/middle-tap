gnome = import('gnome')

sources = [
  'middle-tap.c',
  'middle-tap.h'
]

dependencies = [
  dependency('gobject-2.0'),
  dependency('glib-2.0'),
  dependency('libmutter-4'),
  dependency('mutter-clutter-4'),
  dependency('libinput')
]

lib = shared_library(
  'middletap',
  sources      : sources,
  dependencies : dependencies,
  install      : true
)

gir = gnome.generate_gir(
  lib,
  sources           : sources,
  dependencies      : dependencies,
  nsversion         : '0.4',
  namespace         : 'MiddleTap',
  symbol_prefix     : 'middle_tap_',
  identifier_prefix : 'MiddleTap',
  includes          : ['GObject-2.0', 'Clutter-4'],
  install           : true
)

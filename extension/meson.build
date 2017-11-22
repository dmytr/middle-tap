conf_data = configuration_data()

conf_data.set('extension_id', extension_id)

install_dir = join_paths('share/gnome-shell/extensions', extension_id)

configure_file(input         : 'metadata.json.in',
               output        : 'metadata.json',
               configuration : conf_data,
               install_dir   : install_dir)

install_data('extension.js', install_dir : install_dir)
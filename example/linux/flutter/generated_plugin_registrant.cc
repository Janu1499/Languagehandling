//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <languagehandling/flutter_localization_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) languagehandling_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "FlutterLocalizationPlugin");
  flutter_localization_plugin_register_with_registrar(languagehandling_registrar);
}

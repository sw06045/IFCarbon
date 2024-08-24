#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "IFCPP::IfcPlusPlus" for configuration "Release"
set_property(TARGET IFCPP::IfcPlusPlus APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(IFCPP::IfcPlusPlus PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C;CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libIfcPlusPlus.a"
  )

list(APPEND _cmake_import_check_targets IFCPP::IfcPlusPlus )
list(APPEND _cmake_import_check_files_for_IFCPP::IfcPlusPlus "${_IMPORT_PREFIX}/bin/libIfcPlusPlus.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#include_directories("${carve_SOURCE_DIR}/include")
#include_directories("${carve_SOURCE_DIR}/external/GLOOP/include")
#include_directories("${carve_SOURCE_DIR}/external/GLEW/include")
#include_directories("${carve_SOURCE_DIR}/external/GLUI/include")

#add_library(carve_fileformats      STATIC read_ply.cpp write_ply.cpp)
add_library(carve_misc             STATIC geometry.cpp)
#if(CARVE_WITH_GUI)
#  add_library(carve_ui             STATIC geom_draw.cpp scene.cpp)
#endif(CARVE_WITH_GUI)

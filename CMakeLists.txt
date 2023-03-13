cmake_minimum_required(VERSION 3.22.0)
project(consts C)

# version
get_filename_component(VERSION_TAG_PATH "version.tag" ABSOLUTE)
if(EXISTS ${VERSION_TAG_PATH})
  file(READ version.tag VERSION_TAG OFFSET 1)
  string(REPLACE "." ";" VERSION_LIST ${VERSION_TAG})
  list(GET VERSION_LIST 0 PROJECT_VERSION_MAJOR)
  list(GET VERSION_LIST 1 PROJECT_VERSION_MINOR)
  list(GET VERSION_LIST 2 PROJECT_VERSION_PATCH)
else()
  set(PROJECT_VERSION_MAJOR 0)
  set(PROJECT_VERSION_MINOR 0)
  set(PROJECT_VERSION_PATCH 0)
endif()
set(PROJECT_VERSION ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH})
message(STATUS "[VERB] Project version: ${PROJECT_VERSION}")

# options
option(BUILD_SHARED_LIBS "Build using shared libraries" OFF)

#include 
if(UNIX OR MSYS OR MINGW)
  include_directories(".")
elseif(WIN32)
  include_directories("." $ENV{LocalAppData}/include)
endif()

# source
file(GLOB SOURCES "src/*.c")
file(GLOB INCLUDES "*.h")

#install
include(GNUInstallDirs)
if(UNIX OR MSYS OR MINGW)
  set(PACKAGE_INSTALL_CMAKEDIR ${CMAKE_INSTALL_LIBDIR}/cmake/${CMAKE_PROJECT_NAME})
elseif(WIN32)
  set(PACKAGE_INSTALL_CMAKEDIR "cmake")
endif()


install(FILES ${INCLUDES} DESTINATION "include")

include(CMakePackageConfigHelpers)
write_basic_package_version_file("${PROJECT_BINARY_DIR}/${CMAKE_PROJECT_NAME}ConfigVersion.cmake" VERSION ${PROJECT_VERSION} COMPATIBILITY SameMajorVersion)
install(FILES "${PROJECT_BINARY_DIR}/${CMAKE_PROJECT_NAME}ConfigVersion.cmake" DESTINATION ${PACKAGE_INSTALL_CMAKEDIR})

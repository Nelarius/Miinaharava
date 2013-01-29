#Change this if you need to target a specific CMake version
cmake_minimum_required(VERSION 2.6)
project(myproject)

# Enable debug symbols by default
if(CMAKE_BUILD_TYPE STREQUAL "")
  set(CMAKE_BUILD_TYPE Debug)
endif()
# (you can also set it on the command line: -D CMAKE_BUILD_TYPE=Release)

# Set version information in a config.h file
set(myproject_VERSION_MAJOR 1)
set(myproject_VERSION_MINOR 0)
configure_file(
  "${PROJECT_SOURCE_DIR}/src/config.h.in"
  "${PROJECT_BINARY_DIR}/config.h"
  )
include_directories("${PROJECT_BINARY_DIR}")

# Define sources and executable
set(EXECUTABLE_NAME "Miinaharava")
aux_source_directory(${PROJECT_SOURCE_DIR}/src/engine/ engineSource)
aux_source_directory(${PROJECT_SOURCE_DIR}/src/game/ gameSource)
aux_source_directory(${PROJECT_SOURCE_DIR}/src/unitTests/ testSource)
aux_source_directory(${PROJECT_SOURCE_DIR}/src/utilities/ utilitySource)
add_executable(${EXECUTABLE_NAME} ${mainSource} ${engineSource} ${gameSource} ${testSource} ${utilitySource})

#Define where header files reside
set(SFML_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/sfml/include" ${SFML_INCLUDE_DIR})

# Detect and add SFML
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
#Find any version 2.X of SFML
#See the FindSFML.cmake file for additional details and instructions
find_package(SFML 2 REQUIRED system window graphics)
if(SFML_FOUND)
  include_directories(${SFML_INCLUDE_DIR})
  target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES})
endif()


# Install target
install(TARGETS ${EXECUTABLE_NAME} DESTINATION bin)


# CPack packaging
include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_SOURCE_DIR}/COPYING")
set(CPACK_PACKAGE_VERSION_MAJOR "${myproject_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${myproject_VERSION_MINOR}")
include(CPack)

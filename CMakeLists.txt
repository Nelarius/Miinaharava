#Change this if you need to target a specific CMake version
cmake_minimum_required(VERSION 2.6)
project(Miinaharava)

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
include_directories("${PROJECT_SOURCE_DIR}/src")
message("${PROJECT_SOURCE_DIR}/src")

# Define which sources to include
set(sourceFiles 
src/main.cpp
src/engine/App.cpp
src/engine/App.h
src/engine/AppState.cpp
src/engine/AppState.h
src/engine/AppStateManager.cpp
src/engine/AppStateManager.h
src/engine/Behavior.cpp
src/engine/Behavior.h
src/engine/Drawable.cpp
src/engine/Drawable.h
src/engine/DrawableSprite.cpp
src/engine/DrawableSprite.h
src/engine/Entity.cpp
src/engine/Entity.h
src/engine/EntityManager.cpp
src/engine/EntityManager.h
src/engine/stdincl.h
src/engine/TextureManager.cpp
src/engine/TextureManager.h
src/game/AppStateClassic.cpp
src/game/AppStateClassic.h
src/game/AppStateMenu.cpp
src/game/AppStateMenu.h
src/game/AppStateSplashScreen.cpp
src/game/AppStateSplashScreen.h
src/game/GridBehavior.cpp
src/game/GridBehavior.h
src/game/GridEntity.cpp
src/game/GridEntity.h
src/game/MenuBehavior.cpp
src/game/MenuBehavior.h
src/game/MenuDrawable.cpp
src/game/MenuDrawable.h
src/game/MenuStateEntity.cpp
src/game/MenuStateEntity.h
src/game/Parameters.h
src/game/Parameters.cpp
src/game/SplashScreenBehavior.cpp
src/game/SplashScreenBehavior.h
src/game/SplashScreenDrawable.cpp
src/game/SplashScreenDrawable.h
src/game/SplashScreenEntity.cpp
src/game/SplashScreenEntity.h
src/game/TileDrawableSprite.cpp
src/game/TileDrawableSprite.h
src/game/TileEntity.cpp
src/game/TileEntity.h
src/game/TileState.cpp
src/game/TileState.h
src/game/TileStateCovered.cpp
src/game/TileStateCovered.h
src/game/TileStateUncovered.cpp
src/game/TileStateUncovered.h
src/game/TileStateFlagged.cpp
src/game/TileStateFlagged.h
src/game/TileStatePeek.cpp
src/game/TileStateManager.cpp
src/game/TileStateManager.h
src/game/TileStateUncertain.cpp
src/game/TileStateUncertain.h
src/utilities/LinGen.cpp
src/utilities/LinGen.h
src/unitTests/AppStateManagerTest.cpp
src/unitTests/EntityManagerTest.cpp
src/unitTests/GridBehaviorTest.cpp
src/unitTests/TextureManagerTest.cpp
src/unitTests/TileStateManagerTest.cpp
)

set(sourceIncludes
src/engine
src/game
src/utilities)

# Define executable
set(EXECUTABLE_NAME "Miinaharava")
add_executable(${EXECUTABLE_NAME} ${sourceFiles})

#Define where header files reside
set(SFML_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/sfml/include" ${SFML_INCLUDE_DIR})

#Set compiler flags
set(CMAKE_CXX_FLAGS "-std=c++0x")

#linhk to UnitTest++
target_link_libraries(${EXECUTABLE_NAME} "${CMAKE_CURRENT_SOURCE_DIR}/sfml/lib/libUnitTest++.a")

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

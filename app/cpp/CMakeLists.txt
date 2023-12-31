cmake_minimum_required (VERSION 3.10.2)


########## PROJECT NAME ##########
set(APP_NAME GlistApp)


########## USED PLUGINS LIST ##########
set(PLUGINS)


##################################################
# DO NOT CHANGE BELOW
##################################################

########## CMAKE THING ##########
if(NOT DEFINED CMAKE_SUPPRESS_DEVELOPER_WARNINGS)
    set(CMAKE_SUPPRESS_DEVELOPER_WARNINGS 1 CACHE INTERNAL "No dev warnings")
endif()



########## PATHS AND VARIABLES ##########
set(APP_DIR ${CMAKE_SOURCE_DIR})
project (${APP_NAME})

set(TOP_DIR ${APP_DIR}/../../../..)
set(MAIN_DIR ${TOP_DIR}/GlistEngine)
set(ENGINE_DIR ${MAIN_DIR}/engine)

# gipAndroid plugin is required for Android development
# It only contains libraries required for GlistEngine.
list(APPEND PLUGINS
        gipAndroid)

include(${ENGINE_DIR}/CMakeLists.txt)

########## SOURCE FILES AND INCLUDE DIRECTORIES ##########
add_library(${APP_NAME} SHARED
        ${APP_DIR}/src/gApp.cpp
        ${APP_DIR}/src/gCanvas.cpp
        ${APP_DIR}/src/main.cpp)

include_directories(${APP_NAME} PRIVATE
        ${APP_DIR}/src)

########## LINKING ##########
# add lib dependencies

target_link_libraries(${APP_NAME}
        GlistEngine)

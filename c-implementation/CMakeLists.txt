cmake_minimum_required(VERSION 3.16)
project(q84_raytracer CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ── Release by default ────────────────────────────────────────────────────────
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "" FORCE)
endif()

# ── Locate SDL2 ───────────────────────────────────────────────────────────────
# Works with vcpkg, system packages, or a manual SDL2_DIR hint.
find_package(SDL2 CONFIG QUIET)
if(NOT SDL2_FOUND)
    find_package(SDL2 REQUIRED)   # fallback: try module mode (FindSDL2.cmake)
endif()

# ── Executable ────────────────────────────────────────────────────────────────
add_executable(raytracer main.cpp)

target_include_directories(raytracer PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# SDL2 target name differs between config-mode (SDL2::SDL2) and module-mode
if(TARGET SDL2::SDL2)
    target_link_libraries(raytracer PRIVATE SDL2::SDL2 SDL2::SDL2main)
else()
    target_include_directories(raytracer PRIVATE ${SDL2_INCLUDE_DIRS})
    target_link_libraries(raytracer PRIVATE ${SDL2_LIBRARIES})
endif()

# ── Windows: copy SDL2.dll next to the .exe ───────────────────────────────────
if(WIN32 AND TARGET SDL2::SDL2)
    add_custom_command(TARGET raytracer POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            $<TARGET_FILE:SDL2::SDL2>
            $<TARGET_FILE_DIR:raytracer>
        COMMENT "Copying SDL2.dll …"
    )
endif()

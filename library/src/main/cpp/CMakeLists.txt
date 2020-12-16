# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.10.2)

# Declares and names the project.

project("prof")

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

include_directories(common handler nlp)

add_library( # Sets the name of the library.
        nleakprf

        # Sets the library as a shared library.
        SHARED

        native_leak_prf.cpp

        nlp/common-jni.cpp
        nlp/malloc_method.cpp
        nlp/memory_manager.cpp
        nlp/free_method.cpp
        nlp/calloc_method.cpp
        nlp/realloc_method.cpp
        nlp/memalign_method.cpp
        nlp/aligned_alloc_method.cpp
        nlp/posix_memalign_method.cpp

        xhook/xh_core.c
        xhook/xh_elf.c
        xhook/xh_jni.c
        xhook/xh_log.c
        xhook/xh_util.c
        xhook/xh_version.c
        xhook/xhook.c

        common/unit.cpp
        )

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
        log-lib

        # Specifies the name of the NDK library that
        # you want CMake to locate.
        log)

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
        nleakprf

        # Links the target library to the log library
        # included in the NDK.
        ${log-lib})
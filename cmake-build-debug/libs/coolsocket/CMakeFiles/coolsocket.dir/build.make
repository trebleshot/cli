# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/veli/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/192.6817.32/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/veli/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/192.6817.32/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/veli/Workspace/CLionProjects/links

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/veli/Workspace/CLionProjects/links/cmake-build-debug

# Include any dependencies generated for this target.
include libs/coolsocket/CMakeFiles/coolsocket.dir/depend.make

# Include the progress variables for this target.
include libs/coolsocket/CMakeFiles/coolsocket.dir/progress.make

# Include the compile flags for this target's objects.
include libs/coolsocket/CMakeFiles/coolsocket.dir/flags.make

libs/coolsocket/CMakeFiles/coolsocket.dir/coolsocket_autogen/mocs_compilation.cpp.o: libs/coolsocket/CMakeFiles/coolsocket.dir/flags.make
libs/coolsocket/CMakeFiles/coolsocket.dir/coolsocket_autogen/mocs_compilation.cpp.o: libs/coolsocket/coolsocket_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/veli/Workspace/CLionProjects/links/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libs/coolsocket/CMakeFiles/coolsocket.dir/coolsocket_autogen/mocs_compilation.cpp.o"
	cd /home/veli/Workspace/CLionProjects/links/cmake-build-debug/libs/coolsocket && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/coolsocket.dir/coolsocket_autogen/mocs_compilation.cpp.o -c /home/veli/Workspace/CLionProjects/links/cmake-build-debug/libs/coolsocket/coolsocket_autogen/mocs_compilation.cpp

libs/coolsocket/CMakeFiles/coolsocket.dir/coolsocket_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coolsocket.dir/coolsocket_autogen/mocs_compilation.cpp.i"
	cd /home/veli/Workspace/CLionProjects/links/cmake-build-debug/libs/coolsocket && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/veli/Workspace/CLionProjects/links/cmake-build-debug/libs/coolsocket/coolsocket_autogen/mocs_compilation.cpp > CMakeFiles/coolsocket.dir/coolsocket_autogen/mocs_compilation.cpp.i

libs/coolsocket/CMakeFiles/coolsocket.dir/coolsocket_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coolsocket.dir/coolsocket_autogen/mocs_compilation.cpp.s"
	cd /home/veli/Workspace/CLionProjects/links/cmake-build-debug/libs/coolsocket && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/veli/Workspace/CLionProjects/links/cmake-build-debug/libs/coolsocket/coolsocket_autogen/mocs_compilation.cpp -o CMakeFiles/coolsocket.dir/coolsocket_autogen/mocs_compilation.cpp.s

libs/coolsocket/CMakeFiles/coolsocket.dir/src/coolsocket.cpp.o: libs/coolsocket/CMakeFiles/coolsocket.dir/flags.make
libs/coolsocket/CMakeFiles/coolsocket.dir/src/coolsocket.cpp.o: ../libs/coolsocket/src/coolsocket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/veli/Workspace/CLionProjects/links/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object libs/coolsocket/CMakeFiles/coolsocket.dir/src/coolsocket.cpp.o"
	cd /home/veli/Workspace/CLionProjects/links/cmake-build-debug/libs/coolsocket && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/coolsocket.dir/src/coolsocket.cpp.o -c /home/veli/Workspace/CLionProjects/links/libs/coolsocket/src/coolsocket.cpp

libs/coolsocket/CMakeFiles/coolsocket.dir/src/coolsocket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coolsocket.dir/src/coolsocket.cpp.i"
	cd /home/veli/Workspace/CLionProjects/links/cmake-build-debug/libs/coolsocket && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/veli/Workspace/CLionProjects/links/libs/coolsocket/src/coolsocket.cpp > CMakeFiles/coolsocket.dir/src/coolsocket.cpp.i

libs/coolsocket/CMakeFiles/coolsocket.dir/src/coolsocket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coolsocket.dir/src/coolsocket.cpp.s"
	cd /home/veli/Workspace/CLionProjects/links/cmake-build-debug/libs/coolsocket && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/veli/Workspace/CLionProjects/links/libs/coolsocket/src/coolsocket.cpp -o CMakeFiles/coolsocket.dir/src/coolsocket.cpp.s

# Object files for target coolsocket
coolsocket_OBJECTS = \
"CMakeFiles/coolsocket.dir/coolsocket_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/coolsocket.dir/src/coolsocket.cpp.o"

# External object files for target coolsocket
coolsocket_EXTERNAL_OBJECTS =

libs/coolsocket/libcoolsocket.so.0.1.0: libs/coolsocket/CMakeFiles/coolsocket.dir/coolsocket_autogen/mocs_compilation.cpp.o
libs/coolsocket/libcoolsocket.so.0.1.0: libs/coolsocket/CMakeFiles/coolsocket.dir/src/coolsocket.cpp.o
libs/coolsocket/libcoolsocket.so.0.1.0: libs/coolsocket/CMakeFiles/coolsocket.dir/build.make
libs/coolsocket/libcoolsocket.so.0.1.0: /usr/lib/libQt5Network.so.5.13.1
libs/coolsocket/libcoolsocket.so.0.1.0: /usr/lib/libQt5Core.so.5.13.1
libs/coolsocket/libcoolsocket.so.0.1.0: libs/coolsocket/CMakeFiles/coolsocket.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/veli/Workspace/CLionProjects/links/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libcoolsocket.so"
	cd /home/veli/Workspace/CLionProjects/links/cmake-build-debug/libs/coolsocket && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/coolsocket.dir/link.txt --verbose=$(VERBOSE)
	cd /home/veli/Workspace/CLionProjects/links/cmake-build-debug/libs/coolsocket && $(CMAKE_COMMAND) -E cmake_symlink_library libcoolsocket.so.0.1.0 libcoolsocket.so.0 libcoolsocket.so

libs/coolsocket/libcoolsocket.so.0: libs/coolsocket/libcoolsocket.so.0.1.0
	@$(CMAKE_COMMAND) -E touch_nocreate libs/coolsocket/libcoolsocket.so.0

libs/coolsocket/libcoolsocket.so: libs/coolsocket/libcoolsocket.so.0.1.0
	@$(CMAKE_COMMAND) -E touch_nocreate libs/coolsocket/libcoolsocket.so

# Rule to build all files generated by this target.
libs/coolsocket/CMakeFiles/coolsocket.dir/build: libs/coolsocket/libcoolsocket.so

.PHONY : libs/coolsocket/CMakeFiles/coolsocket.dir/build

libs/coolsocket/CMakeFiles/coolsocket.dir/clean:
	cd /home/veli/Workspace/CLionProjects/links/cmake-build-debug/libs/coolsocket && $(CMAKE_COMMAND) -P CMakeFiles/coolsocket.dir/cmake_clean.cmake
.PHONY : libs/coolsocket/CMakeFiles/coolsocket.dir/clean

libs/coolsocket/CMakeFiles/coolsocket.dir/depend:
	cd /home/veli/Workspace/CLionProjects/links/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/veli/Workspace/CLionProjects/links /home/veli/Workspace/CLionProjects/links/libs/coolsocket /home/veli/Workspace/CLionProjects/links/cmake-build-debug /home/veli/Workspace/CLionProjects/links/cmake-build-debug/libs/coolsocket /home/veli/Workspace/CLionProjects/links/cmake-build-debug/libs/coolsocket/CMakeFiles/coolsocket.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libs/coolsocket/CMakeFiles/coolsocket.dir/depend

# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\ASUS\CLionProjects\JIPP2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ASUS\CLionProjects\JIPP2\cmake-build-debug

# Include any dependencies generated for this target.
include lab4_zadania\first_classes\CMakeFiles\first_classes.dir\depend.make
# Include the progress variables for this target.
include lab4_zadania\first_classes\CMakeFiles\first_classes.dir\progress.make

# Include the compile flags for this target's objects.
include lab4_zadania\first_classes\CMakeFiles\first_classes.dir\flags.make

lab4_zadania\first_classes\CMakeFiles\first_classes.dir\src\main.cpp.obj: lab4_zadania\first_classes\CMakeFiles\first_classes.dir\flags.make
lab4_zadania\first_classes\CMakeFiles\first_classes.dir\src\main.cpp.obj: ..\lab4_zadania\first_classes\src\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ASUS\CLionProjects\JIPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lab4_zadania/first_classes/CMakeFiles/first_classes.dir/src/main.cpp.obj"
	cd C:\Users\ASUS\CLionProjects\JIPP2\cmake-build-debug\lab4_zadania\first_classes
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\first_classes.dir\src\main.cpp.obj /FdCMakeFiles\first_classes.dir\ /FS -c C:\Users\ASUS\CLionProjects\JIPP2\lab4_zadania\first_classes\src\main.cpp
<<
	cd C:\Users\ASUS\CLionProjects\JIPP2\cmake-build-debug

lab4_zadania\first_classes\CMakeFiles\first_classes.dir\src\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/first_classes.dir/src/main.cpp.i"
	cd C:\Users\ASUS\CLionProjects\JIPP2\cmake-build-debug\lab4_zadania\first_classes
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\first_classes.dir\src\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ASUS\CLionProjects\JIPP2\lab4_zadania\first_classes\src\main.cpp
<<
	cd C:\Users\ASUS\CLionProjects\JIPP2\cmake-build-debug

lab4_zadania\first_classes\CMakeFiles\first_classes.dir\src\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/first_classes.dir/src/main.cpp.s"
	cd C:\Users\ASUS\CLionProjects\JIPP2\cmake-build-debug\lab4_zadania\first_classes
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\first_classes.dir\src\main.cpp.s /c C:\Users\ASUS\CLionProjects\JIPP2\lab4_zadania\first_classes\src\main.cpp
<<
	cd C:\Users\ASUS\CLionProjects\JIPP2\cmake-build-debug

# Object files for target first_classes
first_classes_OBJECTS = \
"CMakeFiles\first_classes.dir\src\main.cpp.obj"

# External object files for target first_classes
first_classes_EXTERNAL_OBJECTS =

lab4_zadania\first_classes\first_classes.exe: lab4_zadania\first_classes\CMakeFiles\first_classes.dir\src\main.cpp.obj
lab4_zadania\first_classes\first_classes.exe: lab4_zadania\first_classes\CMakeFiles\first_classes.dir\build.make
lab4_zadania\first_classes\first_classes.exe: lab4_zadania\first_classes\CMakeFiles\first_classes.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ASUS\CLionProjects\JIPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable first_classes.exe"
	cd C:\Users\ASUS\CLionProjects\JIPP2\cmake-build-debug\lab4_zadania\first_classes
	"C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\first_classes.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100220~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100220~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\first_classes.dir\objects1.rsp @<<
 /out:first_classes.exe /implib:first_classes.lib /pdb:C:\Users\ASUS\CLionProjects\JIPP2\cmake-build-debug\lab4_zadania\first_classes\first_classes.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<
	cd C:\Users\ASUS\CLionProjects\JIPP2\cmake-build-debug

# Rule to build all files generated by this target.
lab4_zadania\first_classes\CMakeFiles\first_classes.dir\build: lab4_zadania\first_classes\first_classes.exe
.PHONY : lab4_zadania\first_classes\CMakeFiles\first_classes.dir\build

lab4_zadania\first_classes\CMakeFiles\first_classes.dir\clean:
	cd C:\Users\ASUS\CLionProjects\JIPP2\cmake-build-debug\lab4_zadania\first_classes
	$(CMAKE_COMMAND) -P CMakeFiles\first_classes.dir\cmake_clean.cmake
	cd C:\Users\ASUS\CLionProjects\JIPP2\cmake-build-debug
.PHONY : lab4_zadania\first_classes\CMakeFiles\first_classes.dir\clean

lab4_zadania\first_classes\CMakeFiles\first_classes.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\ASUS\CLionProjects\JIPP2 C:\Users\ASUS\CLionProjects\JIPP2\lab4_zadania\first_classes C:\Users\ASUS\CLionProjects\JIPP2\cmake-build-debug C:\Users\ASUS\CLionProjects\JIPP2\cmake-build-debug\lab4_zadania\first_classes C:\Users\ASUS\CLionProjects\JIPP2\cmake-build-debug\lab4_zadania\first_classes\CMakeFiles\first_classes.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : lab4_zadania\first_classes\CMakeFiles\first_classes.dir\depend


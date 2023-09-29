# Add source to this project's executable.
add_executable(MomentoPattern_Editor "Text Editor/Editor.cpp" "Text Editor/Editor.h"
"Text Editor/EditorState.h" "Text Editor/EditorState.cpp" 
"Text Editor/History.h" "Text Editor/History.cpp")

add_executable(MomentoPattern_LDocs "L Docs/LDocs.cpp" "L Docs/LDocs.h" "L Docs/LDocsState.h" "L Docs/LDocsState.cpp" "L Docs/LDocsHistory.h" "L Docs/LDocsHistory.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET MomentoPattern_Editor PROPERTY CXX_STANDARD 20)
  set_property(TARGET MomentoPattern_LDocs PROPERTY CXX_STANDARD 20)
endif()


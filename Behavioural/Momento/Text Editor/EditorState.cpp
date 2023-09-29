//
// Momento Pattern Example
// EditorState - Also knows as the Momento
// Author - Lokesh Wankhede (github.com/LogicalLokesh)
//

#include "EditorState.h"

EditorState::EditorState(const string& text) { Content = text; }

auto EditorState::GetContent() -> string { return Content; }

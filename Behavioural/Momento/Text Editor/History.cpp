//
// Momento Pattern Example
// History - Also knows as the CareTaker
// Author - Lokesh Wankhede (github.com/LogicalLokesh)
//

#include "History.h"

History::History() = default;

auto History::Push(const EditorState& state) -> void { EditorStates.push_back(state); }

auto History::Pop() -> EditorState
{
	EditorStates.pop_back();
	return EditorStates[EditorStates.size() - 1];
}

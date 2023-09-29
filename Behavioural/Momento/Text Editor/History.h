//
// Momento Pattern Example
// History - Also knows as the CareTaker
// Author - Lokesh Wankhede (github.com/LogicalLokesh)
//

#pragma once

#include <vector>

#include "EditorState.h"

using std::vector;

class History
{
public:
	History();
	auto Push(const EditorState& state) -> void;
	auto Pop() -> EditorState;
private:
	vector<EditorState> EditorStates{};
};

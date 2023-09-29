//
// Momento Pattern Example
// Editor - Also known as the Originator
// Author - Lokesh Wankhede (github.com/LogicalLokesh)
//

#pragma once

#include <string>

#include "EditorState.h"

using std::string;

class Editor
{
public:
	Editor();
	auto SetContent(const string& text) -> void;
	[[nodiscard("The return value should be used.")]]
	auto GetContent() const->string;

	[[nodiscard("The return value should be used.")]]
	auto CreateState() const->EditorState;
	auto Restore(EditorState state) -> void;

private:
	string Content{};
};

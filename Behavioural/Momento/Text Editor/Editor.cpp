//
// Momento Pattern Example
// Editor - Also known as the Originator
// Author - Lokesh Wankhede (github.com/LogicalLokesh)
//


#include <iostream>

#include "Editor.h"
#include "History.h"


auto main() -> int
{
	auto editor = Editor{};
	auto history = History{};

	// set some content
	editor.SetContent("The earth is flat.");
	history.Push(editor.CreateState());

	// add more content
	editor.SetContent("Well, it's flat alright!");
	history.Push(editor.CreateState());

	// even more
	editor.SetContent("The earth is as flat as pancake.");
	history.Push(editor.CreateState());

	// this is final, I promise
	editor.SetContent("Okay, maybe it's slightly round.");
	history.Push(editor.CreateState());

	// ok now undo
	editor.Restore(history.Pop());

	std::cout << editor.GetContent() << std::endl;

	return 0;
}


Editor::Editor() = default;

auto Editor::SetContent(const string& text) -> void { Content = text; }

auto Editor::GetContent() const -> string { return Content; }

auto Editor::CreateState() const -> EditorState { return EditorState(Content); }

auto Editor::Restore(EditorState state) -> void { Content = state.GetContent(); }

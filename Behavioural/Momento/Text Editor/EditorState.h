//
// Momento Pattern Example
// EditorState - Also knows as the Momento
// Author - Lokesh Wankhede (github.com/LogicalLokesh)
//

#pragma once

#include <string>

using std::string;

class EditorState
{
public:
	explicit EditorState(const string& text);
	auto GetContent() -> string;

private:
	string Content{};
};



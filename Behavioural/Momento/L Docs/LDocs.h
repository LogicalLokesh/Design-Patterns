//
// Momento Pattern Solved Example
// Author - Lokesh Wankhede (github.com/LogicalLokesh)
//

#pragma once

#include <string>

#include "LDocsState.h"

using std::string;

class LDocs
{
public:
	LDocs();

	[[nodiscard("The returned value should be used.")]]
	auto GetContent() const->string;
	auto SetContent(const string& text) -> void;

	[[nodiscard("The returned value should be used.")]]
	auto GetFontName() const->string;
	auto SetFontName(const string& name) -> void;

	[[nodiscard("The returned value should be used.")]]
	auto GetDocumentProperties() const->string;

	[[nodiscard("The returned value should be used.")]]
	auto GetFontSize() const -> int;
	auto SetFontSize(const int& size) -> void;

	[[nodiscard("The returned value should be used.")]]
	auto CreateState() const->LDocsState;

	auto RestoreState(const LDocsState& state) -> void;


private:
	string Content{}, FontName{}, DocumentProperties{};
	int FontSize{};
};

//
// Momento Pattern Solved Example
// Author - Lokesh Wankhede (github.com/LogicalLokesh)


#pragma once

#include <string>

using std::string;

class LDocsState
{
public:

	explicit LDocsState(const string& content, const string& fontName, const int fontSize);


	[[nodiscard("The returned value should be used.")]]
	auto GetContent() const->string;


	[[nodiscard("The returned value should be used.")]]
	auto GetFontName() const->string;

	[[nodiscard("The returned value should be used.")]]
	auto GetFontSize() const->int;


private:
	string Content{}, FontName{};
	int FontSize{};
};

//
// Momento Pattern Solved Example
// Author - Lokesh Wankhede (github.com/LogicalLokesh)
//

#include "LDocsState.h"


LDocsState::LDocsState(const string& content, const string& fontName, const int fontSize)
{
	Content = content;
	FontName = fontName;
	FontSize = fontSize;
}

auto LDocsState::GetContent() const -> string
{
	return Content;
}

auto LDocsState::GetFontName() const -> string
{
	return FontName;
}

auto LDocsState::GetFontSize() const -> int
{
	return FontSize;
}


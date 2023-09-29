//
// Momento Pattern Solved Example
// Author - Lokesh Wankhede (github.com/LogicalLokesh)
//

#include "LDocs.h"

#include <iostream>

#include "LDocsHistory.h"
#include "LDocsState.h"


using std::cout, std::endl;

auto main() -> int
{
	LDocs doc{};
	LDocsHistory history{};

	// Set some content	
	doc.SetContent("Clash of Clans is a cool game!");
	doc.SetFontName("Consolas");
	doc.SetFontSize(18);
	history.Push(doc.CreateState());
	cout << "Current : " << doc.GetDocumentProperties() << endl;

	// more content
	doc.SetContent("I also like Vector.");
	doc.SetFontName("Jetbrains Mono");
	doc.SetFontSize(15);
	history.Push(doc.CreateState());
	cout << "Current : " << doc.GetDocumentProperties() << endl;

	// even more content
	doc.SetContent("Don't forget Leo's Fortune!");
	history.Push(doc.CreateState());
	cout << "Current : " << doc.GetDocumentProperties() << endl;

	// let's test our undo feature
	cout << "Before Undo: " << doc.GetDocumentProperties() << endl;

	doc.RestoreState(history.Pop());
	cout << "After One Undo: " << doc.GetDocumentProperties() << endl;

	doc.RestoreState(history.Pop());
	cout << "After two times Undo: " << doc.GetDocumentProperties() << endl;

	return 0;
}

LDocs::LDocs() = default;

auto LDocs::GetContent() const -> string { return Content; }

auto LDocs::SetContent(const string& text) -> void { Content = text; }

auto LDocs::GetFontName() const -> string { return FontName; }

auto LDocs::SetFontName(const string& name) -> void { FontName = name; }

auto LDocs::GetFontSize() const -> int { return FontSize; }

auto LDocs::SetFontSize(const int& size) -> void { FontSize = size; }

auto LDocs::GetDocumentProperties() const -> string
{
	return "Document { content = " + Content +
		" fontName = " + FontName +
		" fontSize = " + std::to_string(FontSize) + " }";
}

auto LDocs::CreateState() const -> LDocsState { return LDocsState(Content, FontName, FontSize); }

auto LDocs::RestoreState(const LDocsState& state) -> void
{
	Content = state.GetContent();
	FontName = state.GetFontName();
	FontSize = state.GetFontSize();
}


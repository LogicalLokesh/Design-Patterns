//
// Momento Pattern Solved Example
// Author - Lokesh Wankhede (github.com/LogicalLokesh)
//

#pragma once

#include <vector>

#include "LDocsState.h"

using std::vector;


class LDocsHistory
{
public:
	LDocsHistory() = default;
	auto Pop() -> LDocsState;
	auto Push(const LDocsState& state) -> void;

private:
	vector <LDocsState>States{};
};

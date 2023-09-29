//
// Momento Pattern Solved Example
// Author - Lokesh Wankhede (github.com/LogicalLokesh)
//

#include "LDocsHistory.h"
#include <vector>


auto LDocsHistory::Push(const LDocsState& state) -> void
{
	States.push_back(state);
}


auto LDocsHistory::Pop() -> LDocsState
{
	States.pop_back();
	return States[States.size() - 1];
}

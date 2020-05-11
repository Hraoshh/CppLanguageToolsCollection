#include "ClassTool.h"
#include <iostream>
ClassTool::ClassTool(const int& a_in, const int& b_in)
	:
	a(a_in),
	b(b_in)
{
}

void ClassTool::coutFunc()
{
	std::cout << a << b << std::endl;
}



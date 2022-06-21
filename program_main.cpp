#pragma once

#include <string>
#include <vector>
#include "Program.h"

int main(int argc, char **argv)
{
	std::vector<std::wstring> args(argv + 1, argv + argc);
	VUV_Projekti::Program::Main(args);
}


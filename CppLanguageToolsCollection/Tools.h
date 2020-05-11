#pragma once
#include <string> 
#include "ClassTool.h"

class LanguageTools {
public:
	enum class EnumTool { 
		StateOne,
		StateTwo,
		StateThree
	};
public:
	LanguageTools();
public:
	void fooTool(const int argTool)const;

	int returnTool();

	bool branchingToolIf(const int& constPointerTool);
	bool branchingToolSwitchCase(const EnumTool& a);

	void cycleToolFor(const int& size);
	void cycleToolForArray();
	void cycleToolWhile(bool conditioon);
	void cycleToolDoWhile(bool condition);


	
private:
	static constexpr int constVariableTool = 1337;
	int variableTool;
	float fVar = 6.0f;
	double dVar = 6.0;

	int arrayTool[3] = { 7 };

	char charVariableTool = '7';
	char charArrayTool[99];
	std::string stringVariableTool = "Char Array";

	ClassTool objectTool;

};
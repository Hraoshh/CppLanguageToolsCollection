#include "Tools.h"
#include <iostream>
LanguageTools::LanguageTools()
    :
    objectTool(16, 42)
{
}

void LanguageTools::fooTool(const int argTool) const
{
   std::cout << argTool << std::endl;
}

int LanguageTools::returnTool()
{
    return variableTool;
}

bool LanguageTools::branchingToolIf(const int& constPointerTool)
{
    if (constPointerTool > 6) {
        std::cout << ">" << std::endl;

    }
    else if (constPointerTool < 6) {
        std::cout << "<" << std::endl;
    }
    else {
        std::cout << "=" << std::endl;
        return true;
    }
    return false;
}

bool LanguageTools::branchingToolSwitchCase(const EnumTool& a)
{
    switch (a) {
    case EnumTool::StateOne:
        std::cout << "State One" << std::endl;
        break;
    case EnumTool::StateTwo:
    {   std::cout << "State Two" << std::endl;
        std::string OpredelenieVariable = "ssssss";
        break;
    }
    case EnumTool::StateThree:
        std::cout << "State Three" << std::endl;
    default:
        std::cout << "Default Case" << std::endl;
        return true;
    }
    return false;
}

void LanguageTools::cycleToolFor(const int& size)
{
    for (int i = 0; i < size; ++i) {
        std::cout << i <<std::endl;
    }
}

void LanguageTools::cycleToolForArray()
{
    for (char& c : charArrayTool) {
        c = 't';
    }
    for (const char& c : charArrayTool) {
        std::cout << c;
    }
}

void LanguageTools::cycleToolWhile(bool condition)
{
    int j = 10;
        while (condition) {
            std::cout << j << std::endl;
            j += 1;
            if (j == 20)condition = false;
        };
}

void LanguageTools::cycleToolDoWhile(bool condition)
{
    int j = 10;
    do {
        std::cout << j << std::endl;
        j += 1;
        if (j == 20)condition = false;
    } while (condition);
       

}



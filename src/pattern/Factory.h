#pragma once

#include <iostream>
#include<string>
#include<cstring>

#include "Classes/Command.h"

using namespace std;

class Factory {
private:
    string inputCommandStr;
    Command* command;
    Factory* nextCommand = nullptr;
public:
    Factory();
    ~Factory();
    Factory(Command* inputCommandObj);
    void appendCommand(Command* inputCommand);
    Command* getCommand(const string inputCommandStr);
    void freeCommands();

};
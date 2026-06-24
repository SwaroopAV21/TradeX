#pragma once


#include<iostream>
#include<string>

#include "Command.h"

using namespace std;

class HelpCommand : public Command {
private:
    string helpCommand;
public:
    HelpCommand();
    void run();
};
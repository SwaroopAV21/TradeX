#pragma once

#include <iostream>
#include <string>

#include "Command.h"

using namespace std;

class ExitCommand : public Command {
private:
    string exitCommand;
public:
    ExitCommand();
    void run();
};
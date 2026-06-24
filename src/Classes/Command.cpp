

#include "Command.h"
#include <cstring>


bool Command::isCommand(const string inputCommand){
    return (_stricmp(inputCommand.c_str(), this->command.c_str()) == 0);
}

void Command::setCommand(const string& inputCommand){
    this->command = inputCommand;
}
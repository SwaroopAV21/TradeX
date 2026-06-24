

#include "Command.h"
#include <cstring>


bool Command::isCommand(const string inputCommand){
    return iequals(inputCommand.c_str(), this->command.c_str());
}

bool Command::iequals(const string& a, const string& b){
    for (size_t i = 0; i < a.size(); ++i) {
        if (tolower((unsigned char)a[i]) != tolower((unsigned char)b[i])) {
            return false;
        }
    }
    return true;
}

void Command::setCommand(const string& inputCommand){
    this->command = inputCommand;
}
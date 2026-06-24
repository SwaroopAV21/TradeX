

#include <cstring>

#include "HelpCommand.h"

HelpCommand::HelpCommand(){
    this->setCommand("help");
}

void HelpCommand::run(){
    cout << "Use exit to go out.. <--" << endl;
}
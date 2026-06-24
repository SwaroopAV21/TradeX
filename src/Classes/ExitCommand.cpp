
#include <cstring>

#include "ExitCommand.h"


ExitCommand::ExitCommand(){
    this->setCommand("exit");
}
void ExitCommand::run(){
    exit(0);
}

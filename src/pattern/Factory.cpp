

#include "Factory.h"

Factory::Factory(){
}

Factory::~Factory(){
    freeCommands();
}
Factory::Factory(Command* inputCommandObj){
    this->command = inputCommandObj;
}

Command* Factory::getCommand(const string inputCommandStr){
    if(this->command->isCommand(inputCommandStr)){
        return this->command;
    } else if(this->nextCommand->command->isCommand(inputCommandStr)){
        return getCommand(inputCommandStr);
    }

    return nullptr;
}

void Factory::appendCommand(Command* inputCommand){
    if(this->command != nullptr){
        this->command = inputCommand;
    } else if (this->nextCommand->command != nullptr){
        appendCommand(inputCommand);
    }
}

void Factory::freeCommands(){
    if(this->command != nullptr){
        delete this->command;
        this->command = nullptr;
    } 
    if (this->nextCommand != nullptr) {
        this->nextCommand->freeCommands();
        delete this->nextCommand;
        this->nextCommand = nullptr;
    }
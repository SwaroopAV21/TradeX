

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
    } 
    if (this->nextCommand != nullptr) {
        return this->nextCommand->getCommand(inputCommandStr);
    }

    return nullptr;
}

void Factory::appendCommand(Command* inputCommand){
    if(this->command == nullptr){
        this->command = inputCommand;
        return;
    } 
    if (this->nextCommand == nullptr) {
        this->nextCommand = new Factory(inputCommand);
        return;
    }

    this->nextCommand->appendCommand(inputCommand);
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
}
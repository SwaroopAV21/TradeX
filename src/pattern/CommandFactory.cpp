
#include "CommandFactory.h"
#include "Classes/ExitCommand.h"
#include "Classes/HelpCommand.h"


CommandFactory::CommandFactory(){
    factory = new Factory(new ExitCommand());
    factory->appendCommand(new HelpCommand());
}

CommandFactory::~CommandFactory(){
    
}

Command* CommandFactory::getCommand(const string inputCommandStr){
    Command* command = nullptr;
    command = factory->getCommand(inputCommandStr);
    if(command != nullptr){
        return command;
    } else {
        return nullptr;
    }
    
}

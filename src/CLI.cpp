
#include "CLI.h"

using namespace std;

CLI::CLI(){

}

void CLI::run(){
    CommandFactory* commandFactory = new CommandFactory();
    while (true)
    {
        cout << "--> ";
        getline(cin, inputCMD);
        Command* command =  commandFactory->getCommand(inputCMD);
        if(command != nullptr){
            command->run();
        } else {
            cout << "Command not supported" << endl;
        }

    }
    
}


#include <string>
#include "Classes/Command.h"
#include "Factory.h"

using namespace std;

class CommandFactory
{
private:
    string inputCommand;
    Factory* factory;
public:
    CommandFactory();
    ~CommandFactory();

    Command* getCommand(const string inputCommandStr);
};

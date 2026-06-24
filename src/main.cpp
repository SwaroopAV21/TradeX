#include <iostream>

#include "CLI.h"

using namespace std;


int main(){
    cout << "=======================================================================" << endl;
    cout << "TradeX v1.0" << endl;
    cout << "This is a prototype for practice, hope to re-design it soon...." << endl;
    cout << "=======================================================================" << endl;

    CLI cli;
    cli.run();
    
    return 0;
}
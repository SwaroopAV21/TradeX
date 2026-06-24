#pragma once

#include<iostream>
#include<string>
#include<cstring>

#include "pattern/CommandFactory.h"
#include "Classes/Command.h"

class CLI {
private:
    string inputCMD;
public:
    CLI();
    void run();
};


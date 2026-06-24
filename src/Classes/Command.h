#pragma once

#include<iostream>
#include<string>

using namespace std;

class Command {
private:
    string command;
public:
    virtual void run() = 0;

    void setCommand(const string& inputCommand);
    bool iequals(const std::string &a, const std::string &b);
    bool isCommand(const string inputCommand);
};
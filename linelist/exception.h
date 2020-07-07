#pragma once
#include<string>
#include<iostream>

using namespace std;
class illegalParameterValue
{
public:
    illegalParameterValue(string value = "the illegalParameterValue")
    {
        message = value;
    }
    void outputmessage(){cout << message << endl;}
private:
    string message;
};

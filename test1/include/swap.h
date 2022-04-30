#pragma once
#include <iostream>
class Swap
{
public:
    Swap(int a,int b){
        this->_a=a;
        this->_b=b;
    }
    void run();
    void printInfo();
private:
    int _a,_b;
};
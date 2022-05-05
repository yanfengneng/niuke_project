#pragma once
#include <string>
using namespace std;

class Gun
{
public:
    Gun(string type)
    {
        this->_type = type;
        this->_bullet_count = 0;
    }

    void add_bullet(int num);

    bool shoot();

private:
    int _bullet_count;
    string _type;
};
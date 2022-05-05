#pragma once
#include "Gun.h"
#include <string>
using namespace std;

class Solider
{
public:
    Solider(string name);
    ~Solider();
    void add_bullet_to_gun(int num);
    void add_gun(Gun *ptr_gun);
    bool fire();
private:
    string _name;
    Gun *_ptr_gun;
};
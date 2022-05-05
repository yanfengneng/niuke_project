#include "Gun.h"
#include <iostream>
using namespace std;

void Gun::add_bullet(int num)
{
    this->_bullet_count += num;
}

bool Gun::shoot()
{
    if (this - _bullet_count <= 0)
    {
        cout << "here is no bullet!" << endl;
        return false;
    }
    this->_bullet_count--;
    cout<<"shoot successfully!"<<endl;
    return true;
}
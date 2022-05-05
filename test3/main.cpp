#include "Gun.h"
#include "Solider.h"
#include <iostream>
using namespace std;

void test()
{
    Solider xsd("xusanduo");
    xsd.add_gun(new Gun("AK47"));
    xsd.add_bullet_to_gun(20);
    xsd.fire();
}

int main()
{
    test();
    return 0;
}
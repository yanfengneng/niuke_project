#include "swap.h"
using namespace std;
int main()
{
    Swap myswap(10,20);
    cout<<"before swap:"<<endl;
    myswap.printInfo();
    myswap.run();
    cout<<"after swap:"<<endl;
    myswap.printInfo();
    return 0;
}
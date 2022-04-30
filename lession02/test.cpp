#include <iostream>
using namespace std;

int sum(int n)
{
    long long s = 0;
    for (int i = 0; i < n; ++i)
        s += i;
    return s;
}

int main()
{
    printf("hello world!\n");
    cout << sum(100) << endl;
    return 0;
}
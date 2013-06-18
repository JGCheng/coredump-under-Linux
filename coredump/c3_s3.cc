#include <iostream>

using namespace std;

int func()
{
    int a = 0x12345678;

    int *p = &a;

    return *p;
}

int main()
{
    int b = 0x87654321;

    return b + func();
}


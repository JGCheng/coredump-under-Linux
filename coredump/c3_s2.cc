#include <iostream>

using namespace std;

void FuncA()
{
}

void FuncB()
{
    FuncA();
}

int main()
{
    FuncB();
    return 0;
}

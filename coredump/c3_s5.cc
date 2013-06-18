// g++ -g -o c3_s5 -fomit-frame-pointer c3_s5.cc

#include <iostream>
using namespace std;

int func(int num)
{
    int result = num * num ;
    result += num - 1;
    return result;
}

void test(int beg, int end)
{
    int a[10];

    for (int i = 0; i < 10; i++)
    {
        a[i] = beg + func( i ) + end;
    }
}

int main( )
{
    test(5, 100);
    return 0;
}

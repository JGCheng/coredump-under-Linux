#include <iostream>

using namespace std;

int add(int a, int b, int c, int d)
{
    return a + b + c + d;
}

__attribute__( (regparm(1)) ) int addOne(int a, int b, int c, int d)
{
    return a + b + c + d;
}

__attribute__( (regparm(2)) ) int addTwo(int a, int b, int c, int d)
{
    return a + b + c + d;
}

__attribute__( (regparm(3)) ) int addThree(int a, int b, int c, int d)
{
    return a + b + c + d;
}

int main ( )
{
    int sum = 0;
    sum += add(1, 2, 3, 4);
    sum += addOne(1, 2, 3, 4);
    sum += addTwo(1, 2, 3, 4);
    sum += addThree(1, 2, 3, 4);

    return sum;
}

#include <iostream>

using namespace std;

int func(int c, char *s , int off)
{
    int a = 0x12345678;
    int *p = &a;

    int res = c + *(s + off);

    return *p + res;

}
int main()
{
    int b = 0x87654321;

    return b + func(0x100, "hello", 3);
}

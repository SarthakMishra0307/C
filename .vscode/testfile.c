#include <stdio.h>
void func()
{
    extern var;
    ++var;
    printf("%i",var);
}
void main()
{
    func();
    func();
    func();
}
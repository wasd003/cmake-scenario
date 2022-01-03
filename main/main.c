#include <static_lib.h>
#include <static_sub/static_sub.h>
#include <stdio.h>

int main() 
{
    printf("%d\n", public_static_func(1, 2));
    printf("%d\n", public_static_func2());
    return 0;
}
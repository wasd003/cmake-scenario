#include <dynamic_lib.h>
#include <stdio.h>

void public_dynamic_func()
{
    printf("this is %s\n", __func__);
}
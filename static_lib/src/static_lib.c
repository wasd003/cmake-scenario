#include <static_lib.h>
#include "private.h"
#include <stdio.h>   

int public_static_func(int a, int b) 
{
	return a + b;
}

void private_static_func()
{
	printf("this is a private func, it shouldn't be accessed outside static_lib\n");
}
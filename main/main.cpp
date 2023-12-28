#include <cstdio>
#include <iostream>
#include <unistd.h>
#include <gperftools/profiler.h>
using namespace std;
void func1() {
	int i = 0;
	while (i < 1000) {
		++i;
	}   
}

void func2() {
	int i = 0;
	while (i < 200000) {
		++i;
	}   
}

void func3() {
	for (int i = 0; i < 1000; ++i) {
        func2();
	}   
}

int main(){
    ProfilerStart("test_capture.prof");
	while(1) {
		func3();
        break;
	}
    ProfilerStop();
	return 0;
}

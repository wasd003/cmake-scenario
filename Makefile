.PHONY: build run gdb

build:
	cmake -B build
	cmake --build build

clean:
	rm -rf build

run: clean build
	./build/main/main

gdb: build
	gdb ./build/main/main

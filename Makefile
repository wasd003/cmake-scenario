.PHONY: build run install gdb

build: clean
	cmake -B build
	cmake --build build

clean:
	rm -rf build

run: build
	./build/main/main

install: build
	cd build; sudo make install

gdb: build
	gdb ./build/main/main

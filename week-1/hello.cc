// Exercise 1

// Construct a program printing the text 'Hello World' and show understanding
// of how this program is compiled and linked.

#include <iostream>			// access library for later use

int main()				// initialize program
{
    std::cout << "Hello World\n";	// display characters
}

/* 
Typing 'g++ hello.cc' into the terminal will compile and link the program.

Furthermore, typing 'g++ -c hello.cc' will compile the program, creating 
the separate object file hello.o. This is the file that is created from the
C++ source file (hello.cc) and the C++ header files (iostream) that
hello.cc uses. The C++ linker then produces the executable program from the 
C++ object file.

Lastly, typing 'g++ -o hello hello.cc' will compile and link the program, creating the executable program 'hello'. This program can then be run by typing './hello' in the terminal, similar to how you would otherwise type 
'./a.out' in the terminal if you want to execute a program created by typing 
'g++ hello.cc' in the terminal.

Typing './hello > out' or './a.out > out' will create a file with the program's
output: "Hello World".

Sizes of files:
- source file hello.cc					1300 bytes
- object file hello.o					2592 bytes
- executable program (stripped first) hello		6120 bytes
- iostream						2695 bytes
*/

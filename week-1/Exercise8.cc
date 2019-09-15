// Exercise 8
// Learn how to edit bits within an existing variable using bitwise operations.

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    size_t value = stoul(argv[1], 0, 16);	// initialize hexadecimal value
    size_t nibble = stoul(argv[2]);		// nibble to replace
    size_t replacement = stoul(argv[3]) % 16;	// new nibble (= 0 .. 15)

    value &= ~(0xF << (nibble * 4));		// bit-mask to clear nibble from value
    value |= replacement << (nibble * 4);	// insert new nibble in cleared position

    cout << hex << value << '\n';		// show the new value
}

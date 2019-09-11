#include <iostream>
using namespace std;

string text = "^\\s+Encryption key:(\\w+)\n^\\s+Quality=(\\d+)\n^\\s+E?SSID:\"([[:print:]]+)\"\n^\\s+ssid=\"([[:print:]]+)\"\n";	// define text	

int main() 						// initialize program
{
    cout << text;					// display text
}

/* 
I don't understand why I shouldn't be able to use the R"(...)" form of the RSLs. Evidently, the output then is very messy, but it is still a working C++ program. And even if the output being messy is an issue, I could simply replace '\n' by an actual new line in the RSLs and then it would give me the exact same output as the 'normal' string, or the code which was provided in the exercise.

The output this program produces is:
^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"

This output was obtained by using ./a.out > out and then copy pasting the output from the file 'out'. 
*/





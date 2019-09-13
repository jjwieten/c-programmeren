#include <iostream>
using namespace std;

union bit_un			// let union hold one small and one large object
{
    struct bit_st		// declare the larger object
    {
	size_t even : 1;	// assign first bit to 'even' for later use
	size_t seven : 3;	// assign further bits as indicated 	
	size_t fifteen : 4;	
	size_t ten : 5;		
	size_t six : 4;		
	size_t seven2 : 4;
	size_t fifteen2 : 4;
	size_t fifteen3 : 4;
	size_t seven3 : 4;
	size_t zero : 5;
	size_t three : 2;
    } bit_st;
    size_t variable;		// declare the smaller object
};
	
int main()
{
    union bit_un obj;

    obj.bit_st.even = 0;	// first bit = 0 to ensure union holds even value
    obj.bit_st.seven = 7;	// other bits hold (in binary) specified values 
    obj.bit_st.fifteen = 15;
    obj.bit_st.ten = 10;
    obj.bit_st.six = 6;
    obj.bit_st.seven2 = 7;
    obj.bit_st.fifteen2 = 15;
    obj.bit_st.fifteen3 = 15;
    obj.bit_st.seven3 = 7;
    obj.bit_st.zero = 0;
    obj.bit_st.three = 3;

    cout << hex << obj.variable << '\n';   // through union display bit_st as size_t 						   // variable in hexadecimal values
}
    


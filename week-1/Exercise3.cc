// Exercise 3

// Learn to recognize standard C++ elements and determine their validity.

/*
1. This is a compileable C++ program, however, the program does not do anything. It is 
hence a valid program, but useless.

2. The char *envp[] is not recognized by C++. This argument is valid in Microsoft C and 
GNU GCC. Even though the program still compiles, it is not good practice. In C++ the main 
function either has no argument (or void), or has int argc and char *argv[] as its arguments.  

3. This is not a valid C++ program, since main is of type int, it needs to return a value of 
type int. If we use a return statement, this means that inside this statement there must be 
a value of type int. We can also choose to not use a return statement, so that main will by 
default implicitly return 0.

4. This snippet of code is true, since character literals, such as 'c', are of type char in 
C++ and 1 byte in size. 

5. This snippet of code is true. *argv[] runs from 0 up to argc - 1. So argv[argc] == 0 is 
true.

6. A program ends normally in C++ after the main function returns. Terminating a program in 
C++ by using exit(0) somewhere in its main function will therefore not end the program 
normally and is therefore not good practice.

7. From the Annotations: "The keyword typedef is still used in C++, but it is not requried 
anymore when defining union, struct or enum defintions." So this statement is true, defining 
an enum called Name can be done by writing 'typedef enum Name', however this is completely 
unnecessary so one is better of simply writing 'enum Name'.

8. This is true. The [] operator is evalulated from left to right.
*/




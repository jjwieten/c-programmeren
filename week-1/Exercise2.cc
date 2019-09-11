// Exercise 2

/*
Answer questions to test knowledge of the C++ program construction process.

- A declaration introduces an identifier, such as a function, and describes it; it is what the compiler needs to accept references to this identifier. A definition implements this identifier; it is what the linker needs in order to link references to entities.

- Header files contain definitions which can be imported by using the #include statement.

- When the compiler creates a program it will first, in the compilation phase, read the source and its header files to create an object file, which includes the functionality of the header file. Then, during the linking phase, the linker will call upon a library, or multiple libraries, to implement this functionality through the object files contained within the library, and then link both your object file and the object files of the library to create an executable.

- Yes. Since a library contains many small object files, it is an object module.

- Because the object module obtained after compiling a source has not yet been linked with the object files contained within the library that is used to implement the functionality of the headers referenced in the code. Only when these object modules are linked can an executable program be created.
*/



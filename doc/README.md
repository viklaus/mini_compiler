# MILESTONE 3


## Command to run the Parser : -

./driver.sh -input ../tests/test/test_1.java

Above driver script contains the command to run lexer, parser.
This driver has all the basic command line verbose which we needed to handle, like input, ouput, help.

## Important files in src

It has a src directory containing all the implementation files.
    i)  3ac.cpp for three address code.
    ii) typecheck.cpp for all function related to type error and type checking.
    iii) symTable.cpp which contains all the symbol table related functionalities. 

It has a test directory which contains all the 10 test cases. 

It also has a doc directory which contains this readme file.

## main functionalities of the MILESTONE 3

The compiler dumps a 3AC file (similar to the one generated in milestone 2) but with added functionalities required to manipulate runtime stack. 

### Instructions added
1. push - used to push base pointer (BP) onto the stack before function call
2. pop - Used to pop the base pointer (BP) from the stack before returning from the function call
3. param - Used to add parameters just before function calls
4. CALL - Used to call a function already defined

When calling a function we store the base pointer of the caller, function arguments of the callee onto the stack.
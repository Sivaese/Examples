### Linux Topics ###

12-06-24
1. Basics

13-06-24
2. GNU Tool chain
    --> GNU C compiler
    --> GNU Debugger - Not yet completed
    --> GNU Makefile
        --> How pass arguments like clean and install as a parameters to Makefile
        --> How to use environment variables in Makefile
        --> How to build multiple makefiles
        --> How to give user defined name to the makefile
    --> GNU Binutils (Binary Utilities)
    --> GNU build system - Not yet completed

14-06-24
3. Shell scripting
    --> What is shell ?
    --> Shell environment variables
    --> Importance of ~/.basrc
    --> Importance of path environment variables
    --> Shell program command line arguments
    --> Shell control statements

4. Library and Linker
---> How to create user defined Library
    1. Static
        Step 1: Implementation of source code
            example: add.c sub.c
        Step 2: Compile source code up to object file (up to assembler)
            example: $gcc -c add.c sub.C
        Step 3: Use UNIX archive tools create library image
            example: $ ar -rcs libcalc.a add.o sub.o

    2. Dynamic
        Step 1: Implementation of source code
            example: add.c sub.c
        Step 2: Compile source code to create POSITION INDEPENDENT relocatable
            example: $gcc -c -fpic add.c 
                     $gcc -c -fpic sub.C
        Step 3: 
            example: $gcc -shared -o libcalc.so add.o sub.o

    3. How to infrom the user defined library to linker
        1. User defined library path "-L"
        2. user defined library name "-l<lib_name>"
            example: $gcc main.o -L /home/km/gcc/lib/ -lcalc

    4. Making the library availble at runtime
        LD_LIBRARY_PATH=<path>
            example: $export LD_LIBRARY_PATH=/home/km/gcc/lib/

    NOTE: 
    Foe Dynamic linking:
        Point 3 and 4 is applicable only for the Dynamic library

    For static linking:
        There is no library path, name.
        example: $gcc main.o lib/libcalc.a

16-06-24
GNU Build System
    --> .Config file info

17-06-24
Advanced Linker Concept
    Three types of symbols
    1. Global
        --> Golbal variables
        --> Global functions
    2. Static
        --> Static variables
        --> Static functions
    3. External
        --> External variables
        --> External functions

24-06-24
Linux System Programming

---> Types of kernels
        1. Monolithic kernel
        2. Micro kernel

---> D/F b/w System Programming and Application Programming
        --> System call info - man 2
        --> Library info - man 3

---> File Management
        --> Hello world application program
        --> Hello world system program
        
    1. Basic file operations
        --> Write() system call
        --> Read() system call

25-06-24
        --> Open() system call
        --> Creat() system call
        --> Close() system call

---> Write a program your own cat command?
---> Write a program your own copy command?

    2. Special file operations


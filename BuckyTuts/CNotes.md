# Programming in C
## Introduction
A computer program is made up of functions. Functions are containers for executable  code (source code).
The C compiler looks out for a function called main whenever a C program is executed. So, in C you can't do without the main function.
If a function does not return what it is designed to, it means that is an error.
Preprocessor commands ie. #include <somecrap> are basically used to tell the compiler to use some libraries that have been written elsewhere that have some very useful functions. This is basically helping us stand on the shoulders of other developers.
Now that you know about functions, did you just notice that like main(), printf() is also a function? Well, now I know! It comes from the <stdio.h> library, I guess.

### Conversion Characters
It is a placeholder for some stuff that is defined outside the string.
%s - string
%d - decimal number, written to the base of 10
%i - intiger
%c - character
%x - hexadecimal number
%f - float, a number that has a decimal place.


\a - makes sounds or alert in computer
\n - newline
\t - tab

### Comments
Comments are notes for you and other developers to read. They're freaking useful.
Remember where you can use single line comments and where you can use multiline comments.

### Datatypes
int, char, string (char[]), double, float
A string is an array of characters.

### Variables
A variable is a placeholder for something else. Just like in algebra.
Variables cannot start with a number or an underscore.
Variables cannot have spaces.
Variables cannot have any other wierd symbols except the underscore.
Variables cannot be named using reserved words.

Define your varibles before using it. You state the kind of data you wanna store in the variable, then the variable name.

### String Terminator
This is for memory management. This is a special symbol that is never seen but is there just to tell the computer where the string ends.
It is good to have this in mind when you wanna know the amount of memory you need for a string.

An array is a list of items of the same data type.
So, a string is a character array.

### Why a character array?
Instead of a datatype for string, why are we using a character array.
It is easy to access individual items in an array using their position.
Any programming language is zero-indexed, anything should start counting from zero.

C array variables need to set memory space the moment they are instantiated.

### Preprocessor Directives
These are included into the program before the source code is compiled to binary files.
They are #include and #define
The #define is used to get constants.
Constants are always written in uppercase, this is a convenction.
No semi-colons at the end of any preprocessor directives.


### Break and continue statements
Break statement simply exits out of the loop.
Continue statement skips or rather ignore all the code that comes after the continue statement. The continue stament does not break out of the loop.

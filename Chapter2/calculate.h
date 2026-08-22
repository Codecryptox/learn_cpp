// Header Files allows us to put a bunch of forward declarations in a single file and then allow us to import wherever necessary.
// Add header Guards inside the header file to prevent mutiple import of same header file via different in single cpp file.
/*
Always include header guards.
Do not define variables and functions in header files (for now).
Give a header file the same name as the source file it’s associated with (e.g. grades.h is paired with grades.cpp).
Each header file should have a specific job, and be as independent as possible. For example, you might put all your declarations related to functionality A in A.h and all your declarations related to functionality B in B.h. That way if you only care about A later, you can just include A.h and not get any of the stuff related to B.
Be mindful of which headers you need to explicitly include for the functionality that you are using in your code files, to avoid inadvertent transitive includes.
A header file should #include any other headers containing functionality it needs. Such a header should compile successfully when #included into a .cpp file by itself.
Only #include what you need (don’t include everything just because you can).
Do not #include .cpp files.
Prefer putting documentation on what something does or how to use it in the header. It’s more likely to be seen there. Documentation describing how something works should remain in the source files.
*/

// Header guards are conditional compilation directives that prevent the content of header file being copied mutiple times in a single compiled file.
// #pragma once also serves the same purpose as the header guards but it is not a part of C++ standard and is not supported by all compilers. So it is better to use header guards instead of #pragma once.
#ifndef CALCULATE_H
#define CALCULATE_H

int add (int x, int y); 
int subtract (int a, int b);
int multiply (int c, int d);
int divide (int e, int f);

#endif


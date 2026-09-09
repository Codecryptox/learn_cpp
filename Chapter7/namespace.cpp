// A compound statement (also called a block, or block statement) is a group of zero or more statements that is treated by the compiler as if it were a single statement.
// When blocks are nested, the enclosing block is typically called the outer block and the enclosed block is called the inner block or nested block.

// The nesting level (also called the nesting depth) of a function is the maximum number of nested blocks you can be inside at any point in the function.
// Keep the nesting level of your functions to 3 or less. If your function has a need for more nested levels, consider refactoring your function into sub-functions.


#include <iostream>

namespace Foo     // Defined a namespace named foo
{    // doSomething inside foo ()
    int doSomething (int x, int y){

        return x + y;
    }
}

namespace Goo  // Defined a namespace named Goo
{   // doSomething inside Goo ()
    int doSomething (int x, int y){

        return x - y;
    }
}
 

// Namespaces can be nested inside each other
/*
#include <iostream>

namespace Foo
{
    namespace Goo // Goo is a namespace inside the Foo namespace
    {
        int add(int x, int y)
        {
            return x + y;
        }
    }
}


since c++ 17 this can also be writtenm as this :

namespace Foo::Goo // Goo is a namespace inside the Foo namespace (C++17 style)
{
    int add(int x, int y)
    {
        return x + y;
    }
}

int main()
{
    std::cout << Foo::Goo::add(1, 2) << '\n';
    return 0;
}

*/

// Use of empty scope resolution operator  like if we define a funnction in global namespace and we want to use that function inside a namespace which contain a same function we can use empty scope  ::
/*
#include <iostream>

void print() // this print() lives in the global namespace
{
	std::cout << " there\n";
}

namespace Foo
{
	void print() // this print() lives in the Foo namespace
	{
		std::cout << "Hello";
	}

	void printHelloThere()
	{
		print();   // calls print() in Foo namespace
		::print(); // calls print() in global namespace
	}
}

int main()
{
	Foo::printHelloThere();

	return 0;
}



// Namespace Aliases because typing the name of namespace if they are nested everywhere becomes a problem we can create another name
#include <iostream>

namespace Foo::Goo
{
    int add(int x, int y)
    {
        return x + y;
    }
}

int main()
{
    namespace Active = Foo::Goo; // active now refers to Foo::Goo

    std::cout << Active::add(1, 2) << '\n'; // This is really Foo::Goo::add()

    return 0;
} // The Active alias ends here



// Forward declaration of content in namespaces
add.h

#ifndef ADD_H
#define ADD_H

namespace BasicMath
{
    // function add() is part of namespace BasicMath
    int add(int x, int y);
}

#endif
add.cpp

#include "add.h"

namespace BasicMath
{
    // define the function add() inside namespace BasicMath
    int add(int x, int y)
    {
        return x + y;
    }
}
main.cpp

#include "add.h" // for BasicMath::add()

#include <iostream>

int main()
{
    std::cout << BasicMath::add(4, 3) << '\n';

    return 0;
}

*/

int main(){

    std::cout << Foo::doSomething(4,3) << '\n';   // Use scope resolution operator to access the function inside the namespace
    std::cout << Goo::doSomething(2,3) << '\n';   // if we keep the scope empty it considers the global namespace.
}



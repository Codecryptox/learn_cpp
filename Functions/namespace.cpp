// if two identical identifiers are used in the same program such that 
// the compiler and linker cannot tell them apart then we have a naming collision.

// for example if we have two functions foo () in file a and file b then if we compile them separately they compile but the linker throws the error
// as already defined function foo () is present in file a and file b. So the linker cannot tell which function to use.

// In C++, any name that is not defined inside a class, function, or a namespace is considered to be part of an implicitly-defined namespace called the global namespace (sometimes also called the global scope).


// A Namespace is a declarative scope region that allows you to define the identifiers like variable, functions, classes etc in named scope that is different from other scopes.
// :: Scope resolution operator is used to access the identifier inside a namespace for e.g it tells to fetch the cout fn inside the std namespace.

// The C++ Standard Library contains thousand of names like string, cout, cin, vector, map, math etc. To prevent naming conflict with names created by the programmers 
// the standard library puts them inside a namespace called std. So to access the names inside the std namespace we use the scope resolution operator ::

// The main reason why we do not use the using namespace std; directive is to prevent the naming collision.
#include <iostream>

namespace A{
    void print(){
        std::cout << "This is Namespace A" << '\n';
    }
}

namespace B{
    void print(){
        std::cout << "This is Namespace B" << '\n';
    }
}


int main(){

    A::print();
    B::print();
    return 0;
}
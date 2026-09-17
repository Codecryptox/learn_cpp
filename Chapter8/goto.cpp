// In Cpp unconditional jumps are implemented via goto statements , the jump here is redirected to a statement label.
// Stament label use function scope menas they are visible even before the point of declaration within that specific function only.
#include <iostream>
#include <math.h>

void printcats(bool skip){

    if (skip)
        goto end;
    std::cout << "cats \n";

    end:
     ;
}
int main(){

    double x{};
tryagain:   // This is a statement label
    std::cout << "Enter a Non negative no : \n";
    std::cin >> x;

    if(x < 0.0){
        goto tryagain; // This is a goto statement
    }

    std::cout << "Square root of " << x << " is " << std::sqrt(x)<<'\n';

    printcats(true); // this print nothing 
    printcats(false); // this print cats

    // Avoid using goto due to generation of spaghetti code logic where we do not understand the control flow of the code.
    return 0;
    
}


// The only case where goto can be used is to exit from nested loop when we do not want to exit the function
/*
#include <iostream>

int main()
{
    for (int i = 1; i < 5; ++i)
    {
        for (int j = 1; j < 5; ++j)
        {
            std::cout << i << " * " << j << " is " << i*j << '\n';

            // If the product is divisible by 9, jump to the "end" label
            if (i*j % 9 == 0)
            {
                std::cout << "Found product divisible by 9.  Ending early.\n";
                goto end;
            }
        }

        std::cout << "Incrementing the first factor.\n";
    }

end:
    std::cout << "And we're done." << '\n';

    return 0;
}
*/


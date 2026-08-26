#include <iostream>
#include <iomanip> // for std::setw which sets the width of the output field and for std::setprecision to set 
#include <climits> // For CHAR_BIT
#include <cstdint> // for fixed width int
#include <cstddef> // for std::size_t
// Void is used to define a function that does not return any value 
// Use an empty parameter list instead of void to indicate that a function has no parameters.


void printHello(){
    std::cout << "Hello!" << std::endl;
}

// Memory on Modern machine is stored in byte sized address
// if a single bit can hold 2 values 0 or 1 then a byte can hold 2^8 = 256 values. Similarly n bits can hold 2^n values.

// Sizeof() operator is unary operator that returns the size of the variable or data type in bytes.

// An integer is integral typr that can hold positive, negative and zero values.

/* Type                 Size in bits
   
   int                     16 (2 bytes)
   short int               16 (2 bytes)
   long int                32 (4 bytes)
   longlong int            64 (8 bytes)

*/

// The attribute of a number being positive negative or zero is called it sign.
// By default number in cpp are signed. Signed numbers can hold both positive and negative values. Unsigned numbers can only hold positive values and zero.

// Range : specific set of the  values the data type can hold 

/* Signed Integer Range
Size / Type	        Range
8-bit signed	-128 to 127
16-bit signed	-32,768 to 32,767
32-bit signed	-2,147,483,648 to 2,147,483,647
64-bit signed	-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

the mathemtaical formulae to caluclate this is (-2^(n-1) to 2^(n-1)-1) where n is the number of bits.
*/

/* Unsigned Integer Range
Size/Type	     Range
8 bit unsigned	 0 to 255
16 bit unsigned	 0 to 65,535
32 bit unsigned	 0 to 4,294,967,295
64 bit unsigned	 0 to 18,446,744,073,709,551,615

Formula to calculate this is (0 to 2^n - 1) where n is the number of bits.
*/

// Problem the size of int is different for different architecture for some it may be 16 bits and for some it may be 32 bits.
// To avoid this problem we use fized size integer types that have same size accross all architecture.
// e.g std::int8_t, std::int16_t, std::int32_t, std::uint8_t, std::uint16_t, std::uint32_t etc

/*
Name	          Fixed Size	     Fixed Range	                          Notes
std::int8_t	    1 byte signed	     -128 to 127	            Treated like a signed char on many systems. See note below.
std::uint8_t	1 byte unsigned	      0 to 255	                Treated like an unsigned char on many systems. See note below.
std::int16_t	2 byte signed	     -32,768 to 32,767	
std::uint16_t	2 byte unsigned	      0 to 65,535	
std::int32_t	4 byte signed	     -2,147,483,648 to 2,147,483,647	
std::uint32_t	4 byte unsigned	      0 to 4,294,967,295	
std::int64_t	8 byte signed	     -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807	
std::uint64_t	8 byte unsigned	      0 to 18,446,744,073,709,551,615
*/

// std::int8_t and std::uint8_t typically behave like char
// two types of fixed sized integer type fast and least type
// std::int_fast32_t will give you the fastest integer that is atleast 32 bits
// std::int_least32_t will give you the smallest integer that is atleast 32 bits

// The sizeof() returns a value of type std::size_t.


// C++ has three standard types for floating point numbers : 1.float, 2. double, 3. long double
/*
Category	        C++ Type	    Typical Size
floating point	    float               4 bytes
double	                                8 bytes
long double	                        8, 12, or 16 bytes
*/

// float is almost always implemented using the 4-byte IEEE 754 single-precision format.
// double is almost always implemented using the 8-byte IEEE 754 double-precision format.
//The precision of a floating point type defines how many significant digits it can represent without information loss.


// Boolean Variable can have only two values that is true or false but technioncally a computer can only understand 0 or 1 .

// Charcter Datatype can only hold a single letter value which can be character number or whitespace.
int main(){
    printHello();

    std::cout << "Size of size_t is : "<< sizeof(size_t) << '\n';
    //void name; // Void is a data type that returns nothing. This line of code won't compile beacuse we cannot assing a variable type void.

    /*
    int i;
    short s;
    long l;
    long long ll;
    */

    /*
    unsigned int ui;
    unsigned short us;
    unsigned long ul;
    unsigned long long ll;
    */

    int i {5};
    float f {5.6f};
    double d {5.2};
    short s {123};
    long l{-2379182730282};
    long long ll {-912837021938};

    float precision {1.92384094032f}; // Here float has precsion value of 7 significant digits so only 7 digits will be printed
    // Loss of precision due to not storing the number properly is called rounding error.
    std::cout << "Value of a = " << i << '\n';
    std::cout << "Value of f = " << f << '\n';
    std::cout << "Value of d = " << d << '\n';
    std::cout << "Value of s = " << s << '\n';
    std::cout << "Value of l = " << l << '\n';
    std::cout << "Value of ll = " << ll << '\n';

    std::cout << std::setprecision(9) << '\n';
    std::cout << "Value of precision = " << precision << '\n';

    std::cout << 89.36 << '\n';

    // Inf, which represents infinity. Inf is signed, and can be positive (+Inf) or negative (-Inf).
    //    NaN, which stands for “Not a Number”. 

    double zero {0.0};

    double posinf {5.0/zero};
    std::cout << "Value of Positive Infinity : " << posinf << '\n';

    double neginf {-5.0/zero};
    std::cout << "Value of Negative Infinity : " << neginf << '\n';

    double z1 {zero/posinf};
    std::cout << "Value of Positive Zero : " << z1 << '\n';

    double z2 {zero/neginf};
    std::cout << "Value of Negative Zero : " << z2 << '\n';

    double nan {zero/zero};
    std::cout << "Value of Not a Number : " << nan << '\n';

    unsigned short x{65535};
    // unsigned int y{-2}; // This will cause an overflow since the maximum value of unsigned int is 4294967295. It will wrap around to 4294967294.
    std ::cout << "The value of x is " << x << std::endl;
    // std ::cout << "The value of y is " << y << std::endl;

    x = x + 2; // This will cause an overflow since the maximum value of unsigned short is 65535. It will wrap around to 0.
 
    std::cout << " The value of x after adding 2 is " << x << std::endl;


    std::int8_t a {10};
    std::cout << "Value of a is : " << a <<'\n';
 
    std::cout << "A char is                         " << CHAR_BIT << " bits" << std::endl;
    std::cout << std::setw(10) << "Bool             " << sizeof(bool) << " bytes\n";
    std::cout << std::setw(10) << "Char             " << sizeof(char) << " bytes\n";
    std::cout << std::setw(10) << "Short            " << sizeof(short) << " bytes\n";
    std::cout << std::setw(10) << "Int              " << sizeof(int) << " bytes\n";
    std::cout << std::setw(10) << "Long             " << sizeof(long) << " bytes\n";
    std::cout << std::setw(10) << "Float            " << sizeof(float) << " bytes\n";
    std::cout << std::setw(10) << "Double           " << sizeof(double) << " bytes\n";
    std::cout << std::setw(10) << "Long Double      " << sizeof(long double) << " bytes\n";
    std::cout << std::setw(10) << "WChar_t          " << sizeof(wchar_t) << " bytes\n";  
    
    

    bool b1 {0};
    bool b2 {true}; // this will print 1

    bool x1 {};
    std::cout << " Value of boolaean b1 : " << b1 <<'\n';
    std::cout << " Value of boolaean b2 : " << b2 <<'\n';
    std::cout << " Value of boolaean !b1 : " << !b1 <<'\n';

    std::cout << "Enter boolean value for x : " << '\n';
    std::cin >> x1 ;
    std::cout << "x1 = " << x1;
    

    char ch1 {'y'};
    char ch2 {99}; // it will print the character in corresponse to ASCII value of 99

    std::cout << "Ch1 = "<< ch1 << '\n';
    std::cout << "Ch2 = "<< ch2 << '\n';

    return 0;

}
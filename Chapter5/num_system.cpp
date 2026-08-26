// There are 4 types of number system in cpp
// decimal - base 10, binary - base 2, octal - base 8, hexadecimal - base 16

/*
Decimal         0     1     2     3     4     5     6     7     8     9    10    11    12    13    14    15
Binary          0     1    10    11   100   101   110   111  1000  1001  1010  1011  1100  1101  1110  1111
Octal           0     1     2     3     4     5     6     7    10    11    12    13    14    15    16    17
Hexadecimal     0     1     2     3     4     5     6     7     8     9     A     B     C     D     E     F

Decimal        16    17    18    19    20    21    22    23    24    25    26    27    28    29    30    31
Binary      10000 10001 10010 10011 10100 10101 10110 10111 11000 11001 11010 11011 11100 11101 11110 11111
Octal          20    21    22    23    24    25    26    27    30    31    32    33    34    35    36    37
Hexadecimal    10    11    12    13    14    15    16    17    18    19    1A    1B    1C    1D    1E    1F

*/
#include <iostream>

int main(){

    int a{023}; // 0 before means the number is octal
    int b{0xF}; // 0x is prefix for hex number
    int c{0b1001}; // 0b is prefix for binary

    // By default values are output only in decimal
    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';

    int x{10};
    std::cout << x << '\n';
    std::cout << std::hex << x << '\n'; // output in hex
    std::cout << std::oct << x << '\n'; // output in oct


    return 0;
}
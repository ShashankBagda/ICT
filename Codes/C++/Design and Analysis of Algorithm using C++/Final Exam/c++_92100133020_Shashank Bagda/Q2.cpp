// DAA - Final Exam
// Shashank Bagda - 92100133020
// Question 2

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int input, square, last_digit;
    
    std::cout<<"Enter the number : ";
    std::cin>>input;

    square = input*input;

    std::cout<<"The Square of the number is : "<<square<<std::endl;

    last_digit = square % 10;

    if(input == last_digit)
    {
        std::cout<<input<<" is AutoMorphic Number"<<std::endl;
    }
    else
    {
        std::cout<<input<<" is not AutoMorphic Number"<<std::endl;
    }

    return 0;
}
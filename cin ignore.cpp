//
//  main.cpp
//  cin ignore
//
//  Created by Nelson  on 2/2/2020.
//  Copyright © 2020 Nelson . All rights reserved.
//

/*For this program print for each variable
**print the value of the variable,
**then print the address where it is stored.
*/
#include<iostream>
#include<string>

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    std::string givenString;
    char givenChar;
    std::cout<<"Please enter int";
    std::cin>>givenInt;
    std::cout<<"Please enter float";
    std::cin>>givenFloat;
    std::cout<<"Please enter double";
    std::cin>>givenDouble;
    std::cin.ignore();
    std::cout<<"Please enter string";
    std::getline(std::cin,givenString);
    /*Ignore is exactly what the name implies.

    It doesn't "throw away" something you don't need instead, it ignores the amount of characters you specify when you call it, up to the char you specify as a breakpoint.

    It works with both input and output buffers.

    Essentially, for std::cin statements you use ignore before you do a getline call, because when a user inputs something with std::cin, they hit enter and a '\n' char gets into the cin buffer. Then if you use getline, it gets the newline char instead of the string you want. So you do a std::cin.ignore(1000,'\n') and that should clear the buffer up to the string that you want. (The 1000 is put there to skip over a specific amount of chars before the specified break point, in this case, the \n newline character.)
     
     Technically, if the newline character doesn't get read in, then it isn't reading everything. Input buffers ignore whitespace, so when you are reading in information from std::cin, the newline doesn't matter.. But when youre talking about getline, it gets the entire line up to the newline character, and when the newline char is the first thing the getline function sees, that is all it gets.
     */
    std::cout<<"Please enter char";
   // std::cin.ignore();
    std::cin>>givenChar;
    
    std::cout<<givenInt<<std::endl;
    std::cout<<&givenInt<<std::endl;

     std::cout<<givenFloat<<std::endl;
    std::cout<<&givenFloat<<std::endl;
    
     std::cout<<givenDouble<<std::endl;
    std::cout<<&givenDouble<<std::endl;
    
    std::cout<<givenString<<std::endl;
    std::cout<<&givenString<<std::endl;
    
    std::cout<<givenChar<<std::endl;
    std::cout<<(void *)&givenChar<<std::endl;
    /*
     Why it does not print the address for the char:
    Printing pointers will print the address for the int*and the string* but will not print the contents for char* as there is a special overload in operator<<. If you want the address then use: static_cast<const void *>(&c);
     */
    return 0;
}


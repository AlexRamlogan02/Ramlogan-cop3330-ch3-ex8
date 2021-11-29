/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Alexandra Ramlogan
 *  Chapter 3 Exercise 8
 */

//#include "std_lib_facilities.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int num; //create an int num
    cin >> num; //take in input for num
    if (num%2 != 0) //if the number is mod 2 ==, then it is odd
    {
           cout<< "the value " << num << " is odd\n" ;  
    }
    else{ //else it is even 
        cout<< "the value " << num << " is even\n";
    }

    return 0;
}

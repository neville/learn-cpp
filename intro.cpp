// learn-cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    // Simple addition
    int a, b, c;
    
    cout << "Enter 2 numbers";
    cin >> a >> b;

    c = a + b;

    cout << "Sum is" << c;

    return 0;
}
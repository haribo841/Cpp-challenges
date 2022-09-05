// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 10;
    unsigned char c;
    char d;
    wchar_t d2;
    short int e;
    short e2;
    unsigned int f;
    unsigned long g;
    long h;
    long int h2;
    enum i;
    float j;
    double k;
    long double l;
    bool m;
    /*std::*/cout << "Hello World!\n";
    a += b;
    cout << a /* + b */ << "\n";
    a -= b;
    cout << a /* - b */ << "\n";
    a *= b;
    cout << a /* * b */ << "\n";
    a /= b;
    cout << a /* / b */ << "\n";
    a %= b;
    cout << a /* % b */ << "\n";
    a++;//a+=1
    cout << a /* = a + 1 */ << "\n";
    cout << ++a << "\n";
    a--;//a-=1
    cout << a /* = a - 1 */ << "\n";
    cout << --a << "\n";

    system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum seasons
{
    spring,
    summer,
    autumn = 2137,
    winter
};
int main()
{
    typedef long hint;
    hint a = 5;//reference of type cannot be initialized with a value of type hint
    const int b = 10;//qualifiers dropped in binding reference of type string to initializer of type const int
    unsigned char c;
    char d;
    wchar_t d2;
    short int e;
    short e2;
    unsigned int f;
    unsigned long g;
    long h = 21.37;
    long int h2;
    enum i;
    float j;
    double k;
    long double l;
    bool m;
    seasons n = autumn;//not a season value of type "int" cannot be used to initialize an entity of type "seasons", E0110, E0020, C2332, C2440
    long & h_ref = h;//reference, new name for an existing object
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
    cin >> a;
    cout << "Wartosc a to: " << a << "\n";
    cout << "Wartosc n to: " << n << "\n";
    cout << "Wartosc h to: " << h << "\n";
    cout << "Wartosc h_ref to: " << h_ref << "\n";
    cout << "Rozmiar a to: " << sizeof(a) << "\n";
    cout << "Rozmiar n to: " << sizeof(n) << "\n";
    cout << "Rozmiar h to: " << sizeof(h) << "\n";
    cout << "Rozmiar h_ref to: " << sizeof(h_ref) << "\n";
    cout << "Adres a to: " << &a << "\n";
    cout << "Adres n to: " << &n << "\n";
    cout << "Adres h to: " << &h << "\n";
    cout << "Adres h_ref to: " << &h_ref << "\n";
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

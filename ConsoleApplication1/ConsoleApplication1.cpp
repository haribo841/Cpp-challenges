// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>//including a library that supports the output and input streams
using namespace std;
class Complex
{
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}
    // Method for setting the real part value
    void setReal(double r)
    {
        real = r;
    }
    // Method for setting the value of the imaginary part
    void setImaginary(double i)
    {
        imaginary = i;
    }
    // Method to retrieve the value of the real part
    double getReal() const
    {
        return real;
    }
    // Method to retrieve the value of the imaginary part
    double getImaginary() const
    {
        return imaginary;
    }
    // Overloading the addition operator
    Complex operator+(const Complex& other) const
    {
        return Complex(real + other.real, imaginary + other.imaginary);
    }
    // Overloading the subtraction operator
    Complex operator-(const Complex& other) const
    {
        return Complex(real - other.real, imaginary - other.imaginary);
    }
    // Overloading the multiplication operator
    Complex operator*(const Complex& other) const
    {
        double newReal = real * other.real - imaginary * other.imaginary;
        double newImaginary = real * other.imaginary + imaginary * other.real;
        return Complex(newReal, newImaginary);
    }
    // Display operator overloading
    friend std::ostream& operator<<(std::ostream& os, const Complex& c)
    {
        os << c.real;
        if (c.imaginary >= 0)
        {
            os << " + " << c.imaginary << "i";
        }
        else
        {
            os << " - " << -c.imaginary << "i";
        }
        return os;
    }
private:
    double real;
    double imaginary;
};
class Point
{
    friend void clearId(Point id);
private:
    int xCoordinate;
    int yCoordinate;
    static int id;
public:
    Point(int x, int y)
    {
        this->xCoordinate = x;
        this->yCoordinate = y;
    }
    Point(int x)
    {
        this->xCoordinate = x;
    }
    Point() {}
    void showCoordinates() const
    {
        cout << xCoordinate << endl;
        cout << yCoordinate << endl;
    }
    static void staticMethod()
    {
        cout << "static method was called" << endl;
    }
    void giveId() const
    {
        cout << id++ << endl;
    }
    virtual void objectMethod()
    {
        cout << "Point" << endl;
    }
};
class Abstract : public Point
{
public:
    virtual void objectMethod() = 0;
};
class Derived : public Abstract
{
public:
    Derived(int x, int y) {}// : Point(x, y) {} C++ intermediate non-virtual base class is not allowed
    void objectMethod()
    {
        cout << "Derived" << endl;
    }
protected:
    string protectedString;
};
class DerivedDerived : public Derived
{
public:
    DerivedDerived(int x, int y) : Derived(x, y) {}
    void objectMethod()
    {
        cout << "DerivedDerived" << endl;
    }
    void usingProtected(string z)
    {
        protectedString = z;
    }
};
class MultipleInheritance : public Complex, public Point
{
public:
    MultipleInheritance() {};
};
int Point::id = 1;
int globalVariable;//the order of declarations matters
int* globalPointer = &globalVariable;
enum seasons
{
    spring,
    summer,
    autumn = 2137,
    winter
};
void function(int globalVariable)
{
    cout << globalVariable << "function called" << endl;
}
void function(string space = "\n")
{
    cout << globalVariable << "overloaded function called" << space;
}
void functionWithParameter(char* parameter)
{
    cout << parameter << endl;
}
void displayMatrix(char matrix[3][3])
{
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout << "[" << i << "][" << j << "] values is: " << matrix[i][j] << endl;
        }
    }
}
void valueDoubling(int parameter)
{
    parameter <<= 1;
    cout << "Parameter have value of " << parameter << endl;
}
void valueDoublingRef(int& parameter)
{
    parameter <<= 1;
    cout << "Parameter have value of " << parameter << endl;
}
void clearId(Point id)
{
    cout << id.id * 0 << endl;
}
double twenty(int x)
{
    return 20.20;
}
int twenty()
{
    return 20;
}
int addition(long x, int y)
{
    return x + y;
}
int main()//C++ does not support int by default ConsoleApplication1
{
    typedef long hint;//If its name begins with two underscores (__), a data type is non-standard.
    hint a = 5;//reference of type cannot be initialized with a value of type hint
    const int b = (a == 5) ? 10 : 5;//qualifiers dropped in binding reference of type string to initializer of type const int
    signed b2 = 0;//-2,147,483,648 to 2,147,483,647
    signed int b3 = 0;
    __int32 b4 = 0;
    unsigned char c = 0;//0 to 255
    unsigned __int8 c2 = 0;
    char d;//-128 to 127 by default, 0 to 255 when compiled by using J
    wchar_t d2 = 0;//0 to 65,535, ither a wide-character type or multibyte-character type
    __wchar_t d4 = 0;
    __int8 d3 = 0;
    short int e = 0;//-32,768 to 32,767
    short e2 = 0;
    signed short int e3 = 0;
    __int16 e4 = 0;
    unsigned int f = 0;//0 to 4,294,967,295
    unsigned f2 = 0;
    unsigned __int32 f3 = 0;
    unsigned long g = 0;//0 to 4,294,967,295
    long h = 21.37;//conversion from 'double' to 'long', possible loss of data
    long int h2 = 0;//-2,147,483,648 to 2,147,483,647
    signed long int h3 = 0;
    enum i;
    float j = 0.0;//3.4E +/- 38 (7 digits)
    double k = 0.0;//1.7E +/- 308 (15 digits)
    long double l = 0.0;//Same as double
    bool m = false;//false or true
    seasons n = autumn;//not a season value of type "int" cannot be used to initialize an entity of type "seasons", E0110, E0020, C2332, C2440
    unsigned __int16 o = 0;//0 to 65,535
    unsigned short o2 = 0;
    unsigned short int o3 = 0;
    __int64 p = 0;//-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    long long p2 = 0;//none (but equivalent to __int64), -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    signed long long p3 = 0;
    unsigned __int64 r = 0;//0 to 18, 446, 744, 073, 709, 551, 615
    unsigned long long r2 = 0;//none (but equivalent to unsigned __int64), 0 to 18,446,744,073,709,551,615
    signed char q = 0;//-128 to 127
    long& h_ref = h;//reference, new name for an existing object
    const int primes[]{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71 };//incomplete type is not allowed, an empty initializer is invalid for an array with unspecified bound, cannot allocate an array of constant size 0, 'integers': unknown size
    int zero[1]{ 0 };
    char gosha[] = { "Karr" };
    char matrix[3][3] =
    {
        {'A', 'B', 'C'},
        {'D', 'E', 'F'},
        {'G', 'H', 'I'}
    };
    /*std::*/cout << "Hello World!\n";
    displayMatrix(matrix);
    cout << addition(a, b) /* + b */ << "\n";
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
    cin >> d;
    switch (d) //the expression must have a constant value
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        cout << "You pressed a number: " << d << endl;
        break;
    default:
        cout << "You pressed a non-number key: " << d << endl;
        break;
    }
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
    cout << primes << "\n";
    cout << gosha << "\n";
    const int* v = &primes[0];
    cout << *v << "\n";
    int* w;//value of type "int **" cannot be assigned to an entity of type "int *"
    w = &zero[0];
    cout << primes[0] << "\n";
    cout << *w << "\n";
    *w += 1;
    cout << *w << "\n";
    int z = 10;
    int* const x = &z;
    cout << *x << "\n";//Using uninitialized memory 'w'
    *x = twenty();
    if (!(*x == z))
    {
        cout << "first condition fulfilled" << "\n";
        cout << *x << " is *x value" << "\n";
        cout << z << " is z value" << "\n";
    }
    else if (*x != *w)
        while (z >= 10)
        {
            cout << z << ". second condition fulfilled" << "\n";
            z--;
            break;
        }
    else if ((*x < z) && (*x >= *w))
        do
        {
            cout << "third condition fulfilled" << "\n";
            continue;
            z--;
        } while (z > 10);
    else if ((*x <= *w) || (*x > z))
        cout << "fourth condition fulfilled" << "\n";
    else
        cout << "none of conditions fulfilled" << "\n";
    cout << z << "\n";
    char* y = &gosha[0];
    y = y + z;
    function();//more than one instance of overloaded function "function" matches the argument list
    cout << globalVariable << endl;
    functionWithParameter(y);
    cout << "Variable z have value of " << z << endl;
    valueDoubling(z);
    cout << "Variable b have value of " << z << endl;
    valueDoublingRef(z);
    cout << "Variable b have value of " << z << endl;
    int (*functionPointer) ();
    functionPointer = twenty;
    globalVariable = functionPointer();
    cout << *functionPointer << endl;//address
    cout << functionPointer() << endl;//value
    cout << functionPointer << endl;//address
    cout << globalVariable << endl;//value
    functionPointer = &twenty;
    cout << *functionPointer << endl;//address
    cout << functionPointer() << endl;//value
    cout << functionPointer << endl;//address
    cout << globalVariable << endl;//value
    int (*functionWithParametersPointer) (long, int);
    functionWithParametersPointer = &addition;
    cout << *functionWithParametersPointer << endl;//address
    cout << functionWithParametersPointer(globalVariable, globalVariable) << endl;//value
    cout << functionWithParametersPointer << endl;//address
    cout << addition(globalVariable, globalVariable) << endl;//value
    Complex object;
    Complex object2(2, 1);
    object.setReal(1);
    object.setImaginary(2);
    Complex* pointer = nullptr;
    cout << object.getReal() << endl;
    cout << object.getImaginary() << endl;
    cout << object2 - object << endl;
    Point pointA = Point(0, 0);
    Point* pointPointer = &pointA;
    pointPointer->objectMethod();
    Point pointB(1);
    pointA.objectMethod();
    pointA.showCoordinates();
    pointB.showCoordinates();
    Point::staticMethod();
    pointA.giveId();
    pointB.giveId();
    const Point origin(0, 0);
    origin.giveId();
    origin.staticMethod();
    origin.showCoordinates();
    clearId(origin);
    Derived pointC(1, 1);
    pointPointer = &pointC;
    pointPointer->objectMethod();
    pointC.Point::objectMethod();
    pointC.objectMethod();
    pointC.showCoordinates();
    DerivedDerived pointD(2, 2);
    pointPointer = &pointD;
    pointPointer->objectMethod();
    pointD.Point::objectMethod();
    pointD.Derived::objectMethod();
    pointD.objectMethod();
    pointD.showCoordinates();
    pointD.usingProtected("Protected");
    MultipleInheritance pointE;
    pointE.objectMethod();
    pointE.setReal(3);
    pointE.setImaginary(3);
    cout << pointE.getReal() << endl;
    cout << pointE.getImaginary() << endl;
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

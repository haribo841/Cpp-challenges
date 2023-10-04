#include <iostream>
#include <string>
#include "Complex.h"
using namespace std;
Complex::Complex(double r, double i) : real(r), imaginary(i) {}
    // Method for setting the real part value
    void Complex::setReal(double r)
    {
        real = r;
    }
    // Method for setting the value of the imaginary part
    void Complex::setImaginary(double i)
    {
        imaginary = i;
    }
    // Method to retrieve the value of the real part
    double Complex::getReal() const
    {
        return real;
    }
    // Method to retrieve the value of the imaginary part
    double Complex::getImaginary() const
    {
        return imaginary;
    }
    // Overloading the addition operator
    Complex Complex::operator+(const Complex& other) const
    {
        return Complex(real + other.real, imaginary + other.imaginary);
    }
    // Overloading the subtraction operator
    Complex Complex::operator-(const Complex& other) const
    {
        return Complex(real - other.real, imaginary - other.imaginary);
    }
    // Overloading the multiplication operator
    Complex Complex::operator*(const Complex& other) const
    {
        double newReal = real * other.real - imaginary * other.imaginary;
        double newImaginary = real * other.imaginary + imaginary * other.real;
        return Complex(newReal, newImaginary);
    }
    // Display operator overloading
    std::ostream& operator<<(std::ostream& os, const Complex& c)
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

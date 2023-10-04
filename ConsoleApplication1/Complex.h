#pragma once
#include <iostream>
#include <string>
using namespace std;
class Complex
{
public:
    Complex(double r = 0.0, double i = 0.0);
    void setReal(double r);
    void setImaginary(double i);
    double getReal() const;
    double getImaginary() const;
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
private:
    double real;
    double imaginary;
};
#pragma once
#include <iostream>
#include <string>
class Complex
{
public:
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
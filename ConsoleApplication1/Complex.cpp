#include "Complex.h"
/* class Complex
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
*/
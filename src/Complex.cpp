#include "Complex.h"
#include <stdio.h>

int real;
int imaginary;

//Contructors and destructor

Complex::Complex()
{
    //ctor
}

Complex::~Complex()
{
    //dtor
}

Complex::Complex(int real = 0, int imaginary = 0) {
    this->real = real;
    this->imaginary = imaginary;
}

//Arithmetic operations
void Complex::Add(Complex n) {
    this->setReal(this->getReal() + n.getReal());
    this->setImaginary(this->getImaginary() + n.getImaginary());
}

static Complex Add(Complex n1, Complex n2) {
    return (n1.getReal()+n2.getReal(), n2.getImaginary()+n2.getImaginary());
}

bool Complex::isEqual (Complex n) {
    return (this->getReal() == n.getReal()) && (this->getImaginary() == n.getImaginary());
}

void Complex::printNumber() {
    printf ("The complex number is: %d+%id. \n", this->getReal(), this->getImaginary());
}

//Getters
int Complex::getReal() {
    return this->real;
}

int Complex::getImaginary() {
    return this->imaginary;
}

void Complex::setReal(int real) {
    this->real = real;
}

void Complex::setImaginary(int imaginary) {
    this->imaginary = imaginary;
}



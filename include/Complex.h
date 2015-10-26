#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
    public:
        Complex();
        Complex(int,int);
        virtual ~Complex();
        void Add(Complex);
        static Complex Add(Complex, Complex);
        bool isEqual(Complex);
        void printNumber();
        int getReal();
        int getImaginary();
        void setReal(int);
        void setImaginary(int);
    protected:
    private:
        int real;
        int imaginary;
};

#endif // COMPLEX_H

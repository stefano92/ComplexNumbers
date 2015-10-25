#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
    public:
        Complex();
        Complex(int,int);
        virtual ~Complex();
        Complex Add(Complex,Complex);
        int getReal();
        int getImaginary();
    protected:
    private:
        int real;
        int imaginary;
};

#endif // COMPLEX_H

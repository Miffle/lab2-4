#ifndef LAB_5_COMPLEX_H
#define LAB_5_COMPLEX_H

#include <iostream>

using namespace std;

template<class T>
class Complex {
public:
    T Re, Im;

    Complex(T UserInputRe, T UserInputIm) {
        Re = UserInputRe;
        Im = UserInputIm;
    };

    Complex() {
        Re = 0;
        Im = 0;
    };

    Complex addition(Complex<T> secondComplex) {
        Complex<T> resultComplex = *new Complex();
        resultComplex.Re = Re + secondComplex.Re;
        resultComplex.Im = Im + secondComplex.Im;
        return resultComplex;
    };

    Complex subtraction(Complex<T> secondComplex) {
        Complex<T> resultComplex = *new Complex();
        resultComplex.Re = Re - secondComplex.Re;
        resultComplex.Im = Im - secondComplex.Im;
        return resultComplex;
    };

    Complex division(Complex<T> secondComplex) {
        Complex<T> resultComplex = *new Complex();
        resultComplex.Re = ((Re * secondComplex.Re + Im * secondComplex.Im) /
                            (secondComplex.Re * secondComplex.Re + secondComplex.Im * secondComplex.Im));
        resultComplex.Im = ((Im * secondComplex.Re - Re * secondComplex.Im) /
                            (secondComplex.Re * secondComplex.Re + secondComplex.Im * secondComplex.Im));
        return resultComplex;
    };

    Complex multiplication(Complex<T> secondComplex) {
        Complex<T> resultComplex = *new Complex();
        resultComplex.Re = (Re * secondComplex.Re - Im * secondComplex.Im);
        resultComplex.Im = (Re * secondComplex.Im + Im * secondComplex.Re);
        return resultComplex;
    };

    void get_result() {
        if (Im >= 0) { cout << "result = " << Re << "+" << Im << "i" << endl; }
        else { cout << "result = " << Re << Im << "i" << endl; }
    };

};


#endif

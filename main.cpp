#include <iostream>
#include "Complex.h"

using namespace std;

void complex();

int main() {
    complex();
    return 0;
}

void complex() {
    double firstUserInputRe, firstUserInputIm, secondUserInputRe, secondUserInputIm;
    cout << "Введите действительное значение первого комплексного числа" << endl;
    cin >> firstUserInputRe;
    cout << "Введите мнимое значение первого комплексного числа" << endl;
    cin >> firstUserInputIm;
    cout << "Введите действительное значение второго комплексного числа" << endl;
    cin >> secondUserInputRe;
    cout << "Введите мнимое значение второго комплексного числа" << endl;
    cin >> secondUserInputIm;

    Complex<double> FirstComplex(firstUserInputRe, firstUserInputIm);
    Complex<double> SecondComplex(secondUserInputRe, secondUserInputIm);
    Complex<double> resultComplex;

    resultComplex = FirstComplex.addition(SecondComplex);
    resultComplex.get_result();

    resultComplex = FirstComplex.division(SecondComplex);
    resultComplex.get_result();

    resultComplex = FirstComplex.multiplication(SecondComplex);
    resultComplex.get_result();

    resultComplex = FirstComplex.subtraction(SecondComplex);
    resultComplex.get_result();
}
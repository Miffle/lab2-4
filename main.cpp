#include <iostream>
#include "Complex.h"
#include "array.h"

using namespace std;

void complex();

void array();

int main() {
    complex();
    array();
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

void array() {
    Array<int> a(10), b, c(b), d = {1, 2, 3, 4, 5};
    std::cout << d.size() << ": ";
    for (const auto x: d)
        std::cout << x << ' ';
}
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
    cout << "������ ����⢨⥫쭮� ���祭�� ��ࢮ�� �������᭮�� �᫠" << endl;
    cin >> firstUserInputRe;
    cout << "������ ������ ���祭�� ��ࢮ�� �������᭮�� �᫠" << endl;
    cin >> firstUserInputIm;
    cout << "������ ����⢨⥫쭮� ���祭�� ��ண� �������᭮�� �᫠" << endl;
    cin >> secondUserInputRe;
    cout << "������ ������ ���祭�� ��ண� �������᭮�� �᫠" << endl;
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
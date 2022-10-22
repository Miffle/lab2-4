#include <iostream>
#include "CTwo.h"

CTwo::CTwo() {
    s = "";
}

CTwo::CTwo(string S, COne &obj) {
    s = S;
    p = obj;
}

void CTwo::print() {
    std::cout << "s: " << s << " p: " << p;
}

CTwo::~CTwo() = default;

#include <iostream>
#include "COne.h"

COne::COne() {
    f = 0;
    ps = nullptr;
}

COne::COne(const COne &args) {
    f = args.f;
    ps = args.ps;
}

COne::COne(float F, char* Ps) {
    f = F;
    ps = Ps;
}

COne::~COne(){
    delete ps;
};

void COne::print() {
    std::cout<< "f: " << f << " ps: "  << ps;
}

float COne::getF() const {
    return f;
}

char *COne::getPs() const {
    return ps;
}

bool COne::operator==(const COne &rhs) const {
    return f == rhs.f &&
           ps == rhs.ps;
}

bool COne::operator!=(const COne &rhs) const {
    return !(rhs == *this);
}

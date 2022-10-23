#include <iostream>
#include <cstring>
#include "COne.h"

COne::COne() : COne(0.0f, nullptr) {};

COne::COne(float f, char *ps) : f(f), ps(strdup(ps)) {}

COne::COne(const COne &args) : COne(args.f, args.ps) {}


COne &COne::operator=(const COne &args) {
    if (this != &args){
        delete this->ps;
        this->f = args.f;
        this->ps = strdup(args.ps);
    }
    return *this;
}

void COne::print() const {
    std::cout << "f = " << f << " ps = " << ps;
}

COne::~COne() {
    delete ps;
}
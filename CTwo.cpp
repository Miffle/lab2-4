#include <iostream>
#include <cstring>
#include <utility>
#include "CTwo.h"

CTwo::CTwo() : CTwo("", nullptr) {};

CTwo::CTwo(string s, COne *p) : s(std::move(s)){
    if (p != nullptr) {
        this->p = new COne(*p);
    }
}

CTwo::CTwo(const CTwo &args) : CTwo(args.s, args.p) {}

CTwo &CTwo::operator=(const CTwo &args) {
    if (this != &args) {
        delete this->p;
        this->s = args.s;
        this->p = new COne(*p);
    }
    return *this;
}

void CTwo::print() const {
    cout << "s - " << s << endl;
    p->print();
}

CTwo::~CTwo() {
    delete p;
}


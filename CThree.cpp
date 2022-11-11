#include <iostream>
#include "CThree.h"

CThree::CThree() {
    trow = 0;
}

CThree::CThree(int trow, const CTwo &cTwo) : trow(trow), CTwo(cTwo) {}

CThree::CThree(const CThree &args, const CTwo &g) : trow(args.trow), CTwo(g) {}

void CThree::print() const {
    cout << "trow = " << trow << endl;
    CTwo::print();
}

CThree::~CThree() {};

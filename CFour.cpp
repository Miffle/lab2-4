#include <iostream>
#include "CFour.h"

CFour::CFour() : wort(0) {}

CFour::CFour(int wort, CThree &cThree) : wort(wort), CThree(cThree){}

CFour::CFour(const CFour &args, const CThree &g): wort(args.wort), CThree(g) {}

void CFour::print() const {
    cout <<"wort =" << wort<<endl;
    CThree::print();
}


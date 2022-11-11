#include <iostream>
#include <bits/stdc++.h>
#include "COne.h"
#include "CTwo.h"
#include "CThree.h"
#include "CFour.h"

using namespace std;


void printAll(vector<CTwo *> const &array) {
    for (auto x: array) {
        x->print();
    }
}


int main() {
    COne b(5.3, (char *) "fsda");
    CTwo a("dssdadsa", &b);
    CThree c(4, a);
    vector<CTwo *> array{
            new CTwo("dssdadsa", &b),
            new CTwo("xczxcczx", &b),
            new CThree(3, a),
            new CFour(12, c),
    };
    printAll(array);
}


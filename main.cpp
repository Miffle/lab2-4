#include <iostream>
#include "COne.h"
#include "CTwo.h"
#include "CThree.h"

using namespace std;

int main() {
    COne b(5.3, (char *)"fsda");
    CTwo a("dssdadsa", &b);
    CThree c(4, a);
    c.print();
}

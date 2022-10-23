#include <iostream>
#include "COne.h"
#include "CTwo.h"

using namespace std;

int main() {
    COne b(5.3, (char *)"fsda");
    CTwo a("dssdadsa", &b);
    a.print();
}

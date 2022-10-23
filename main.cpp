#include <iostream>
#include "COne.h"
#include "CTwo.h"

using namespace std;

int main() {
    COne first, second(5.2, (char *)"dss");
    first.print();
    second.print();
}

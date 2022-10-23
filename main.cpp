#include <iostream>
#include "COne.h"
#include "CTwo.h"

using namespace std;

int main() {
    COne a(4.9, "1");
    COne b;
    COne c(2.6, (char *)"d");
    b = a = c;
    b.print();
}

#ifndef INC_2_4_LABS_CTWO_H
#define INC_2_4_LABS_CTWO_H

#include <string>
#include "COne.h"

using namespace std;

class CTwo {
protected:
    string s;
    COne *p;
public:
    explicit CTwo();
    CTwo(string S, COne &obj);
    virtual ~CTwo();
    void print();

};


#endif

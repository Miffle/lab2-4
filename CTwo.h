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
    CTwo();

    CTwo(string s, COne *p);

    CTwo(const CTwo &args);

    CTwo &operator=(const CTwo &args);

    void print() const;

    virtual ~CTwo();
};


#endif

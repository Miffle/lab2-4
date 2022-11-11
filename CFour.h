#ifndef INC_2_4_LABS_CFOUR_H
#define INC_2_4_LABS_CFOUR_H


#include "CThree.h"

class CFour : public CThree{
protected:
    int wort;
public:
    CFour();
    CFour(int wort, CThree& cThree);
    CFour(const CFour &args, const CThree& g);

    virtual void print() const;

};


#endif //INC_2_4_LABS_CFOUR_H

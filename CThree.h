#ifndef INC_2_4_LABS_CTHREE_H
#define INC_2_4_LABS_CTHREE_H


#include "CTwo.h"

class CThree : public CTwo{
private:
    int trow;
public:
    CThree();

    CThree(int trow, const CTwo& cTwo);

    CThree(const CThree &args, const CTwo& g);

    virtual void print() const;

    virtual ~CThree();
};


#endif

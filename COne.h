#ifndef INC_2_4_LABS_CONE_H
#define INC_2_4_LABS_CONE_H


class COne {
protected:
    float f;
    char *ps;
public:
    explicit COne();

    COne(const COne &args);

    COne(float F, char *Ps);

    bool operator==(const COne &rhs) const;

    bool operator!=(const COne &rhs) const;

    float getF() const;

    char *getPs() const;

    virtual ~COne();

    void print();
    friend class CTwo;
};


#endif

#ifndef INC_2_4_LABS_CONE_H
#define INC_2_4_LABS_CONE_H


class COne {
    friend class CTwo;

protected:
    float f;
    char *ps;
public:
    COne();

    COne(float f, char *ps);

    COne(const COne &args);

    COne &operator=(const COne &args);

    void print() const;

    virtual ~COne();


};


#endif

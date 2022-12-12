#ifndef INTNUMBER_H
#define INTNUMBER_H

#include <number.h>

class IntNumber: public Number
{
public:
    IntNumber();
    IntNumber(int);

    int get() override;
    void set(int) override;
private:
    int number;
};

#endif // INTNUMBER_H

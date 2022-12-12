#ifndef OUTSTREAM_H
#define OUTSTREAM_H


#include<iostream>

class OutStream
{
public:
    virtual void sendString(std::string) = 0;

};

#endif // OUTSTREAM_H

#ifndef FIZZBUZZSENDER_H
#define FIZZBUZZSENDER_H

#include <memory>

#include <outstream.h>
#include <number.h>
#include <fizzsender.h>
#include <buzzsender.h>


class FizzBuzzSender: public FizzSender, public BuzzSender
{
public:
    FizzBuzzSender(std::shared_ptr<OutStream>, std::shared_ptr<Number>);
    void send();
private:
    std::shared_ptr<OutStream> out;
    std::shared_ptr<Number> number_resource;
};

#endif // FIZZBUZZSENDER_H

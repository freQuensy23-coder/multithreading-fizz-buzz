#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <intnumber.h>
#include <fileoutstream.h>

#include <numbersender.h>
#include <fizzsender.h>
#include <buzzsender.h>
#include <fizzbuzzsender.h>

class Controller
{
public:
    Controller();
    Controller(std::shared_ptr<OutStream>, std::shared_ptr<Number>);

    void process_to(int n);
private:
    std::shared_ptr<OutStream> out;
    std::shared_ptr<Number> num;
    NumberSender numbersender;
    FizzSender fizzsender;
    BuzzSender buzzsender;
    FizzBuzzSender fizzbuzzsender;
};

#endif // CONTROLLER_H

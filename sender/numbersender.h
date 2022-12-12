#ifndef NUMBERSENDER_H
#define NUMBERSENDER_H

#include <memory>

#include <sender.h>
#include <outstream.h>
#include <number.h>


class NumberSender: public Sender
{
public:
    NumberSender(std::shared_ptr<OutStream>, std::shared_ptr<Number>);
    void send();
private:
    std::shared_ptr<OutStream> out;
    std::shared_ptr<Number> number_resource;
};

#endif // BUZZSENDER_H

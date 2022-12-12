#include <fizzbuzzsender.h>

FizzBuzzSender::FizzBuzzSender(std::shared_ptr<OutStream> out,
                       std::shared_ptr<Number> number_resource):
    FizzSender(out, number_resource),
    BuzzSender(out, number_resource) {}

void FizzBuzzSender::send() {
    FizzSender::send();
    BuzzSender::send();
}

#include <fizzsender.h>

FizzSender::FizzSender(std::shared_ptr<OutStream> out,
                       std::shared_ptr<Number> number_resource):
    out(out), number_resource(number_resource) { }

void FizzSender::send() {
    out->sendString("fizz");
}

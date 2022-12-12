#include <numbersender.h>

NumberSender::NumberSender(std::shared_ptr<OutStream> out,
                           std::shared_ptr<Number> number_resource):
    out(out), number_resource(number_resource) { }

void NumberSender::send() {
    out->sendString(std::to_string(number_resource->get()));
}

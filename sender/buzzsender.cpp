#include "buzzsender.h"

BuzzSender::BuzzSender(std::shared_ptr<OutStream> out,
                       std::shared_ptr<Number> number_resource):
    out(out), number_resource(number_resource) { }

void BuzzSender::send() {
    out->sendString("buzz");
}

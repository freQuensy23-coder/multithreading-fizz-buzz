#include "intnumber.h"

IntNumber::IntNumber(): number(0) {}
IntNumber::IntNumber(int number): number(number) {}

int IntNumber::get() {
    return number;
}

void IntNumber::set(int new_number) {
    number = new_number;
}

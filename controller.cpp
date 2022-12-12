#include <controller.h>
#include <string>

Controller::Controller(): Controller(std::shared_ptr<OutStream> (new FileOutStream("main.txt")),
                                     std::shared_ptr<Number> (new IntNumber)) {}

Controller::Controller(std::shared_ptr<OutStream> out,
                       std::shared_ptr<Number> num) :
    out(out),
    num(num),
    numbersender(NumberSender(out, num)),
    fizzsender(FizzSender(out, num)),
    buzzsender(BuzzSender(out, num)),
    fizzbuzzsender(FizzBuzzSender(out, num)) { }

void Controller::process_to(int n) {
	
	for(int i = 1; i <= n; i ++) {
        num->set(i);
        if(i % 15 == 0) {
            fizzbuzzsender.send();
        } else if (i % 3 == 0) {
            fizzsender.send();
        } else if (i % 5 == 0) {
            buzzsender.send();
        } else {
            numbersender.send();
        }
        out->sendString("\n");

    }
}

std::string process_period(int start, int end){
	
}

# Fizz buzz problem
Given an integer n, return a string such that:

* Add "FizzBuzz" to it if i is divisible by 3 and 5.
* Add "Fizz" if i is divisible by 3.
* Add "Buzz" if i is divisible by 5.
* Add i (as a string) if none of the above conditions are true.

# Possible solution
Despite the fact that the solution in few lines with one for loop is possible, иге it does not follow extensibility principles: for example:
* If we want to configure IOStream we will not be able to do this. For example it will not work on a PC without monitors.
* We can not easy modify send fizz, send buzz and send fizz buzz behaviour.
* We can not use something instead of integers to cout numbers
* This solution is enought slow

### OOP Solution
:w

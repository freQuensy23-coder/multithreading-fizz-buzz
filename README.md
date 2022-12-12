# Fizz buzz problem
Given an integer n, return a string such that:

* Add "FizzBuzz" to it if i is divisible by 3 and 5.
* Add "Fizz" if i is divisible by 3.
* Add "Buzz" if i is divisible by 5.
* Add i (as a string) if none of the above conditions are true.

# Possible solutions
Despite the fact that the solution in few lines with one for loop is possible, иге it does not follow extensibility principles: for example:
* We can not modify input and output streams. For example it will not work on a PC without monitors (because iostream library will not work whith them).
* We can not easy modify send fizz, send buzz and send fizz buzz behaviour.
* We can not use something instead of integers to cout numbers
* This solution is enought slow

### OOP Solution
Obvios OOP - style solution based on five classes. You can see basic principles of it on the diagram below. 
![](https://i.imgur.com/WzZR8yq.png)

### Multithreading solution
Such a problem lends itself well to optimization through multithreading, since it is not recurrent. The calculation of each next number can be carried out independently of the previous one (and any other). On the second figure you can see example of such optimization
![](https://i.imgur.com/7q9nUSB.jpg)
Load balancer will divide whole task into small parts, thats will be passed to threads via threads controller. Each thread will solve small part of big problem. To prevent race condition and to be able to control system more flexible each thread will not send his results to some "global" stream, but temporarily save them locally. It was implemented by replacing the I/O stream manager for each thread's controller. So balancer should remember tasks of each thread and combine all results after finish work.





#!/usr/bin/env python
print "Hello"
a= input("How many numbers?")
even = lambda num:"FizzBuzz" if num%3==0 and num%5==0 else ("Fizz" if num%3==0 else ("Buzz" if num%5==0 else num)) 
print [even(x) for x in range(1,(100 if (a>100 or a<0) else a))]
#print [x for x in massive]


#include <string>
#include <iostream>
using namespace std;

// something is divisible if a % b == 0

// normal function
def isPrime(num){
  if (num <= 1):
		return (True);
	for i in rage(2, num):
		if (num % i == 0):
			return (False);
	return (True);
}
// recursive function 
def isPrime_rec(num, div){
	if(div == 1): // base case 
		return (True);
	if(num % div == 0):
		return (False);
	else:
		return isPrisme_rec(num, div-1);
}
/* 
isPrime_rec(5,4)
	isPrime_rec(5,3)
		isPrime_rec(5,2)
			isPrime_rec(5,1)
function is called 4 times
*/ 

// similar to filter in python

def myFilter(func, list){
	newlist = [] // create empty list
	for i in list:
		if(func(i)):
			newlist.append(i);
	return(newlist); // returns new list

/*
L = [5, 6, 7, 8, 9]
N = myFilter(isPrime, L);
5 is prime -- go to new list
6 is not prime -- not in new list
7 is prime -- go to new list
8 is not prime -- not in new list
9 is not prime -- not in new list
newlist = [5, 7]
*/


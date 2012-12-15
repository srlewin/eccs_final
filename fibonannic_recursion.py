'''
Fibonannic
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 ...
f(n) = f(n-1) + f(n-2)
'''

def fibonacci(n):
  if (n == 0):
		return 1;
	elif (n == 1):
		return 1;
	else:
		return fibonacci(n-1) + fibonacci(n-2);

print fibonacci(3);
print fibonacci(4);
print fibonacci(5);

def fib_iterative(n):
	if (n == 0 or n == 1):
		return 1;
	fibprevprev = 1;
	fibprev = 1;
	for i in range (2, n+1): # i will take values from 2..n
		fib = fibprevprev + fibprev;
		# shift the previous two values of fib.
		fibprevprev = fibprev;
		fibprev = fib;
	return fib;

print fib_iterative(3);
print fib_iterative(4);
print fib_iterative(5);

'''
Tower of Hanoi Problem
'''

def shift(n, A, B, C):   # shift n disks from A to B, with C being the spare rod
	if (n == 0):             # check. Solve the simple case first
		return;
	else:                    # divide and conquer step
		shift(n-1, A, C, B);
		print "shift a disk from", A, "to", B;  # print the move
		shift(n-1, C, B, A);

'''
Algorithm for different values of n
A = "rod 1";
B = "rod 2";
C = "rod 3";
shift(2, A, B, C);
shift(3, A, B, C);
shift(10, A, B, C);
'''

'''
Recursion with Lists
'''
L = [1, 2, 3, 4]

def sumlist(L):
    if (L == []):
        return 0;
    else:
        headnode = L[0];
        tail = L[1:];
        return headnode + sumlist(tail);

print sumlist(L);

#  REDUCE

''' Python that reduces elements of a list to a single 
value by applying f to pairs of elements of the list. 
First we define an add function that reduces two values 
to a single value and then call reduce(add, X) to add all the elements of X: '''

def addALL(myList):
	result = 0
	for item in myList:
		result = result + item
	return result;

def add(a, b):
	return a+b;

myList1 = [2,4,6,8]
myList2 = ["2", "4", "6", "8"]

print addALL(myList1) #OLD

print reduce(add, myList1); #NEW

def multiply(a, b):
	return a*b

print reduce(multiply, myList1)


#	MAP -- PROVIDE FUNCTION
#	CONVERT 1 TYPE TO ANOTHER -- ex. convert string to int

''' Just like filter, it is possible to apply a function 
to every value in a list and return a new list. '''

myList1 = [2,4,6,8]
myList2 = ["2", "4", "6", "8"]

def stringTOnum(n):
	return int(n)

print myList2 #PRINT STRING
print map(stringTOnum, myList2); #PRINT INT -- ORGINAL LIST DOES NOT CHANGE

#	FILTER

''' suppose we are given a list of values
we want to filter out elements that do not satisfy a predicate
the predicate is a variable that refers to a function.  '''

myList3 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

def isEven(n):
	if n % 2 == 0:
		return True
	else:
		return False

print filter(isEven, myList3);

#PUT IT ALL TOGETHER 
#FLITER  WHAT YOU HAVE, MAP AND THEN REDUCE 

print reduce(add, map(stringTOnum, filter(isEven, myList3)))

'''The advantage of map, filter, and reduce paradigm is that it provides
a very generic way of thinking about working with data in lists.
A major advantage for google in using map/reduce paradigm is 
that the map and reduce operations can be highly parallelized '''

''' Divide-and-conquer strategy for lists:
1. Base case (Direct Solution): If the list is empty, the answer is 0.
2. Divide: decompose the list into the first node and the remaining smaller list of (n-1) elements.
3. Conquer: The answer is first element + sum of remaining elements. '''

# For example, sum of [1, 4, 5, 6] is (1 + sum of [4, 5, 6]). Sum of [] is 0.
# Let's write this as Python code:

def sumlist(L):
    if (L == []):
        return 0;
    else:
        headnode = L[0];
        tail = L[1:];
        return headnode + sumlist(tail); # should return 16

''' Let's rewrite the above slightly by defining an explicit function 
head(L) and tail(L), where head(L) returns the first element of a non-empty 
list and tail(L) returns all but the first element of a list. 
These operations do not modify L. '''

def head(L):   # L assumed to be non-empty.
    return L[0]; 

def tail(L):   # L assumed to be non-empty.
    return L[1:];

def sumlist(L):
    if (L == []): # base case statement 
        return 0;
    else:
        return head(L) + sumlist(tail(L));

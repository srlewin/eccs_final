# recursion example 1 - walking to a goal

def walktogoal(distance):
    print "Starting to walk a distance of ", distance;
    if (distance == 0):  		# base case: always do a check first to see if at the goal or close to direction solution s
       print "Done walking. Reached goal";
       return;
    else:
       print "Walk one step";
       walktogoal(distance - 1);
       print "Done walking a distance of ", distance;

'''Notice that the walktogoal(distance) is solved in terms of a smaller problem walktogoal(distance-1). 
When a function calls itself, it is called a recursive function.  
We are using a technique called recursion. 
Usually, it should be calling itself on a smaller instance of the problem.''' 

''' Divide and conquer recursion template: 
Base case: Always do a check first to see if at the goal or close to it for a direct solution.
Divide: Divide the problem into smaller parts
Conquer: Conquer by solving the smaller problems.'''


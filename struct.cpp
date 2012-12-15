#include <iostream>
using namespace std;

// The below defines a new type called Student with four attributes:
// firstname, lastname, college, and entry_year. 

typedef struct {  	//typedef says that we are defining a new type
    string firstname;	// struct says that this new type is a structured	
    string lastname;	// type something that contains multiple attributes
    string college;
    int entry_year;
} Student;				// student is the name of the new type


int main() {
    Student s1, s2;		// once you define the type, you can create objects of the above type
    const int LISTSIZE = 100;
    Student studentlist[LISTSIZE];
    
    // Initialize s1 <object>.<attribute> = how we read and write attributes from student obejct
    s1.firstname = "Jane";
    s1.lastname = "Doe";
    s1.college = "Michigan State University";
    s1.entry_year = 2010;

    // Print firstname of students s1
    cout << s1.firstname << endl;

    // Initialize s2
    s2.firstname = "Adam";
    s2.lastname = "Smith";
    s2.entry_year = 2011;
    s2.college = "University of Michigan";

    // Print s2's fields.
    cout << s2.firstname << ", " 
         << s2.lastname << ", "
         << s2.college << ", " 
         << s2.entry_year << endl;

    
    // The code below illustrates working with arrays.

    // Assign 2012 as the entry_year for all the students in studentlist
    for (int i = 0; i < LISTSIZE; i++) {	// One can access a student at index i as studentlist[i]
        studentlist[i].entry_year = 2012;
    }

    // Print entry_year of student at index 20 in studentlist
    cout << studentlist[20].entry_year << endl;
}

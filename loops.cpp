#include <stdio.h>
#include <iostream>

using namespace std;


void triangle_up(){
  for (int r = 1; r <= 5; r++) {
		for (int c = 1; c <= r; c++)
		cout << "*";
		cout << endl;
	}
}

void triangle_reverse_down(){
	for (int r = 0; r < 5; r++) {
		for (int c = 1; c <= 5; c++) {
			if (c <= r) cout << " ";
		else 
		cout << "*";
	}
		cout << endl;
	}
}

void triangle_down(){
	for (int r = 0; r < 5; r++){
		for (int c = 0; c < 5; c++) {
			if( r <= c )
		cout << "*";
	}
		cout << endl;
	}
}

void triangle_reverse_up(){
	for (int r = 1; r <= 5; r++){
		for(int c = 5-r; c > 0; c--)
		{
			cout<<" "; //two spaces
		}
			for(int c = 1; c <= r; c++)
	       {
			cout<< "*";
	       }
			cout << endl;
	}
}

void pyramid(){
	for (int r = 1; r <= 5; r++){
		for(int c = 5-r; c > 0; c--)
		{
			cout<<" ";
		}
			for(int c = 1; c <= r; c++)
	       {
			cout<< "* ";
	       }
			cout << endl;
	}
}


int main(){
	cout << "triangle up" << endl;
		triangle_up();
	cout << "triangle down" << endl;
		triangle_down();
	cout << "reverse up triangle" << endl;
		triangle_reverse_up();
	cout << "reverse down triangle" << endl;
		triangle_reverse_down();
	cout << "pyramid" << endl;
		pyramid();
return 0;
}

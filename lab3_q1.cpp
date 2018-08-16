
//we first open the library 
#include<iostream>
//we will now open the namespace std for the cout command
using namespace std;
//all programs must start with int main
int main()
{
int i; float f; double d; char c; bool b;    	//declaration of the required numbers
cout << i<< "  this is the size of integer " << sizeof(i)<< endl ;            //first the value of i and then the size of i
cout << f<< "  this is the size of float "<< sizeof(f)<<endl;			//first the value of f and then the size of f
cout << d<< "  this is the size of double "<< sizeof(d)<<endl;			//first the value of d and then the size of d
cout << c<< "  this is the size of character "<< sizeof(c)<<endl;		//first the value of c and then the size of c
cout << b<< "  this is the size of boolean "<< sizeof(b)<<endl;			//first the value of b  and then the size of b
return 0;									//some integer must be returned because of definition of main
}

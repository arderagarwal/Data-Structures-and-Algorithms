#include <iostream>
using namespace std;
int main(){
	// to print we use cout
	cout<<"Hello World";
	// rules for declaring a variable:
	// 	All variable names must begin with a letter of the alphabet or an underscore
	// 	Variable names are case sensitive
	// declaring a variable
	int var1;
	// Taking input of a variable
	cin>>var1;
	//Displaying the variable 
	cout<<var1<<endl;
    //Arithmetic Operators:
    // + Addition
    cout<<var1+var1<<endl;
    // - Subtraction
    cout<<var1-5<<endl;
    // * Multiplication
    cout<<var1*5<<endl;
    // * Division
    cout<<var1/5<<endl;
    // % modulus to find remainder
    cout<<var1%3;
    // shorthand for operations
    var1+=1;
	//on sucessful execution of the code the main function would return 0
	return 0;
}

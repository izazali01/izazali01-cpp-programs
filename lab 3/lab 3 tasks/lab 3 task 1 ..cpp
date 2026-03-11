 // NAME= izaz ali
 // ID= 5120364/ 0660

#include <iostream> // tells the compiler to include standard input output library
using namespace std;   // allows us to use cout without having to type std for every cout

inint main()      // the starting point from where the computer begins executing program
	{
	
	int a;   // variable declaration and a is the name of variable
	
	cout<<"enter an integer ";     // prompt for user to input data
	cin>>a;                           // takes data from user and puts it into the variable
	
	if(a>0 && a<100) /* condition for the program to cheak a number is greater than 0 and less than 100 and && this is 
	               cld loical and and use for condition
	cout<<"condition met between 0 and 100"<<endl;  // if the condition met the message is sent
	
	else                                              // part that runs if the if condition fails
	cout<<"condition not met"<<endl;         // if the condion doesnt met this message is sent 
	
	return 0;   // programme ended succesfully
}

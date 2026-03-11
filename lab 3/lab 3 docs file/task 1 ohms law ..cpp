 // NAME= izaz ali
 // ID= 5120364/ 0660

#include <iostream>  // this is like tools in dev c++ because the take files from specific location
using namespace std;  // allows us to use cout and cin without having to type std for each to save our coding from rep

int main() {                               // start of logical or main function
     
     double voltage,resistance,current;           //  3 variables  declaration
     
     cout<<"enter voltage ";                  //prompt to user to enter votage
     cin>>voltage;                                 //takes input data and stores it in variable 
     cout<<"enter current ";                 //prompt to user to enter votage
     cin>>current;                                  //takes input data and stores it in variable 
     
     resistance=voltage/current;                  // operational part formula v=ir
     
     cout<<"voltage = "<<voltage<<"V"<<endl;           // output value voltage and unit
     cout<<"current = "<<current<<"A"<<endl;          // output value of current and unit
     cout<<"resistance = "<<resistance<<" ohm"<<endl;    // output value of resistance and unit
     
     return 0;    // tells that program ended successfully
}


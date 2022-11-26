//methods are functions that belongs to the class.
//NB you access methods just like you access attributes. 
//by creating an object of the class and using the dot syntax (.)
#include <iostream>
#include <string.h>
using namespace std;
class myClass {
public : //access specifier
void myMethod()//method /function defined inside the class
{
cout << "Hello sir Bonuke King!"<<endl;
}
void myMethod1(); //method /function declaration


};

//method /function defination outside the class
void myClass::myMethod1()
{
    cout << "Hello Bonuke . in this function we defined it outside the class and we used class::function to define it "<<endl;
}


int main ()
{
    myClass myObj; //create an object of myclass
myObj.myMethod();//call the method
myObj.myMethod1(); //call the method

return 0;
}


































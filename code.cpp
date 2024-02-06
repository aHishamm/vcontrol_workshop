#include <iostream> 
using namespace std; 

//Creating the function prototype 
int multiply_func(int param1,int param2); 

int main(){
    //This is the main function, it takes in two integer values and returns the summation of them 
    int x,y; 
    cout << "Please enter the value for x and y: \n"; 
    cin >> x >> y; 
    cout << "The summation of " << x << " and " << y << " is: " << x+y << "\n";

    //Added feature in version 2.0 (A function that allows us to multiply two values) 
    int result = multiply_func(x,y); 
    cout << "The result of the multiplication function is: " << result << "\n"; 
    return 0;
}

//Developer 2 
//Function to calculate the multiplication of two numbers taken as input 
int multiply_func(int param1, int param2){
    // return the multiplcation of the two numbers 
    return param1 * param2; 
}
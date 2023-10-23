#include <iostream>
using namespace std;

//int main () {
//	int m;
//	int n;
//	cout<<"Enter the number of terms you want to print: "<<endl; cin>>n;   //Taking input for how many terms you want to display
//    for (m=1; m<=n; ++m) {       //This step creates increments of 1 
//	if (m%10==0) {              //This is the condition that only executes if the number is perfectly divisible by 10 
//		continue;   //This command allows to skip multiples of 10
//	}
//	cout<<m<<endl;
//}
// return 0;
//}




//int main () {
//int num;
//int prime = 1;                                        // We prematurely set the prime variable as 1 so it is always true unless the loop says otherwise.
//cout<<"Enter a number: "<<endl; cin>>num;
//if (num<=1) {                                         // This is a basic condition because 1 and smaller numbers are not prime numbers.
//	cout<<"Number is not a prime number"<<endl;
//} else {
//	for (int i = 2; i*i<=num; i++) {                  // This loop assigns a integral value to i(2-9) and their multiples smaller than the input number.
//		if (num%i==0) {                               // This step checks if the number divided by i has a remainder of 0.
//			prime = 0;                                // If the remainder is 0 it assigns a boolean value of 0 to the prime variable. 
//			break;                                    // As the condition gets fulfilled this command breaks the loop. 
//		}
//}
//if (prime) {                                          // This step checks if the condition is true or false using 0 and 1.
//	cout<<"Number is a prime number. "<<endl;         // When condition is true (prime=1)
//} else {
//	cout<<"Number is not a prime number."<<endl;      // When condiiton is false (prime=0)
//}
//}
////return 0;
////}
//


int main () {
	
	int Num;
	int sum= 0;                                        // Empty variable which can be overwritten.
	cout<<"Enter a number please: "<<endl; cin>>Num; 
	
	if (Num<0) {                                       // This checks if the number is negative or not.
		cout<<"Invalid input, enter a positive number."<<endl;
	} else {
		while (Num>0) {                               // This loop runs only if the numerical value is bigger than zero.
			int digits;
			digits=Num%10;                            // This modulus helps to find the last digit of the number
			sum += digits;                            // This step accumulates the number of digits to the sum variable
			Num/=10;                                  // This step allows to shift the last digit to the next digit so it runs simultaneously.
		}
		cout<<"The sum of the digits is: "<<sum<<endl;
	} 
	return 0;
}



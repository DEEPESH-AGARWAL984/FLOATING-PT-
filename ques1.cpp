/*WAP THAT READS IN TWO FLOATING POINT NUMBERS AND TESTS WHETHER THEY ARE SAME UPTO THREE
DECIMAL PLACES*/

/* Test cases
num1 = 25.589
num2 = 25.586
Expected output:
They are different. 
*/
#include<iostream>
using namespace std;

int main(){
	
	float num1;
	float num2;
	cout<<"Enter the floating pt 1: ";
	cin>>num1;
	
	cout<<"Enter the floating pt 2: ";
	cin>>num2;
	
	if(num1 == num2){
		cout<<"They are same";
	}
	else{
		cout<<"They are different";
	}
}

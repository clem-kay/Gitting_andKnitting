#include <iostream>

using namespace std;

int main(){
	int num1,num2,num3,num4,num5;
	cout << "Please enter 5 nmbers"<< endl;
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	float result = num1+num2+num3+num4+num5;
	cout << "Your entered 5 numbers they are: "<< num1 << "," << num2<< "," << num3 << "," << num4 << "," << num5 << endl;
	cout << "The mean of the 5 numbers is: "<< result/5<<endl;	return 0;
}

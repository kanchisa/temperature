#include <iostream>
using namespace std;
int main()
{
	double C,F;
	cout<< "Enter Celsius temperature: ";
	cin >> C;
	
	F = (1.8*C)+32;
	cout<< "Fahrenheit : " << F  << endl ;
	cout << "Now weather in Thailand is " << (F >70 ? " HOT " : " Cold") << endl;
	
	return 0 ;
}
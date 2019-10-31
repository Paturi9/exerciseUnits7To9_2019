/*Patricia López Navarro
 * 
 * This program asks the user for ten numbers, then it gives the
 * number of increments and decrements that took place*/
#include <iostream>
using namespace std;
int main()
{
	const int IMPUT_MAX=10;
	int lastNumber,secondToLastNumber,increment,decrement;
	cout<<"Input number 1 ";
	cin>>lastNumber;
	increment=0;
	decrement=0;
	secondToLastNumber=0;
	for (int count=2;count<=IMPUT_MAX;count++)
	{
		secondToLastNumber = lastNumber;
		cout<<"Input number "<<count;
		cin>>lastNumber;
		if(lastNumber>secondToLastNumber)
			increment++;
		else if(lastNumber<secondToLastNumber)
			decrement++;
	}
	cout<<"There has been "<<increment<<" increments and "
		<<decrement<<" decrements";
	return 0;
}

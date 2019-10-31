#include <iostream>
using namespace std;
int main()
{
	const int C=10;
	int na,nb,i,d;
	cout<<"Input number 1";
	cin>>na;
	i=0;
	d=0;
	nb=0;
	for (int c=2;c<=C;c++)
	{
		nb = na;
		cout<<"Input number"<<c;
		cin>>na;
		if(na>nb)
			i++;
		else if(na<nb)
			d++;
	}
	cout<<"There has been "<<i<<" increments and "<<d<<" decrements";
	return 0;
}

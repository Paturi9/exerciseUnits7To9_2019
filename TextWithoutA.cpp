/*Patricia López Navarro
 * 
 * This program asks for diffent words
 * as long as it has "a" or "A" once*/
#include <iostream>
using namespace std;
int main()
{
	bool noACheck;
	string wordAsked;
	noACheck=false;
	do
	{
		cout<<"Enter a word ";
		cin>>wordAsked;
		if (!noACheck)
		{
			noACheck=true;
			for(unsigned int characterCount=0;
				characterCount<wordAsked.length();characterCount++)
			{
				if (wordAsked[characterCount]=='a'||
					wordAsked[characterCount]=='A')
				{
					noACheck=false;
				}
			}
		}
	}
	while (!noACheck);
	return 0;
}

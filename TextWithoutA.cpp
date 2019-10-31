#include <iostream>
using namespace std;
int main()
{
	bool noa;
	string text;
	noa=false;
	do
	{
		cout<<"Enter a word";
		cin>>text;
		if (!noa)
		{
			noa=true;
			for(unsigned int i=0;i<text.length();i++)
			{
				if (text[i]=='a'||text[i]=='A')
				{
					noa=false;
				}
			}
		}
	}
	while (!noa);
	return 0;
}

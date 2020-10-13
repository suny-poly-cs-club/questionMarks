#include <iostream>
#include <string>

using namespace std;

bool questionMarks(string str);

int main(void)
{
	string str = "arrb6???4xxbl5???eee5";
	cout<<boolalpha<<questionMarks(str);
}

bool questionMarks(string str)
{
	int startingNumPos = 0;
	int endNumPos = 0;
	bool isQuestion = false;
	
	for(int i = 0; i < str.size(); i++)
	{
		if(str.at(i)>=48 && str.at(i)<=57)
		{
			startingNumPos = i;
			
			for(int j = i+1; j<str.size();j++)
			{
				if(str.at(j)>=48 && str.at(j)<=57)
				{
					endNumPos = j;
					break;
				}	
			}		
		
			int sum = (str.at(startingNumPos)-48)+(str.at(endNumPos)-48);
			
			
			if(sum==10)
			{
				int qMarkAmt = 0;
				for(int z = startingNumPos; z<endNumPos; z++)
				{
					if(str.at(z)=='?')
					{
						qMarkAmt++;
					}
				}
				
				if(qMarkAmt>=3)
				{
					isQuestion=true;
					return isQuestion;
				}
			}
			
			else continue;
		}
	}
	return isQuestion;
}

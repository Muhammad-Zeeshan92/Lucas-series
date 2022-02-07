#include<iostream>
using namespace std;
int main()
{
	int num = -1;
	int lim = 1;
	while (lim < 16)
	{
		cout << "\t" << num;
		if (lim % 2 != 0)
		{
			num += 1;
			
		}
		else
		{
			num -= 3;
			
		}
		
			lim++;
		
	}

}
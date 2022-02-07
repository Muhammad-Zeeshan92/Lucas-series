#include <iostream>
using namespace std;
int main()
{
	int num = 1;
	int lim = 1;
	int addition = 2;
	while (lim < 16)
	{
		if (lim < 4)
		{
			cout << "\t" << num;
		}
		else
			if(lim>3&&lim<6)
		{
				num += addition;
				cout << "\t" << num;
		}
			else
			{
				addition*= 2;
				num += addition;
				cout << "\t" << num;
			}
		lim++;

	}
}
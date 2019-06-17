#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	ifstream in;
	ofstream out;
	int t;
	int counts, countb;
	char n;
	in.open("leapfrog_ch_.txt");
	out.open("output.txt");
	in >> t;
	in >> n;
	for (int i = 0; i<t ; i++)
	{
		counts = 0;
		countb = 0;
		if (n == 'A')
		{
			in >> n;
			while (true)
			{
				if (n == 'B')
				{
					countb++;
				}
				else if (n == '.')
				{
					counts++;
				}
				else if (n == 'A')
				{
					break;
				}
				in >> n;
			}
			//Solution for Leapfrog: Ch. 1
	
                	if (countb >= counts && counts > 0)
			{
				cout << "Case #" << i + 1 << ": Y";
				out << "Case #" << i + 1 << ": Y";
			}
			else
			{
				cout << "Case #" << i + 1 << ": N";
				out << "Case #" << i + 1 << ": N";
			}
		}  
	}
	in.close();
	out.close();
	return 0;
}

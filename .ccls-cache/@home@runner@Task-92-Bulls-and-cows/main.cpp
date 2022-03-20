#include <iostream>
using namespace std;
int main() 
{
	cout << "Bulls and cows\n";
	int bulls=0, cows=0;
	string numOne, numTwo;
	cout << "Enter the intended number : ";
	cin >> numOne;
	cout << "Enter the second number : ";
	cin >> numTwo;
	int temp=0, temp2=0;
	char num=' ';
	char num2=' ';
	for (int i = 0; i < numTwo.length(); i++)
	{
		for (int j = 0; j < numOne.length(); j++)
		{	
			num2 = numOne[j];
			if (numTwo[i] == numOne[j])
			{
				if (i == j)
				{
					temp++;
				}
				else
				{	
					if (num != num2)
					{
						temp2++;
						num = numOne[j];
					}
				}
			}
			if (j == 3)
			{
				bulls += temp;
				if (temp == 0)
				cows += temp2;
				temp = 0;
				temp2 = 0;		
			}
		}	
	}
	cout <<"bulls "<< bulls << " cows " << cows<<endl;
}
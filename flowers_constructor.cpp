#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include "flowers_constructor.h"

int main()
{
	int number1;
	string color1;
	
	cout << "How many flowers do you wish to purchase?" << endl;
	cin >> number1;
	
		if (number1 > 20)
		{
			while (number1 > 20)
			{
				cout << "I'm sorry but, we only allow maximum purchase of 20 flowers. Please enter another quantity." << endl;
				cin >> number1;
			}
		}
	
		else if (number1 < 20)
		{
			cout << "What color is the flower or flowers you wish to purchase?" << endl;
		}
	
	for(int i = 0; i < number1; i++)
	{
		cout << "Flower " << i+1 << " color is: ";
		cin >> color1;
	}

	flowers f;
	
	f.setAll(color1,number1);
  
	return 0;
}


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int numFlowers;
int numRoses;
int numLilys;

int main()
{
	int flowernum;
	string answer;
	string a,b,c,d,e,f,g,h,i,j;

	cout << "How many flowers do you wish to purchase" << endl;
	cin >> numFlowers;
	
	if (numFlowers > 10)
	{
		while (numFlowers > 10)
		{
			cout << "I'm sorry but we only sell up to 10 flowers at a time. Please enter valid purchase number" << endl;
			cin >> numflowers;
		}
	}
	string flowers[numFlowers];
  
  cout << "What color is each flower" << endl;
  
  for (int i = 0; i < numFlowers; i++)
  {
    cout << "The color of flower " << i+1 << " is: ";
    cin >> flowers[i];
  }
	
	if (numFlowers == 1)
	{
		a = flowers[0];
	}
	else if (numFlowers == 2)
	{
		a = flowers[0];
		b = flowers[1];
	}
	else if (numFlowers == 3)
	{
		a = flowers[0];
		b = flowers[1];
		c = flowers[2];
	}
	else if (numFlowers == 4)
	{
		a = flowers[0];
		b = flowers[1];
		c = flowers[2];
		d = flowers[3];
	}
	else if (numFlowers == 5)
	{
		a = flowers[0];
		b = flowers[1];
		c = flowers[2];
		d = flowers[3];
		e = flowers[4];
	}
	else if (numFlowers == 6)
	{
		a = flowers[0];
		b = flowers[1];
		c = flowers[2];
		d = flowers[3];
		e = flowers[4];
		f = flowers[5];
	}
	else if (numFlowers == 7)
	{
		a = flowers[0];
		b = flowers[1];
		c = flowers[2];
		d = flowers[3];
		e = flowers[4];
		f = flowers[5];
		g = flowers[6];
	}
	else if (numFlowers == 8)
	{
		a = flowers[0];
		b = flowers[1];
		c = flowers[2];
		d = flowers[3];
		e = flowers[4];
		f = flowers[5];
		g = flowers[6];
		h = flowers[7];
	}
	else if (numFlowers == 9)
	{
		a = flowers[0];
		b = flowers[1];
		c = flowers[2];
		d = flowers[3];
		e = flowers[4];
		f = flowers[5];
		g = flowers[6];
		h = flowers[7];
		i = flowers[8];
	}
	else if (numFlowers == 10)
	{
		a = flowers[0];
		b = flowers[1];
		c = flowers[2];
		d = flowers[3];
		e = flowers[4];
		f = flowers[5];
		g = flowers[6];
		h = flowers[7];
		i = flowers[8];
		j = flowers[9];
	} 
	
  cout << endl; 
	
  cout << "How many flowers are roses " << endl;
  cin >> numRoses;
	
	if (numRoses > numFlowers)
	{
		while (numRoses > numFlowers)
		{
			cout << "I'm sorry but you only want to purchase " << numflowers << " Please enter valid number." << endl;
			cin >> numRoses;
		}
	}
	
	cout << "Which flowers are roses " << endl;
	
	for (int i = 0; i < numRoses; i++)
	{
		cin >> answer;
	
		if (answer == "1")
		{
			cout << "The color of Rose " << i + 1 << " is: " << a << endl;
		}
		
		if (answer == "2")
		{
			cout << "The color of Rose " << i + 1 << " is: " << b << endl;
		}
		
			if (answer == "3")
		{
			cout << "The color of Rose " << i + 1 << " is: " << c << endl;
		}
		
			if (answer == "4")
		{
			cout << "The color of Rose " << i + 1 << " is: " << d << endl;
		}
		
			if (answer == "5")
		{
			cout << "The color of Rose " << i + 1 << " is: " << e << endl;
		}
		
			if (answer == "6")
		{
			cout << "The color of Rose " << i + 1 << " is: " << f << endl;
		}
		
			if (answer == "7")
		{
			cout << "The color of Rose " << i + 1 << " is: " << g << endl;
		}
		
			if (answer == "8")
		{
			cout << "The color of Rose " << i + 1 << " is: " << h << endl;
		}
		
			if (answer == "9")
		{
			cout << "The color of Rose " << i + 1 << " is: " << i << endl;
		}
		
			if (answer == "10")
		{
			cout << "The color of Rose " << i + 1 << " is: " << j << endl;
		}
	}
  return 0;
}

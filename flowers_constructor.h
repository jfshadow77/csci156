#ifndef Flower_H
#define Flower_H
using namespace std;

class flowers
{
	private:
		double price;
		double height;
		double weight;
		static int numofFlowers;
		
		struct rainbow
		{
			string white;
			string blue;
			string yellow;
			string green;
			string red;
			string pink;
			string purple;
			string orange;
		};
		
		string colors[8] = {"white","blue","yellow","green","red","pink","purple","orange"};
		
	public:
		int getHeight(){return height;}
		int getWeight(){return weight;}
		string a,b,c,d,e,f,g,h,i,j;
		void setHeight(int cm){ height = cm; }
		void setWeight(int g){ weight = g; }
		void sale();
		
    	flowers(int);
			~flowers();
			
			static int getNumOfFlowers() { return numofFlowers; }
};

int flowers::numofFlowers = 0;

void flowers::sale()
{
	rainbow color;
	int numFlowers;
	string answer;
//	string a,b,c,d,e,f,g,h,i,j;
	
	cout << "This is the overloaded function" << endl;
	
	cout << "How many flowers do you wish to purchase" << endl;
	cin >> numFlowers;
	
		if (numFlowers > 10)
	{
		while (numFlowers > 10)
		{
			cout << "I'm sorry but we only sell up to 10 flowers at a time. Please enter valid purchase number" << endl;
			cin >> numFlowers;
		}
	}
	string flowers[numFlowers];
	
	 cout << "We offer ";
	
		for (int c = 0; c > 8; c++)
		{
			colors[c];
		}
  
  cout << "What color is each flower" << endl;
  
  for (int i = 0; i < numFlowers; i++)
  {
    cout << "The color of flower " << i+1 << " is: ";
    cin >> flowers[i];
	/*	
		if (flowers[i] != color.red || color.blue || color.green || color.purple || color.pink || color.white || color.yellow || color.orange)
			{
				cout << "Please enter a color from the list of colors we offer" << endl;
				cin >> flowers[i];
			}
			*/
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
	
}

flowers::flowers(int numFlowers)
{
	this -> flowers::numofFlowers = numFlowers;
	double weight;
	double height;
	
	rainbow color;
	string answer;
	string a,b,c,d,e,f,g,h,i,j;
	
	if (numFlowers > 10)
	{
		while (numFlowers > 10)
		{
			cout << "I'm sorry but we only sell up to 10 flowers at a time. Please enter valid purchase number" << endl;
			cin >> numFlowers;
		}
	}
	string flowers[numFlowers];
	
  cout << "We offer ";
	
		for (int c = 0; c > 8; c++)
		{
			colors[c];
		}
	
  cout << "What color is each flower" << endl;
	
  for (int i = 0; i < numFlowers; i++)
  {
    cout << "The color of flower " << i+1 << " is: ";
    cin >> flowers[i];
		
		
		/*	
			if (flowers[i] != color.red || color.blue || color.green || color.purple || color.pink || color.white || color.yellow || color.orange)
			{
				cout << "Please enter a color from the list of colors we offer" << endl;
				cin >> flowers[i];
			}
			*/
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
	
	cout << "What is the weight of the flower in grams. Please just put number" << endl;
	
	for (int i = 0; i < numFlowers; i++)
  {
    cout << "The weight of flower " << i+1 << " is: ";
    cin >> weight;
	}
	
	cout << endl;
	
	cout << "What is the height of the flower in cm. Please just put number" << endl;
	
	for (int i = 0; i < numFlowers; i++)
  {
    cout << "The height of flower " << i+1 << " is: ";
    cin >> height;
	}
	
	cout << endl; 
	
	if (numofFlowers == 1)
	{
	cout << endl;
	cout << "That is a very nice choice of flower." << endl;
	cout << endl;
	}
	else if (numofFlowers > 1)
	{
		cout << endl;
		cout << "These are very nice choice of flowers." << endl;
		cout << endl;
	}
}

flowers::~flowers()
{
	if (numofFlowers == 1)
	{
		cout << numofFlowers << " " << "flower has been sold. Thank you for your purchase" << endl;
	}
	else if (numofFlowers > 1)
	{
		cout << numofFlowers << " " << "flowers have been sold. Thank you for your purchase" << endl;
	}
	else
	{
		cout << "Thank you. Come again" << endl;
	}
}

class roses : public flowers
{
	private:
		int numRoses;
		
	public:
		int getnumRoses(){return numRoses;}
		int setnumRoses();
		
		roses(int,int);
		roses : flowers(int){}; //This line was giving me a ton of errors.
		
};

roses::roses(int numFlowers,int numRoses) : flowers(numFlowers)
{
	string answer;
	
		if (numRoses > numFlowers)
	{
		while (numRoses > numFlowers)
		{
			cout << "I'm sorry but you only want to purchase " << numFlowers << " Please enter valid number." << endl;
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
	
#endif



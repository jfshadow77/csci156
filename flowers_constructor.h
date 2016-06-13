#ifndef Flower_H
#define Flower_H
using namespace std;

class flowers
{
	private:
		string color;
		double price;
		static int numofFlowers;

	public:
		void setColor(string color) {color = color;}
	//	void setPrice(double price) {price = price;}
		void setAll(string/*,string, string, double*/, int);
		
		string getColor() { return color; }
	//	double getPrice() { return price; }
		
    	flowers();
			~flowers();
			
			static int getNumOfFlowers() { return numofFlowers; }
};

int flowers::numofFlowers = 0;

void flowers::setAll(string color/*, double price*/, int numofFlowers)
{
	this -> color = color;
//	this -> price = price;
	this -> flowers::numofFlowers = numofFlowers++;
}

flowers::flowers()
{
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

#endif



#ifndef FLOWERS_H
#define FLOWERS_H 
using namespace std;

class Flowers
{
	private:
		string type;
		string color;
		string texture;
		double price;

	public:
    string getType(){return type;}
    string getColor(){return color;}
    string getTexture(){return texture;}
    double getPrice(){return price;}
  
       void setType(string);
		   void setColor(string); 
	     void setTexture(string);
	     void setPrice(double);
       void setAll(string, string, string, double);
  
    Flowers(string, string, string, double);
   //~flowers();
    Flowers();
  
       void toString();
};

void Flowers::setAll(string type, string color, string texture, double price)
{
  this -> type = type;
  this -> color = color;
  this -> texture = texture;
  this -> price = price;
}

void Flowers::Flowers(string type, string color, string texture, double price)
{
  this -> type = type;
  this -> color = color;
  this -> texture = texture;
  this -> price = price;
}

void Flowers::toString()
{
  cout << "The color of your flower is " << this -> color << endl;
  cout << "The type of flower you have is a rose " << this -> type << endl;
  cout << "The texture of the flower is " << this -> texture << endl;
  cout << "The price of the flower is " << this -> price << endl;
}

#endif 

/*void setColor(string c)
{
	if (color != "red" || "blue" || "yellow" || "green" || "purple" || "white" || "black")
	{
		while (color != "red" || "blue" || "yellow" || "green" || "purple" || "white" || "black")
		{
			cout << "Please enter a valid color primary color" << endl;
			cin >> color;
			break;
		}
		break;
	}

	else 
	{
		color = c;
	}
}*/


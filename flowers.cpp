#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include "flowers.h"


int main()
{
	string type1;
  string color1;
  string texture1;
  double price1;
  string name;
  string answer;
  
  cout << "Hello my name is Northern Light. What's yours?" << endl;
  cin >> name;
  
  cout << "Okay Hello " << name << endl;

	cout << "What type of flower do you have?" << endl;
	cin >> type1;
	
  cout << "What is the color of the flower?" << endl;
  cin >> color1;
  
  cout << "What is the texture of the flower?" << endl;
  cin >> texture1;
  
  cout << "What is was the price of the flower?" << endl;
  cin >> price1;
  
  Flowers f;
  
  cout << "Okay " << name << " so:" << endl;
  
  f.setAll(type1, color1, texture1, price1);
  
  cout << "So does this look correct " << name << endl;
  cin >> answer;
  
      if(answer == "yes")
      {
        cout << "Thank you, I hope this was helpful bye." << endl;
      }
      else
      {
        cout << "I'm sorry I'll do better next time." << endl;
      }
  
  
    return 0;
}


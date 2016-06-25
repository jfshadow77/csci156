#include <iostream>
#include <string>
#include "flowers.h"

int main()
{
  int numflowers;
  
  cout << "How many flowers do you wish to purchase" << endl;
  cin >> numflowers;
  
  flowers f;
  
  f.Info_1(numflowers);
  f.Info_1();
  
  roses r;
  
  r.Info_2();
  
  return 0;
}
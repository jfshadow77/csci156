#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include "flowers_constructor.h"

int numFlowers;
int numRoses;

int main()
{	
	cout << "How many flowers do you wish to purchase" << endl;
	cin >> numFlowers;
	
	flowers f;
	
	f.sale(numFlowers);
	f.sale();
	
	cout << "How many flowers are roses" << endl;
	cin >> numRoses;
	
	roses r;
	
	r.purchase(numFlowers,numRoses);

	return 0;
}


#ifndef FLOWERS_H
#define FLOWERS_H
using namespace std;

class flowers
{
  protected:
    static int numflowers;
    static string a,b,c,d,e;
  
   struct rainbow
		{
			 array<string,8> list = {"white","blue","yellow","green","red","pink","purple","orange"};
		};
    
   public:    
    void Info_1(int flowers)
    {
      numflowers = flowers;
        	if (numflowers > 5)
	        {
		        while (numflowers > 5)
		        {
			        cout << "I'm sorry but we only sell up to 5 flowers at a time. Please enter valid purchase number" << endl;
			        cin >> numflowers;
	        	}
	        }
          
			rainbow color; 
      cout << endl;
      cout << "What is the color for each flower you wish to purchase" << endl;
      cout << endl;
      cout << "We offer ";
	
		    for (int k = 0; k < 8; k++)
		    {
			    cout << color.list[k] << "/";
		    }
				
				cout << " flowers" << endl;
        
        cout << endl;
        cout << endl;
        
   		  string colors[numflowers];
			 	
        	for (int i = 0; i < numflowers; i++) 
        	{
						cout << "The color of flower " << i+1 << " is: ";
   			  	cin >> colors[i]; 
					}
					
  if (numflowers == 1)
	{
		a = colors[0];
	}
	else if (numflowers == 2)
	{
		a = colors[0];
		b = colors[1];
	}
	else if (numflowers == 3)
	{
		a = colors[0];
		b = colors[1];
		c = colors[2];
	}
	else if (numflowers == 4)
	{
		a = colors[0];
		b = colors[1];
		c = colors[2];
		d = colors[3];
	}
	else if (numflowers == 5)
	{
		a = colors[0];
		b = colors[1];
		c = colors[2];
		d = colors[3];
		e = colors[4];
	}
    cout << endl;
  } 
  
  void Info_1()
  {
    string name;
    cout << "This is a overload function" << endl;
    cout << "Hello, what your name?" << endl;
    cin >> name;
    cout << "Hello, " << name << endl;
    cout << endl;
  }
  
  flowers();
  ~flowers();
  
  static int getnumflowers() { return numflowers; }
  static string getA() {return a;}
  static string getB() {return b;}
  static string getC() {return c;}
  static string getD() {return d;}
  static string getE() {return e;}
  
    
};

int flowers::numflowers = 0;
string flowers::a;
string flowers::b;
string flowers::c;
string flowers::d;
string flowers::e;

flowers::flowers()
{
  if (numflowers == 1)
	{
	cout << endl;
	cout << "That is a very nice choice of flower." << endl;
	cout << endl;
	}
	else if (numflowers > 1)
	{
		cout << endl;
		cout << "These are very nice choice of flowers." << endl;
		cout << endl;
	}
}

flowers::~flowers()
{
  if (numflowers == 1)
	{
		cout << numflowers << " " << "flower has been sold. Thank you for your purchase" << endl;
	}
	else if (numflowers > 1)
	{
		cout << numflowers << " " << "flowers have been sold. Thank you for your purchase" << endl;
	}
	else
	{
		cout << "Thank you. Come again" << endl;
	}
}

class roses : public flowers
{
  protected:
    int numRoses;
    
    public:
      void Info_2()
      {   
        string answer;
        
        cout << "How many flowers are roses: ";
        cin >> numRoses;
	
		    if (numRoses > numflowers)
	      {
		      while (numRoses > numflowers)
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
		   }
       
        cout << endl;
    }
};


#endif
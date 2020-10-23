#include <iostream>
#include <cmath>

using namespace std;

int radius;

int circumference;

double TwicepiValue;

void calcCircleCircumference() 
{
	
    cout << "What is the radius of the circle?" << endl;
    cin  >> radius;
    
    TwicepiValue = 6.28;
        
    circumference = radius * TwicepiValue;
    
    cout << "Circumference is" << circumference << endl; 
    
}

int main()
{
	
	calcCircleCircumference();
	
}

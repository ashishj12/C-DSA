
#include<bits/stdc++.h>
using namespace std;

// class 
class Circle
{
	public: 
		double radius;
		
		double compute_area()
		{
			return 3.14*radius*radius;
		}
	
};
int main()
{
	Circle obj;
	
	// accessing public datamember outside class
	obj.radius = 5.5;
	
	cout << "Radius is: " << obj.radius << "\n";
	cout << "Area is: " << obj.compute_area();
	return 0;
}

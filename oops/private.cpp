
#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;

public:
    void compute_area(double r)

    {

        // member function can access private
        // data member radius
        radius = r;

        double area = 3.14 * radius * radius;
        cout << "Radius is: " << radius << endl;
        cout << "Area is: " << area;
    }
};

int main()
{

    // creating object of the class
    Circle obj;
    // trying to access private data member
    // directly outside the class
    obj.compute_area(1.5);

    return 0;
}

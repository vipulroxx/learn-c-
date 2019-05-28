#include <iostream>
using namespace std;
class functionOverloading
{
    public:
    int volume(int);
    double volume(double, int);
    double volume(double, int, int);
};
int functionOverloading::volume(int s)
{
    return (s*s*s);
}
double functionOverloading::volume(double r, int h)
{
    return (3.14*r*r*h);
}
double functionOverloading::volume(double l, int b, int h)
{
    return (l*b*h);
}
int main()
{
    functionOverloading ob;
    cout << "Volume of a cube with length 10 units = " << ob.volume(10) << " squared units" << "\n";
    cout << "Volume of a cylinder with radius 2.5 and height 8 units = " << ob.volume(2.5, 8) << " cubic units" << "\n";
    cout << "Volume of a cuboid with length  = 10.5, breadth = 7 and height 5 units = " << ob.volume(10.5, 7, 5) << " cubic units" << "\n";
}

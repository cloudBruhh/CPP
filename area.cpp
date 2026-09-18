#include <iostream>
using namespace std;

class Area {
private:
  double length;
  double width;
  double radius;

public:
  double area(double radius) { return 3.14 * radius * radius; }

  double area(double length, double width) { return length * width; }
};

int main() {
  Area a;
  double r, l, w;

  cout << "Enter the radius of the circle: ";
  cin >> r;
  cout << "Area of the circle: " << a.area(r) << endl;

  cout << "Enter the length and width of the rectangle: ";
  cin >> l >> w;
  cout << "Area of the rectangle: " << a.area(l, w) << endl;

  return 0;
}

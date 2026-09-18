#include <iostream>
using namespace std;
class Circle {
private:
  double radius;

public:
  void input() {
    cout << "Enter the radius of the circle: ";
    cin >> radius;
  }

  void display() {
    cout << "Area of the circle: " << 3.14 * radius * radius << endl;
  }
};
int main() {
  Circle c;
  c.input();
  c.display();
  return 0;
}

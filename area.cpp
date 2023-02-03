#include <iostream>
using namespace std;

class Circle{
  private:
    double radius;
  public :
    void area(double r){
      radius = r;
      double area = 3.14*radius*radius;
      cout << "the radius of the circle is : " << radius << endl;
      cout << "the area of the circle is : " << area;
    }
};
int main(){
  int rad;
  cout << "Enter the radius of the circle : ";
  cin >> rad;
  Circle obj;
  obj.area(rad);
  return 0;
}

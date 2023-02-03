#include<iostream>
#include<cmath>
using namespace std;

class secondPoint;//forward declaration
class firstPoint{
    public:
        int x1,y1;
        void getData(){
            cout << "Enter the x1: ";
            cin >> x1;
            cout << "Enter the y1: ";
            cin >> y1;
        }
        void display(){
            cout << "x1 value is : " << x1 << endl;
            cout << "y1 value is : " << y1 << endl;
            }
    friend void distance(firstPoint,secondPoint);
};

class secondPoint{
    public:
        int x2,y2;
        void getData(){
            cout << "Enter the x2: ";
            cin >> x2;
            cout << "Enter the y2: ";
            cin >> y2;
        }
        void display(){
            cout << "x2 value is : " << x2 << endl;
            cout << "y2 value is : " << y2 << endl;
            }
    friend void distance(firstPoint,secondPoint);
};

void distance(firstPoint one,secondPoint two){
    float d;
    d = sqrt((two.x2-one.x1)*(two.y2-one.y1));
    cout << d;
}

int main(){
    firstPoint one;
    one.getData();
    secondPoint two;
    two.getData();
    distance(one,two);
    return 0;
}
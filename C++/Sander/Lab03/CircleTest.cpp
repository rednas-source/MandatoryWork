
#include <iostream>
using namespace std;

int main() {
    Circle circle(5);  // Create a circle with radius 5
    double area = circle.get_area();  // Get the area of the circle
    cout << "Arealet er lik " << area << endl;
    
    double circumference = circle.get_circumference();  // Get the circumference
    cout << "Omkretsen er lik " << circumference << endl;
}
    
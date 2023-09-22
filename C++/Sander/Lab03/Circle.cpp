
// Define a constant for the value of pi
const double pi = 3.141592;

// Define a Circle class
class Circle {
public:
    Circle(double radius_);  // Constructor with radius parameter
    double get_area() const;  // Return area of the circle
    double get_circumference() const;  // Return circumference of the circle

private:
    double radius;  // Private member to hold the radius
};

// Constructor implementation
Circle::Circle(double radius_) : radius(radius_) {}

// Method to compute and return area
double Circle::get_area() const {
    return pi * radius * radius;
}

// Method to compute and return circumference
double Circle::get_circumference() const {
    double circumference = 2.0 * pi * radius;
    return circumference;
}
    
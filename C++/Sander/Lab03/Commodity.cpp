
// Define a constant for the sales tax
const double SALES_TAX = 0.25;

// Define a Commodity class
class Commodity {
public:
    Commodity(const std::string& name, int id, double price);
    
    std::string get_name() const;  // Return the name of the commodity
    int get_id() const;  // Return the ID of the commodity
    double get_price(double quantity = 1) const;  // Return price for specified quantity
    void set_price(double new_price);  // Set a new price
    double get_price_with_sales_tax(double quantity = 1) const;  // Return price with sales tax for specified quantity

private:
    std::string name;  // Name of the commodity
    int id;  // ID of the commodity
    double price;  // Price per unit
};

// Implementation of the Commodity class
Commodity::Commodity(const std::string& name_, int id_, double price_)
    : name(name_), id(id_), price(price_) {}

std::string Commodity::get_name() const {
    return name;
}

int Commodity::get_id() const {
    return id;
}

double Commodity::get_price(double quantity) const {
    return price * quantity;
}

void Commodity::set_price(double new_price) {
    price = new_price;
}

double Commodity::get_price_with_sales_tax(double quantity) const {
    return get_price(quantity) * (1 + SALES_TAX);
}
    
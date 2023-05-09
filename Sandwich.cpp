#include "Sandwich.h"
#include <sstream>
#include <iomanip>
using namespace std;

Sandwich::Sandwich() {

}

//base constructor to create a sandwich
Sandwich::Sandwich(string meat, vector<string> toppings, bool toasted, double price) {
    set_ingredients(meat, toppings);
    this->toasted = toasted;
    this->price = price;
}


//changes the sandwiches ingredients
void Sandwich::set_ingredients(string meat, vector<string> toppings) {
    this->meat = meat;
    this->toppings = toppings;
}

//changes the sandwiches meat parameter
void Sandwich::set_meat(string meat) {
    this->meat = meat;
}

//adds a topping to the sandwich
void Sandwich::add_topping(string topping) {
    toppings.push_back(topping);
}

//changes the sandwiches is toasted parameter
void Sandwich::set_toasted(bool toasted) {
    this->toasted = toasted;
}

//changes the sandwiches price parameter
void Sandwich::set_price(double price) {
    this->price = price;
}

//returns string of the meat
string Sandwich::get_meat() {
    return meat;
}

//returns vector representing sandwiches toppings
vector<string> Sandwich::get_toppings() {
    return toppings;
}

//returns bool of if sandwich is toasted
bool Sandwich::get_toasted() const{
    return toasted;
}

//returns double of sandwich's price
double Sandwich::get_price() const {
    return price;
}

//returns a vector of strings representing the ingredients
vector<string> Sandwich::get_ingredients() {
    vector<string> ingredients;
    for (int i=0;i<toppings.size();i++) {
        ingredients.push_back(toppings[i]);
    }
    ingredients.push_back(meat);
    return ingredients;
}

//returns a string representing the sandwich chosen
string Sandwich::get_sandwich(){
    string sandwich = "";
    if(toasted)
        sandwich.append("Toasted");
    sandwich.append(meat+" Sandwich with:\n");
    for (int i=0;i<toppings.size();i++)
        sandwich.append(toppings[i]+"\n");
    stringstream ss;
    ss << fixed << setprecision(2) << price;
    sandwich.append("\n$"+to_string(price));

    return sandwich;
}

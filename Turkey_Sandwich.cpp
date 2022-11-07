#include "Turkey_Sandwich.h"
using namespace std;

//base constructor calls super constructor
Turkey_Sandwich::Turkey_Sandwich() : Sandwich("Turkey", vector<string> {"Cranberry","Cranberry sauce",
                                                    "Cheddar Cheese","Garlic Spread"},false, 11.99) {
    //default behavior for this sandwich class
    extra_cheese= false;
    cranberry_sauce= true;
}

//turkey sandwich constructor that uses a call to its parent constructor
Turkey_Sandwich::Turkey_Sandwich(vector<string> toppings, bool toasted, bool ext_cheese, bool bool_cran, double price)
:Sandwich("Turkey", toppings, toasted, price) {

    //assign value to class's extra meat field from input from constructor
    extra_cheese= ext_cheese;

    //true for additional free cranberry sauce, else false for no sauce
    cranberry_sauce= bool_cran;
}

//setter for if the person ordered exxtraa cheese
void Turkey_Sandwich::set_extra_cheese(bool extra_cheese) {
    this->extra_cheese = extra_cheese;
}

//getter for if the person ordered exxtraa cheese
bool Turkey_Sandwich::get_extra_cheese() {
    return extra_cheese;
}

//setter for if the person ordered cranberry sauce on their sandwich or not
void Turkey_Sandwich::set_cranberry_sauce(bool cranberry_sauce) {
    this->cranberry_sauce = cranberry_sauce;
}

//getter for if the person ordered cranberry sauce on their sandwich or not
bool Turkey_Sandwich::get_cranberry_sauce() {
    return cranberry_sauce;
}

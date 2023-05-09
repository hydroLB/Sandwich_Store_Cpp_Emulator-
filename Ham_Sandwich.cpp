#include "Ham_Sandwich.h"
using namespace std;


//base constructor calls super constructor
Ham_Sandwich::Ham_Sandwich() : Sandwich("Ham",
                                        vector<string> {"aioli","hot sauce","bacon bits","Garlic Spread"},
                                        false,
                                        12.99) {

    //default behavior for this sandwich class
    extra_meat= false;
    //true if person orders duck fries, false if they choose shoestring
    true_duck_fries= false;
}

//non default constructor call to super class plus additional unique subclass fields (extra meat and fry choice)
Ham_Sandwich::Ham_Sandwich(vector<string> toppings, bool toasted, bool ex_meat, bool fry_choice, double price) :
Sandwich("Ham", toppings, toasted, price) {

//The Ham class has an additional bool extra meat or not
//and comes with a choice of duck-fat fries, or shoestring fries

    //true for extra meat, else false for normal amount
    extra_meat= ex_meat;
    //true if person chose duck fries, false if they chose shoestring
    true_duck_fries= fry_choice;
}

//setter for if the person ordered extra meat
void Ham_Sandwich::set_extra_meat(bool extra_meat) {
    this->extra_meat = extra_meat;
}

//getter for if the person ordered extra meat
bool Ham_Sandwich::get_extra_meat() {
    return extra_meat;
}

//setter for if the person ordered duck fries on their sandwich or not
void Ham_Sandwich::set_true_duck_fries(bool true_duck_fries) {
    this->true_duck_fries = true_duck_fries;
}

//getter for if the person ordered duck fries on their sandwich or not
bool Ham_Sandwich::get_true_duck_fries() {
    return true_duck_fries;
}
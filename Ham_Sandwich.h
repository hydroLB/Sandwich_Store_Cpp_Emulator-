#ifndef HAM_SANDWICH_H
#define HAM_SANDWICH_H

#include "Sandwich.h"
using namespace std;

class Ham_Sandwich : public Sandwich {
public:
    //true if person orders extra meat option, else false
    bool extra_meat;
    //true if person order duck fries, else false
    bool true_duck_fries;

    // Effects: calls parent default constructor
    Ham_Sandwich();

    //Requires: toppings, toasted, extra meat, fry choice
     //Modifies: meat, toppings, toasted, extra meat, fry choice, price
     //Effects: calls parent non-default constructor
    explicit Ham_Sandwich(vector<string> toppings, bool toasted, bool ex_meat, bool fry_choice, double price);

    //sets extra meat field to new_value (T/F)
    void set_extra_meat(bool extra_meat);

    //Gets extra meat field and returns (T/F)
    bool get_extra_meat();

    //sets duck fries field to new_value (T/F)
    void set_true_duck_fries(bool true_duck_fries);

    //Gets duck fries field and returns (T/F)
    bool get_true_duck_fries();
};

#endif

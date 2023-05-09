#ifndef CHICKEN_SANDIWICH_H
#define CHICKEN_SANDIWICH_H

#include "Sandwich.h"
using namespace std;

class Chicken_Sandwich : public Sandwich {
protected:
    //personal class variable
    bool has_salad;

public:

     //Effects: calls parent default constructor

     Chicken_Sandwich();

    //Effects: calls parent non-default constructor

    explicit Chicken_Sandwich(vector<string> toppings, bool toasted, bool has_salad, double price);


    //sets salad field to new_value (T/F)
    void set_salad(bool has_salad);

    //Gets salad field and returns (T/F)
    bool get_salad();

};

#endif

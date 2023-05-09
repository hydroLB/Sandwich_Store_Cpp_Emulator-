#include "Chicken_Sandwich.h"
using namespace std;

//default behavior for chicken sandwich will call parent class constructor and fill in salad
Chicken_Sandwich::Chicken_Sandwich() : Sandwich("Chicken",
                                                vector<string> {"Lettuce","Tomato","Mozzarella","Garlic Spread"},
                                                false,
                                                8.99) {
    //class' protected instance field
    has_salad = false;
}

//calls sandwich parent class and then adds its own additional field
//whether they got a salad on the side or not

//price is taken from the input value to the chicken sandwich constructor
Chicken_Sandwich::Chicken_Sandwich(vector<string> toppings, bool toasted, bool has_sal, double price) :
Sandwich("Chicken", toppings,toasted, price)
{
    //class' protected instance field
    has_salad = has_sal;
}


//setter for if the person ordered a salad or not
void Chicken_Sandwich::set_salad(bool has_salad) {
    this->has_salad = has_salad;
}

//getter for if the person ordered a salad or not
bool Chicken_Sandwich::get_salad() {
    return has_salad;
}
#ifndef M2OEP_NETID_LBOURAMI_TURKEY_SANDWICH_H
#define M2OEP_NETID_LBOURAMI_TURKEY_SANDWICH_H

#include "Sandwich.h"
using namespace std;

class Turkey_Sandwich : public Sandwich {
protected:
    //true for more meat, else false
    bool extra_cheese;
    //true for additional free cranberry sauce, else false for no sauce
    bool cranberry_sauce;
public:
    //Effects: calls parent default constructor
    Turkey_Sandwich();

     // Effects: calls parent non-default constructor
    explicit Turkey_Sandwich(vector<string> toppings, bool toasted, bool extra_cheese, bool cranberry_sauce, double price);

    //sets salad field to new_value (T/F)
    void set_extra_cheese(bool extra_cheese);

    //Gets salad field and returns (T/F)
    bool get_extra_cheese();

    //sets salad field to new_value (T/F)
    void set_cranberry_sauce(bool cranberry_sauce);

    //Gets salad field and returns (T/F)
    bool get_cranberry_sauce();

};

#endif

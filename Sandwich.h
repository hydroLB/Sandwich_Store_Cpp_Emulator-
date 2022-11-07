#ifndef Sandwich_H
#define Sandwich_H

#include <string>
#include <vector>


class Sandwich {
public:
    /**
     * Requires: nothing
     * Modifies: number_of_ingredients, meat, toppings, toasted, price, ingredients
     * Effects: sets number_of_ingredients to a random int in range 2-100
     */
    Sandwich();

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: does nothing
     */
    virtual ~Sandwich() = default;

    /**
     * Requires: nothing
     * Modifies: number_of_ingredients, meat, toppings, toasted, price, ingredients
     * Effects: calls choose_meat with meat,
     */
    explicit Sandwich(std::string meat, std::vector<std::string> toppings, bool toasted, double price);

    /**
     * Requires: nothing
     * Modifies: number_of_ingredients
     * Effects: sets number_of_ingredients to noe if noe is in range 2-100.
     *          otherwise sets number_of_ingredients to 100.
     */
    //sets the ingredients
    void set_ingredients(std::string meat, std::vector<std::string> toppings);

    //sets the value of meat
    void set_meat(std::string meat);

    //sets the value of topping
    void add_topping(std::string topping);

    //sets the value of toasted
    void set_toasted(bool meat);

    //sets the value of price
    void set_price(double price);

    //returns the value of meat
    std::string get_meat();

    //returns the value of topping
    std::vector<std::string> get_toppings();

    //returns the value of toasted
    bool get_toasted() const;

    //returns the value of price
    double get_price() const;

    /**
     * Requires: nothing
     * Modifies: number_of_ingredients
     * Effects: if number_of_ingredients is at least 1, decrements number_of_ingredients by one and returns true.
     *          otherwise sets number_of_ingredients to a random number between 5 and MAX_NUMBER_EYES and returns false.
     */
    //returns the ingredients in the sandwich
    std::vector<std::string> get_ingredients();

    //returns a formatted string with sandwich information
    std::string get_sandwich();


protected:
    //string meat of sandwich class
    std::string meat;

    //vector of toppings
    std::vector<std::string> toppings;

    // bool toasted of sandwich class
    bool toasted;

    //double price of sandwich class
    double price;

};

#endif

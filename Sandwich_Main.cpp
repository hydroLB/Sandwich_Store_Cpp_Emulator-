#include "Chicken_Sandwich.h"
#include "Ham_Sandwich.h"
#include "Turkey_Sandwich.h"
#include <iostream>
#include <memory>
#include <vector>
#include <fstream>

using namespace std;

//creates an instance of the restaurant to display to user:
int main() {

    cout << "Welcome to Leon's Sandwich Shop!\nPlease take a look at our menu below:\n\n1. Ham Sandwich\n";
    cout << "    Ham with apples, cheddar cheese, and mayo, toasted to perfection, with a side of duck fat fries\n    $13.99\n";
    cout << "2. Chicken Sandwich\n    Chicken breast with lettuce, tomato , mozzarella, and garlic spread on un-toasted bread, with a side salad\n    $9.99\n";
    cout << "3. Turkey Sandwich\n    Turkey with cranberry spread, lettuce, and chevre, toasted, with a small hearty loaded potato soup\n    $11.99\n";
    cout << "4. Build Your Own Sandwich\n    Choose from our 3 meats and selection of toppings\n";

    string input = "";
    vector<unique_ptr<Sandwich>> order;

    //keep getting user input until stop word is received
    while(input != "done") {

        cout << "\nPlease select one of the options off our menu by entering a number 1-4: ";
        //get user input
        getline(cin, input);
        // Input validation
        while (input.size() != 1 || (input != "1" && input != "2" && input != "3" && input != "4")) {
            // Print "Invalid input. Try again: " to cout
            // Use getline to read from cin into input
            cout << "Invalid input. Please enter 1-4: ";
            getline(cin, input);
        }
        //user submitted choices
        if (input == "1") {

            Sandwich ham = *new Ham_Sandwich();
            order.push_back(make_unique<Sandwich>(ham));
            //user submitted choices
        } else if (input == "2") {

            Sandwich chick = *new Chicken_Sandwich();
            order.push_back(make_unique<Sandwich>(chick));

            //user submitted choices
        } else if (input == "3"){

            Sandwich turkey = *new Turkey_Sandwich();
            order.push_back(make_unique<Sandwich>(turkey));
            //user submitted choices
        }else {

            //sandwich variables to hold user input
            string meat, side;
            bool has_side, extra, toasted;
            double price;
            vector<string> toppings;

            cout << "To build your own sandwich, lets start with the meat. We have:\n1. Ham\n2. Chicken\n3. Turkey\nWhich meat would you like (1, 2, or 3):  ";
            //get user input
            getline(cin, input);

            // Input validation
            while (input.size() != 1 || (input != "1" && input != "2" && input != "3")) {
                // Print "Invalid input. Try again: " to cout
                // Use getline to read from cin into input
                // Note that with string/character invalid input, the stream stays in a good state so you do not need to clear the stream or get rid of the junk input like you do with int/float type validation.
                cout << "Invalid input. Try again: ";
                getline(cin, input);
            }

            //user test cases
            if (input == "1") {
                meat = "ham";
                price = 9.99;
            } else if (input == "2") {
                meat = "chicken";
                price = 7.99;
            } else {
                meat = "turkey";
                price = 8.99;
            }

            //user input
            cout << "I will add a " << meat << " sandwich to your order, would you like it toasted? y/n";
            getline(cin, input);

            //input validation
            while (input.size() != 1 || (tolower(input[0]) != 'y' && tolower(input[0]) != 'n')) {
                // Print "Invalid input. Try again: " to cout
                // Use getline to read from cin into input
                cout << "Invalid input. Please enter y or n: ";
                getline(cin, input);
            }

            //user test cases
            if (tolower(input[0]) == 'y') {
                toasted = true;
            } else {
                toasted = false;
            }


            //getting toppings from customer

            //printing out toppings list
            cout << "Please choose from the list of toppings below\n1. Lettuce\n2. Tomato\n3. Mozzarella\n4. Garlic Spread\n5. Mayo\n6. Cheddar Cheese\n";

            //input validation
            while (input != "done") {

                cout << "Enter the number of the topping you would like to add: ";

                //getting toppings
                getline(cin, input);
                while (input.size() != 1 || (input != "1" && input != "2" && input != "3" && input != "4" && input != "5" && input != "6")) {
                    // Print "Invalid input. Try again: " to cout
                    // Use getline to read from cin into input
                    cout << "Invalid input. Try again: ";
                    getline(cin, input);
                }

                //user input cases
                if (input == "1") {
                    toppings.push_back("Lettuce");
                    price += 1;
                } else if (input == "2") {
                    toppings.push_back("Tomato");
                    price += 1;
                } else if (input == "3"){
                    toppings.push_back("Mozzarella");
                    price += 1.5;
                } else if (input == "4") {
                    toppings.push_back("Garlic Spread");
                    price += 1;
                } else if (input == "5") {
                    toppings.push_back("Mayo");
                    price += 1;
                } else {
                    toppings.push_back("Cheddar Cheese");
                    price += 1.5;
                }

                cout << "Press enter to add another topping, enter 'done' to move on\n";
                getline(cin, input);
            }


            if (meat == "chicken") {
                //Adding side to sandwich
                cout << "Would you like a side salad with your sandwich? Enter y or n: ";
                getline(cin, input);

                //input validation
                while (input.size() != 1 || (tolower(input[0]) != 'y' && tolower(input[0]) != 'n')) {
                    // Print "Invalid input. Try again: " to cout
                    // Use getline to read from cin into input
                    cout << "Invalid input. Please enter y or n: ";
                    getline(cin, input);
                }

                //side test cases
                if (tolower(input[0]) == 'y') {
                    has_side = true;
                    price += 3;
                } else {
                    has_side = false;
                }
            } else if (meat == "ham") {
                cout << "Would you like duck fat or shoestring fries on the side? Enter d or s: ";
                getline(cin, input);

                //input validation
                while (input.size() != 1 || (tolower(input[0]) != 'd' && tolower(input[0]) != 's')) {
                    // Print "Invalid input. Try again: " to cout
                    // Use getline to read from cin into input
                    cout << "Invalid input. Please enter y or n: ";
                    getline(cin, input);
                }

                //side test cases
                if (tolower(input[0]) == 's') {
                    side = "shoestring fries";
                } else {
                    side = "duck fat fries";
                }

                cout << "Would you like extra meat on your sandwich? Enter y or n: ";
                getline(cin, input);

                //input validation
                while (input.size() != 1 || (tolower(input[0]) != 'y' && tolower(input[0]) != 'n')) {
                    // Print "Invalid input. Try again: " to cout
                    // Use getline to read from cin into input
                    cout << "Invalid input. Please enter y or n: ";
                    getline(cin, input);
                }

                //side test cases
                if (tolower(input[0]) == 'y') {
                    extra = true;
                    price += 2;
                } else {
                    extra = false;
                }
            } else {
                cout << "Would you like a side of cranberry sauce with your sandwich? Enter y or n: ";
                getline(cin, input);

                //input validation
                while (input.size() != 1 || (tolower(input[0]) != 'y' && tolower(input[0]) != 'n')) {
                    // Print "Invalid input. Try again: " to cout
                    // Use getline to read from cin into input
                    cout << "Invalid input. Please enter y or n: ";
                    getline(cin, input);
                }

                //side test cases
                if (tolower(input[0]) == 'y') {
                    has_side = true;
                    price += 2;
                } else {
                    has_side = false;
                }

                cout << "Would you like extra cheese on your sandwich? Enter y or n: ";
                getline(cin, input);

                //input validation
                while (input.size() != 1 || (tolower(input[0]) != 'y' && tolower(input[0]) != 'n')) {
                    // Print "Invalid input. Try again: " to cout
                    // Use getline to read from cin into input
                    cout << "Invalid input. Please enter y or n: ";
                    getline(cin, input);
                }

                //side test cases
                if (tolower(input[0]) == 'y') {
                    extra = true;
                    price += 3;
                } else {
                    extra = false;
                }
            }


            //creating sandwich cases
            if (meat == "ham") {
                Sandwich ham = *new Ham_Sandwich(toppings, toasted, extra, has_side,price);
                order.push_back(make_unique<Sandwich>(ham));
            } else if (meat == "chicken") {
                Sandwich chicken = *new Chicken_Sandwich(toppings, toasted, has_side, price);
                order.push_back(make_unique<Sandwich>(chicken));
            } else {
                Sandwich turkey = *new Turkey_Sandwich(toppings, toasted, extra, has_side, price);
                order.push_back(make_unique<Sandwich>(turkey));
            }
        }

        cout << "Would you like to add another sandwich to your order? Enter y or n: ";
        //get user input
        getline(cin, input);

        //input validation
        while (input.size() != 1 || (tolower(input[0]) != 'y' && tolower(input[0]) != 'n')) {
            // Print "Invalid input. Try again: " to cout
            // Use getline to read from cin into input
            cout << "Invalid input. Please enter y or n: ";
            getline(cin, input);
        }

        //side test cases
        if (tolower(input[0]) == 'y') {
            input = "";
            cout << "What else would you like to order?\n";
            cout << "1. Ham Sandwich            $13.99\n";
            cout << "2. Chicken Sandwich        $9.99\n";
            cout << "3. Turkey Sandwich         $11.99\n";
            cout << "4. Build Your Own Sandwich\n";
        } else {
            input = "done";
        }

    }


    //holds cost of sandwich as price is added
    double total_cost = 0;
    cout << "\nGreat! I will print a copy of your receipt below. I have also uploaded your receipt to a text file called 'Receipt.txt'!\nWe hope you enjoy your food!\n\n";

    //open file
    ofstream outfile ("/Sandwich_Store_C++_Emulator/Receipt.txt");
    outfile.open("Receipt.txt");

    //writing receipt to outfile
    for(int i=0;i<order.size();i++) {
        outfile << i+1 << ". " << order[i]->get_sandwich() << "\n\n";
        total_cost += order[i]->get_price();
    }
    outfile << "Your total is: $"<< total_cost;
    outfile.close();


    //printing receipt
    for(int i=0;i<order.size();i++) {
        cout << i+1 << ". " << order[i]->get_sandwich() << "\n\n";
    }
    cout << "Your total is: $"<< total_cost;

    return 0;
}


#include "Ham_Sandwich.h"
#include "Chicken_Sandwich.h"
#include "Turkey_Sandwich.h"
#include <iostream>
using namespace std;

bool test_Chicken_Sandwich();
bool test_Ham_Sandwich();
bool test_Turkey_Sandwich();

//main function to run test cases pertaining to the classes
int main() {

    if (test_Chicken_Sandwich()) {
        cout << "Passed all Chicken Sandwich test cases!!!" << endl;
    }
    if (test_Ham_Sandwich()) {
        cout << "Passed all Ham Sandwich test cases!!!" << endl;
    }
    if (test_Turkey_Sandwich()) {
        cout << "Passed all Turkey Sandwich test cases!!!" << endl;
    }
    return 0;
}

//tests the inheritance relationship between sandwich and chicken sandwich class
bool test_Chicken_Sandwich() {
    bool passed = true;
    //create chicken sandwich object
    Chicken_Sandwich chicken;
    if (chicken.get_salad() != false || chicken.get_meat() != "Chicken") {
        passed = false;
        cout << "FAILED default constructor test case for chicken sandwich" << endl;
    }

    //create chicken object passing in our own values instead of default
    Chicken_Sandwich chicken2(vector<string> {"cucumber"}, false, true, 6.99);
    //chicken 2 was not properly set and get salad is set to false when it was passed in as true
    if (chicken2.get_salad() != false) {}
    else {
        passed = false;
        cout << "FAILED chicken salad test case" << endl;
    }
    //chicken 2 was not properly set and price is wrong when it was passed in as 6.99
    if (chicken2.get_price() == 6.99) {}
    else {
        passed = false;
        cout << "FAILED chicken constructor price test case" << endl;
    }

    //check to see if the getter and setter for salad (not inherited field) works
    //update chicken sandwich salad field
    chicken2.set_salad(false);
    //if chicken salad is still true the setter did not work, could also technically be issue with getter too
    if (chicken2.get_salad() == true) {
        passed = false;
        cout << "FAILED salad getter/setter test case" << endl;
    }

    //check to see if the getter and setter for price (inherited field) works
    //update price field
    chicken2.set_price(50.00);
    //the price of chicken2 did not change even after setting it
    if (chicken2.get_price() != 50.00) {
        passed = false;
        cout << "FAILED price getter/setter test case for chicken class" << endl;
    }
    //all tests for the chicken sandwich class have been successful
    return passed;
}


//tests the inheritance relationship between sandwich and ham sandwich class
bool test_Ham_Sandwich() {
    bool passed = true;
    //create ham sandwich object
    Ham_Sandwich ham;
    //check inherited field and private subclass field
    if (ham.get_true_duck_fries() != false || ham.get_meat() != "Ham") {
        passed = false;
        cout << "FAILED default constructor test case for chicken sandwich" << endl;
    }

    //create ham object passing in our own values instead of default
    Ham_Sandwich ham2(vector<string> {"cucumber"}, true, true, true, 9.99);
    //ham2 was not properly set and extra meat is set to false when it was passed in as true
    if (ham2.get_extra_meat() == true) {}
    else {
        passed = false;
        cout << "FAILED ham extra meat test case" << endl;
    }
    //ham2 was not properly set and price is wrong when it was passed in as 6.99
    if (ham2.get_price() == 9.99) {}
    else {
        passed = false;
        cout << "FAILED ham2 constructor price test case" << endl;
    }

    //check to see if the getter and setter for salad (not inherited field) works
    //update ham sandwich salad field
    ham2.set_true_duck_fries(false);
    //if ham2 duck fries is still true the setter did not work, could also technically be issue with getter too
    if (ham2.get_true_duck_fries() == true) {
        passed = false;
        cout << "FAILED salad getter/setter test case" << endl;
    }

    //check to see if the getter and setter for price (inherited field) works
    //update price field
    ham2.set_price(50.00);
    //the price of ham2 did not change even after setting it
    if (ham2.get_price() != 50.00) {
        passed = false;
        cout << "FAILED price getter/setter test case for ham" << endl;
    }
    //all tests for the ham sandwich class have been successful
    return passed;
}

//tests the inheritance relationship between sandwich and turkey sandwich class
bool test_Turkey_Sandwich() {
    bool passed = true;
    //create turkey sandwich object
    Turkey_Sandwich turkey;
    //cranberry sauce is true by default so check that
    if (turkey.get_cranberry_sauce() != true || turkey.get_meat() != "Turkey") {
        passed = false;
        cout << "FAILED default constructor test case for turkey sandwich" << endl;
    }

    //create turkey object passing in our own values instead of default
    Turkey_Sandwich turkey2(vector<string> {"test"}, false, false, false, 4.99);
    //turkey2 was not properly set and cranberry_sauce is set to true when it was passed in as false
    if (!turkey2.get_cranberry_sauce()) {}
    else {
        passed = false;
        cout << "FAILED turkey cranberry sauce test case" << endl;
    }

    //turkey2 was not properly set and price is wrong when it was passed in as 6.99
    if (turkey2.get_price() == 4.99) {}
    else {
        passed = false;
        cout << "FAILED turkey2 constructor price test case" << endl;
    }

    //check to see if the getter and setter for salad (not inherited field) works
    //update turkey sandwich cranberry_sauce field to true from false
    turkey2.set_cranberry_sauce(true);
    //if turkey cranberry is still false the setter did not work, could also technically be issue with getter too
    if (turkey2.get_cranberry_sauce() != true) {
        passed = false;
        cout << "FAILED cranberry_sauce getter/setter test case" << endl;
    }

    //check to see if the getter and setter for price (inherited field) works
    //update price field
    turkey2.set_price(50.00);
    //the price of turkey2 did not change even after setting it
    if (turkey2.get_price() != 50.00) {
        passed = false;
        cout << "FAILED price getter/setter test case for turkey" << endl;
    }
    //all tests for the turkey sandwich class have been successful
    return passed;
}
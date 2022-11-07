 # Part of the starter code comes from Professor L. Dion's class.
 # This code was created in collaboration with fellow CS student Maxwell Hughes


 This project was created to demonstrate the power of C++ when it comes to input validation,
 file writing, speed of execution, inheritance class relationships, and file output.
 

 There is one parent sandwich class, which has a bool toasted, string meat, vector<string> topping, and double price.

 
 The Chicken, Turkey, and Ham class' inherit from the sandwich class.
    
  
 The Chicken sandwich class inherits those 5 fields plus an additional salad option.
    

 The Turkey sandwich class has an option for extra cheese, and cranberry sauce, with their prices added to the total.


 The Ham class has an additional option extra meat


 and comes with a choice of duck-fat fries, or shoestring fries (no charge added).


 The user will order a sandwich and choose from the lists provided to build their meal, 


 having their inputs checked as they go along until they finish and the price of their meal is shown.


 The order and the contents of the sandwich are then printed to an output file alongside the price for their meal!


 The user could of course choose one of great hand-selected sandwiches if they are unsure what to order!


 We here at Sandwiche Store Emulator hope you enjoy your meal!
 


# Testing class

The testing class is used to ensure stability of the program through all life-cycles. The testing classes not only tests

the getters and setters for each subclass, it also checks the getters and setters for the parent class 

implicitly as objects are initialized and tested. It checks the default behavior for each of the three subclasses, 

ensuring they are defaulting to the correct options as specified. It also checks the non-default constructor behavior 

by passing in various values and checking to see they were properly fit into the object's fields. This ensures no fields

values are placed in the wrong spot which would cause an ordering mess!

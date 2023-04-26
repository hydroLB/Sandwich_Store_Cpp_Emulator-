# 🥪 Sandwich Store Emulator 🥪

## 📚 Overview
This project demonstrates the capabilities of C++ in various areas such as input validation, file writing, execution speed, class inheritance, and file output. The code was developed collaboratively by Maxwell Hughes and myself, building upon starter code provided by Professor L. Dion.

The application simulates a sandwich store where users can customize their order and view the total price, with the order details being output to a file.

## 🥪🥙 Sandwich Classes 🌯🌮
The core of the project is built around a parent `Sandwich` class, which contains the following properties:

- `bool toasted`
- `string meat`
- `vector<string> toppings`
- `double price`

Three child classes inherit from the `Sandwich` class: `Chicken`, `Turkey`, and `Ham`. Each class has its own unique properties:

- `Chicken`: Inherits the base properties and adds a `salad` option.
- `Turkey`: Inherits the base properties and adds options for `extra cheese` and `cranberry sauce`, with their respective prices included in the total.
- `Ham`: Inherits the base properties and adds an option for `extra meat`. It also includes a choice of `duck-fat fries` or `shoestring fries` at no additional charge.

## 🛍️ Ordering Process 🍽️
Users can order a sandwich by choosing from a list of options provided. The application guides them through the customization process, validating their inputs at each step. Once the user has finished customizing their sandwich, the total price for their meal is displayed.

The order details, including the sandwich contents and meal price, are then output to a file for further reference. Users can also select one of the pre-selected sandwiches if they are unsure of what to order.

🌟 We hope you enjoy using the Sandwich Store Emulator! 🌟

## 🧪 Testing Class 🔬
The `Testing` class ensures the stability and reliability of the program throughout its lifecycle. It tests the getter and setter methods for each subclass as well as the parent class. By doing so, it verifies the default behavior for each of the three subclasses, ensuring that they adhere to the specified options.

The non-default constructor behavior is also tested by passing in various values and checking if they are correctly assigned to the corresponding object fields. This helps to prevent any potential ordering issues caused by field values being misplaced.

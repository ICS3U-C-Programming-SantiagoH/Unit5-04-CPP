// Copyright (c) 2023 Santiago Hewett All rights reserved.
// Created by: Santiago Hewett
// Date: Dec 4, 2023
// This program will ask the user for 2 numbers
// and an operation, then it will find the result
// of the two numbers with the operation

#include <cmath>
#include <iostream>
#include <string>

float calculate(char sign, float first_number, float second_number) {
    // Statements for each operation
    if (sign == '+') {
        return first_number + second_number;
    } else if (sign == '-') {
        return first_number - second_number;
    } else if (sign == '*') {
        return first_number * second_number;
    } else if (sign == '/') {
        return first_number / second_number;
    } else if (sign == '%') {
        return fmod(first_number, second_number);
    } else {
        std::cout << "The operation entered is invalid." << std::endl;
    }
}

int main() {
    // Declare variables
    std::string user_num1_str, user_num2_str, user_operation_str;
    float result;

    // Get numbers and operation and display a message to the user
    std::cout << "This program will ask for 2 numbers" << std::endl;
    std::cout << "and an operation and find the result" << std::endl;
    std::cout << "of the two numbers with the operation." << std::endl;

    std::cout << "Please enter your first number: ";
    std::cin >> user_num1_str;

    std::cout << "Please enter your second number: ";
    std::cin >> user_num2_str;

    std::cout << "Please enter the operation you want done: ";
    std::cin >> user_operation_str;

    // Convert user input to numbers
    float user_num1 = std::stof(user_num1_str);
    float user_num2 = std::stof(user_num2_str);

    // Call the calculate function and store the result
    result = calculate(user_operation_str[0], user_num1, user_num2);

    // Display the result
    std::cout << "The result of the operation is: " << result << std::endl;
}
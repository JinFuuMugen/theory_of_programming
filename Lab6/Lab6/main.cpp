#include "Stack.h"
#include "Rocket.h"
#include <iostream>
#include <string>


int main() {
    
    std::cout << "Task 1\n" << std::endl;

    Stack<int> int_stack;

    int_stack.push(10);
    int_stack.push(20);
    int_stack.push(30);

    while (!int_stack.isEmpty()) {
        std::cout << "Poped data: " << int_stack.pop() << std::endl;
    }

    std::cout << "Is stack empty: " << (int_stack.isEmpty() ? "yes\n" : "no\n") << std::endl;


    Stack<std::string> str_stack;

    str_stack.push("!");
    str_stack.push("world");
    str_stack.push("Hello");

    while (!str_stack.isEmpty()) {
        std::cout << "Poped data: " << str_stack.pop() << std::endl;
    }
    
    std::cout << "Is stack empty: " << (str_stack.isEmpty() ? "yes\n" : "no\n") << std::endl;


    std::cout << "Task 2\n" << std::endl;

    Rocket rocket;
    rocket.AddStage(std::make_unique<RocketStage>("First stage", 1000));
    rocket.AddStage(std::make_unique<RocketStage>("Second stage", 500));
    rocket.AddStage(std::make_unique<RocketStage>("Third stage", -100));
    rocket.AddStage(std::make_unique<RocketStage>("Fourth stage", 200));

    try {
        rocket.Launch();
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }


    return 0;
}
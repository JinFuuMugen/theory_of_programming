#pragma once
#include <stdexcept>
#include <memory>

template <typename T>
class Stack {
public:
    void push(const T& value) {
        auto newNode = std::make_unique<Node>(value);
        newNode->next = std::move(top);
        top = std::move(newNode);
    }

    T pop() {
        if (isEmpty()) {
            throw std::runtime_error("Stack is empty");
        }
        T value = top->data;
        top = std::move(top->next);
        return value;
    }

    bool isEmpty() const {
        return top == nullptr;
    }

private:
    struct Node {
        T data;
        std::unique_ptr<Node> next;

        Node(const T& data) : data(data) {}
    };

    std::unique_ptr<Node> top;
};
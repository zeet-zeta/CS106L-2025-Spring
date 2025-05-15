#include "class.h"

MyClass::MyClass() : value(0) {
    // Constructor implementation
}

MyClass::MyClass(int a) : value(0) {
    if (isValid(a)) {
        value = a;
    } else {
        // Handle invalid case, e.g., set to default or throw an exception
        value = 0; // Default value
    }
}

void MyClass::setValue(int value) {
    this->value = value;
}

int MyClass::getValue() const {
    return value;
}

bool MyClass::isValid(int a) const {
    // Implement your validation logic here
    return a >= 0; // Example: valid if a is non-negative
}
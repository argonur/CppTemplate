#include "myClass.h"

MyClass::MyClass(int value) : value_(value) {}

int MyClass::getValue() const {
    return value_;
}

void MyClass::setValue(int newValue) {
    value_ = newValue;
}

std::string MyClass::greet(const std::string& name) const {
    return "Hello, " + name + "!";
}

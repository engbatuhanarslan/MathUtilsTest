#include "Animal.h"

Animal::Animal(const std::string& name, int age)
    : m_name(name), m_age(age) {
}

std::string Animal::GetName() const {
    return m_name;
}

int Animal::GetAge() const {
    return m_age;
}

void Animal::SetName(const std::string& name) {
    m_name = name;
}

void Animal::SetAge(int age) {
    m_age = age;
}

std::string Animal::Speak() const {
    return "My name is " + m_name + " and I am " + std::to_string(m_age) + " years old.";
}

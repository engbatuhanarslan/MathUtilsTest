#pragma once
#include <string>

class Animal {
public:
    Animal(const std::string& name, int age);

    std::string GetName() const;
    int GetAge() const;
    void SetName(const std::string& name);
    void SetAge(int age);

    std::string Speak() const;

private:
    std::string m_name;
    int m_age;
};

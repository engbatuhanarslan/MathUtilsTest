#pragma once
#include <string>

class Vehicle {
public:
    Vehicle(const std::string& brand, int speed);

    std::string GetBrand() const;
    int GetSpeed() const;
    void SetBrand(const std::string& brand);
    void SetSpeed(int speed);

    std::string Info() const;

private:
    std::string m_brand;
    int m_speed;
};

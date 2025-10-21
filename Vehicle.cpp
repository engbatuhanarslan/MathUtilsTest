#include "Vehicle.h"

Vehicle::Vehicle(const std::string& brand, int speed)
    : m_brand(brand), m_speed(speed) {
}

std::string Vehicle::GetBrand() const { return m_brand; }
int Vehicle::GetSpeed() const { return m_speed; }

void Vehicle::SetBrand(const std::string& brand) { m_brand = brand; }
void Vehicle::SetSpeed(int speed) { m_speed = speed; }

std::string Vehicle::Info() const {
    return "Vehicle brand: " + m_brand + ", speed: " + std::to_string(m_speed);
}

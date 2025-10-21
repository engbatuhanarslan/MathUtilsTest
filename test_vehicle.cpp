#include "Vehicle.h"
#include <gtest/gtest.h>

TEST(VehicleTest, ConstructorAndGetters) {
    Vehicle car("BMW", 120);
    EXPECT_EQ(car.GetBrand(), "BMW");
    EXPECT_EQ(car.GetSpeed(), 120);
}

TEST(VehicleTest, SettersWork) {
    Vehicle car("Audi", 100);
    car.SetBrand("Mercedes");
    car.SetSpeed(150);

    EXPECT_EQ(car.GetBrand(), "Mercedes");
    EXPECT_EQ(car.GetSpeed(), 150);
}

TEST(VehicleTest, InfoFunction) {
    Vehicle car("Toyota", 90);
    EXPECT_EQ(car.Info(), "Vehicle brand: Toyota, speed: 90");
}

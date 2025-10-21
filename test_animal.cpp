#include "Animal.h"
#include <gtest/gtest.h>

TEST(AnimalTest, ConstructorAndGetters) {
    Animal dog("Buddy", 3);
    EXPECT_EQ(dog.GetName(), "Buddy");
    EXPECT_EQ(dog.GetAge(), 3);
}

TEST(AnimalTest, SettersWork) {
    Animal cat("Kitty", 2);
    cat.SetName("Tom");
    cat.SetAge(4);

    EXPECT_EQ(cat.GetName(), "Tom");
    EXPECT_EQ(cat.GetAge(), 4);
}

TEST(AnimalTest, SpeakFunction) {
    Animal bird("Tweety", 1);
    EXPECT_EQ(bird.Speak(), "My name is Tweety and I am 1 years old.");
}

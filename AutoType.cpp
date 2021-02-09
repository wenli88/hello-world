// AutoType.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

auto add(double x, double y) ->short
{
    auto z = x + y;

    if (z > 15.)
    {
        return float(z);
    }
    else
    {
        return float(z);
    }
}


int TestEnumClass()
{
    enum class Color // "enum class" defines this as a scoped enumeration instead of a standard enumeration
    {
        red, // red is inside the scope of Color
        blue
    };

    enum class Fruit
    {
        banana, // banana is inside the scope of Fruit
        apple
    };

    enum eOldColor
    {
        red,
        blue
    };

    Color color{ Color::red }; // note: red is not directly accessible any more, we have to use Color::red
    Fruit fruit{ Fruit::banana }; // note: banana is not directly accessible any more, we have to use Fruit::banana

    if (color == Color::red) // compile error here, as the compiler doesn't know how to compare different types Color and Fruit
        std::cout << "color and fruit are equal\n";
    else
        std::cout << "color and fruit are not equal\n";

    int i0 = blue;
    int i1 = (int)Color::blue;


    return 0;
}
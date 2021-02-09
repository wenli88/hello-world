#include <iostream>
#include <vector>
#include <array>

auto add(double x, double y) -> short;
int ConvertConstructor();
int TestExplicitKeyWord();
int TestEnumClass();
int TestArray();
void testLambda();

int main()
{
    testLambda();
    TestArray();
   TestEnumClass();
   TestExplicitKeyWord();
   ConvertConstructor();
    
    std::cout << "Hello World!\n";

    //test auto 

    double a = 4.5;
    unsigned long  iSize = sizeof(a);

    auto b{ 4.5 };
    auto c(4.5);
    auto f = 1;

    std::vector<long> LongVector;
    for (auto i = 0; i < 10; i++)
    {
        LongVector.push_back(i);
    }

    auto e = LongVector[3];
    auto g = LongVector.begin();
    iSize = sizeof(g);

    auto h = add(10, 7.5);
    auto l = add(-10,3.2);
}

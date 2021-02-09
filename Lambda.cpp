#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>
#include <vector>

int ReturnSize(std::array<double, 5>& PassIn);
int MoreThan4(double f);

struct F
{
 //   int& ref; // reference member
    const int c; // const member
    // F::F() is implicitly defined as deleted

    F(int n=18) : c(n)
    {
    }
};

void testLambda()
{
    F objF(43);

     auto more4
    { [](double f)
        {
            if (f > 4)
                return int(f);
            else
                return -int(f);
        }
    };

    std::array<double, 5> a;
    a = { 8, 6, 5, 7, 5};
    bool bReturn = true;
    bReturn = std::all_of(a.begin(), a.end(), more4);
  //  bReturn = std::none_of(a.begin(), a.end(), MoreThan4);
  //  bReturn = std::any_of(a.begin(), a.end(), MoreThan4);
 }

int MoreThan4(double f)
{
    if (f > 4)
        return int(f);
    else
        return -int(f);
}


int TestArray()
{
    std::array<double, 5> a { 3.1, 5.2, 8.3};
    double d = a[2];
    d = a.at(2);
    auto b = a;
    double f = a.front();
    auto f1 = a.back();
 //   b.assign(40);

  //  d = a[6];
  //  d = a.at(6);
  // for (auto i{ a.size() - 1 }; i >= 0; i--)
 //   std::size_t i;
  //  for (i = (int)b.size()-1; i >=0; i--)
//    for (i = a.size(); i-- > 0; ) 
     for(auto pos=a.rbegin(); pos!=a.rend(); ++pos)
    {
        std::cout << *pos << '\n';
    }

    return 10;
}

int ReturnSize(std::array<double, 5>& PassIn)
{
    std::size_t nSize = PassIn.size();
    return (int)nSize;
}
/*  constexpr std::array<std::string_view, 4> arr{ "apple", "banana", "walnut", "lemon" };

    // Define the function right where we use it.
    const auto found{ std::find_if(arr.begin(), arr.end(),
                             [](std::string_view str) // here's our lambda, no capture clause
                             {
                               return (str.find("nut") != std::string_view::npos);
                             }) };

    if (found == arr.end())
    {
        std::cout << "No nuts\n";
    }
    else
    {
        std::cout << "Found " << *found << '\n';
    }*/

 
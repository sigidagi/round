#include <iostream>
#include <limits>
#include <string>

int main(int argc, char* argv[])
{
    double min = -16777215.0;
    double step = 1.0;
    double realv = 0.0;

    long templ = static_cast<long>(((realv - min) + step/2) / step);
    float tempf = templ * step + min;
    
    std::cout << "Input: " << std::to_string(realv) << "\n";
    std::cout << "Result: " << tempf << "\n";
    
    return 0;
}

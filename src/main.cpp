#include <iostream>
#include <limits>

int main(int argc, char* argv[])
{
    float min = -16777215.0;
    float step = 1.0;
    float realv = 0.0;

    long templ = static_cast<long>(((realv - min) + (double)step/2) / step);
    float tempf = templ * step + min;
    
    std::cout << "Input: " << realv << "\n";
    std::cout << "Result: " << tempf << "\n";

    return 0;
}

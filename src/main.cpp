#include <iostream>
#include <string.h>

int main(int argc, char* argv[])
{
    char value[512];

    sprintf(value,"%f", atof(argv[1]));
    
    float realv;
    realv = std::stof(value);

    std::cout << realv << std::endl;

    long templ;
    
    float min = -225.000000;
    float step = 1.000000;

    templ = (long)(((realv - min) + step / 2) / step);

    float tempf = templ * step + min;
    
    std::cout << tempf << std::endl;

    return 0;
}

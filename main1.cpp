#include <iostream>

int main()
{
    int array[8]  = {1, 1, 1, 1, 1, 1, 1, 1};
    
    int8_t* pointer = (int8_t*) array;
    
    pointer += 3;
    
    
    std::cout<<"*pointer = " << (int)*pointer << std::endl;

    return 0;
}

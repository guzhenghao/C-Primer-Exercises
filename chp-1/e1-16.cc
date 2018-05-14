#include <iostream>
int main()
{
    int sum=0,val=0;
    //read until end-of-file, sum all the integers inputed
    while (std::cin >> val )
        sum += val;
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}

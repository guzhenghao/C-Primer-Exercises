#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, total;
    int i=1;
    while ( std::cin >> item ) {
        if (i==1) {
            total = item;
            ++i;
        }
        else {
            total += item;
            ++i;
        }
    }
    std::cout << "The sum is: " << total << "." << std::endl;
    return 0;
}

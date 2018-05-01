#include <iostream>

int main()
{
    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */";
    std::cout << /*  "*/" 2/*   "/*"     */;
    return 0;
}

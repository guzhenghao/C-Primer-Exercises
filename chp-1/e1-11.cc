#include <iostream>
int main()
{
    int v1=0, v2=0, val=0;
    std::cout << "Input two integers:" << std::endl;
    std::cin >> v1 >> v2;
    //compare v1 and v2 and v2 is greater than v1
    //if v1=v2, then prompt the error message
    //if abs(v1-v2)=1,then prompt the error message
    if (v1==v2) {
        std::cout << "The two integers are same, no integer is between them." << std::endl;
        return 0;
    }
    if (abs(v1-v2)==1) {
        std::cout << "There is no integer is between " << v1 << " and " << v2 << "." << std::endl;
        return 0;
    }
    if (v1>v2) {
        val=v2;
        v2=v1;
        v1=val;
    }
    std::cout << "The integers in then range of " << v1 << " and " << v2 << " is:" << std::endl;
    while (val<(v2-1)) {
        ++val;
        std::cout << val <<  std::endl;
    }
    return 0;
}

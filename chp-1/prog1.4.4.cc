#include <iostream>
int main()
{
    int currVal=0,val=0;
    //read until end-of-file, sum all the integers inputed
    if (std::cin >> currVal) {
        int cnt =1;
        while (std::cin >> val ){
            if (val==currVal)
                ++cnt;
            else {
                std::cout << currVal << " occurs "
                    << cnt << " times" << std::endl;
                currVal=val;
                cnt=1;
            }
        }
        std::cout << currVal << " occurs "
                  << cnt << " times" << std::endl;
    }
    return 0;
}

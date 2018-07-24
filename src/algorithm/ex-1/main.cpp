#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> myvector = {10, 25, 40, 55};
    
    std::vector<int>::iterator it = 
        std::find_if (myvector.begin(), myvector.end(), 
                      [](const int &it){ 
                        return (it%2) == 1;
        });
    std::cout << "The first odd value is " << *it << '\n';
    
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 7, 8, 9};

    int target = 6;
    auto it = std::upper_bound(vec.begin(), vec.end(), target);

    if (it != vec.end()) {
        std::cout << "Found at index: " << std::distance(vec.begin(), it + 1) << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    return 0;
}

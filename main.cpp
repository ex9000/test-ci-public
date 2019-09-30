#include <iostream>
#include <vector>

int main() {

    std::vector<int> input = {};

    int temp;
    for (int i = 0; i < 5; i++) {
        std::cin >> temp;
        input.push_back(temp);
    }

    std::sort(input.begin(), input.end());
    for (int i :input) {
        std::cout << i << ' ';
    }

    return 0;
}
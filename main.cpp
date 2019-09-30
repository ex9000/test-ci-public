#include <iostream>
#include <vector>
#include <algorithm>





int main() {
    std::vector<int> mas;
    for (int i = 0; i < 5; i++) {
        int elem;
        std::cin >> elem;
        mas.push_back(elem);
    }
    std::sort(std::begin(mas), std::end(mas));

    for (int i : mas) {
        std::cout << i << " ";
    }
}
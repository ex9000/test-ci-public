

#include <iostream>
#include <vector>
#include <algorithm>
void rangeBasedFor(std::vector<int> const &input) {
    for (auto const &i : input) {
        std::cout << i << " ";
    }
}
void vectorSort(std::vector<int> vectorToSort) {
    std::vector<int> sortedVector = vectorToSort;
    std::sort(sortedVector.begin(), sortedVector.end());
    rangeBasedFor(sortedVector);
}

std::vector<int> getVector() {
    std::vector<int> newVector;
    for (int i = 0; i < 5; i++) {
        int curNumber;
        std::cin >> curNumber;
        newVector.push_back(curNumber);
    }
    return newVector;
}
int main() { vectorSort(getVector()); }
// 12345678987

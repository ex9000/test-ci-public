#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    vector<int> massive;
    for (int i = 0; i < 5; i++) {
        int el = 0;
        cin >> el;
        massive.push_back(el);
    }
    sort(massive.begin(), massive.end());
    copy(massive.begin(), massive.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}
// 1

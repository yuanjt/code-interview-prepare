#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> intArray;
    int n, temp;
    cin >> n;
    while (n > 0) {
        cin >> temp;
        intArray.push_back(temp);
        n --;
    }
    sort(intArray.begin(), intArray.end());
    for (auto i : intArray) {
        cout << i << " ";
    }
    return 0;
}

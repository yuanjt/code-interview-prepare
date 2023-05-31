#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, p, a, b;
    cin >> n;
    vector<long long int> v;
    long long int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    cin >> p;
    v.erase(v.begin() + p - 1);
    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    
    cout << v.size() << endl;
    for (auto i : v) {
        cout << i << " ";
    }
    return 0;
}
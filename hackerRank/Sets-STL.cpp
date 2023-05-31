#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, o, temp;
    set<int> s;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> o >> temp;
        if (o == 1) {
            s.insert(temp);
        }
        if (o == 2) {
            s.erase(temp);
        }
        if (o == 3) {
            set<int>::iterator itr = s.find(temp);
            if (itr == s.end()) {
                cout << "No" << endl;
            }
            else {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}
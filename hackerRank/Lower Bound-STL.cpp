#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num, temp, q;
    vector<int> v;
    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> temp;
        v.push_back(temp);
    }
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> temp;
        vector<int>::iterator low = lower_bound(v.begin(), v.end(), temp);
        if(v[low - v.begin()] == temp){
            cout << "Yes " << (low - v.begin() + 1) << endl;
        }
        else{
            cout << "No " << (low - v.begin() + 1) << endl;
        }
    }
    return 0;
}
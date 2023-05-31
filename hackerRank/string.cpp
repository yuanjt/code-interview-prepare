#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2;
    s3 = s1 + s2;
    int t1 = s1.size(), t2 = s2.size();
    char temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;
    cout << t1 << " " << t2 << endl;
    cout << s3 << endl;
    cout << s1 << " " << s2 << endl;    
    return 0;
}
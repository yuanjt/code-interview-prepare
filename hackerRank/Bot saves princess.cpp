#include <iostream>
#include <vector>
using namespace std;

void displayPathtoPrincess(int n, vector <string> grid){
    //your logic here
    int x1, y1, x2, y2;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(grid[i][j] == 'm') {
                x1 = i;
                y1 = j;
            }
            if(grid[i][j] == 'p') {
                x2 = i;
                y2 = j;
            }
        }
    }
    if(x1 < x2) {
        for(int i=0; i<x2-x1; i++) {
            cout << "DOWN" << endl;
        }
    } else {
        for(int i=0; i<x1-x2; i++) {
            cout << "UP" << endl;
        }
    }
    if(y1 < y2) {
        for(int i=0; i<y2-y1; i++) {
            cout << "RIGHT" << endl;
        }
    } else {
        for(int i=0; i<y1-y2; i++) {
            cout << "LEFT" << endl;
        }
    }
}

int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
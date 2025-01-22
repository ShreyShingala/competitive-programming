#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    unsigned long int n;
    cin >> n; 
    
    int allnumbers[n];

    int temp = 0;
    for (int i = 0; i < n-1; i++) {
        cin >> temp;
        allnumbers[temp-1] = 1;
    }

    for(int i = 0; i < n; i++) {
        if (allnumbers[i] != 1) {
            cout << i+1 << endl;
            break;
        }
    }
}
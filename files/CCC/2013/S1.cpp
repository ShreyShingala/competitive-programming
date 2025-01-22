#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool isDistinct(string year){
    unordered_map<char, int> mappy;

    for (int i = 0; i < year.size(); i++){
        mappy[year[i]] += 1;

        if (mappy[year[i]] > 1){
            return false;
        }
    }

    return true;
}


int main() {

    int year = 0;
    cin >> year;
    bool found = false;

    while (!found){
        year += 1;
        string yearsting = to_string(year);

        if (isDistinct(yearsting)){
            cout << year << endl;
            found = true;
        }
    }
}

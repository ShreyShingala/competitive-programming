#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <unordered_map>

using namespace std;
int main() {

    string string1, string2;

    cin >> string1;
    cin >> string2;

    unordered_map<char, int> string1map;

    int totalcharsleft = string1.size();

    for (int i = 0; i < string1.size(); i++){
        string1map[string1[i]] += 1;
    }
    
    for (int i = 0; i < string2.size(); i++){

        string1map[string2[i]] -= 1;
        if (string1map[string2[i]] >= 0 || string2[i] == '*'){
            totalcharsleft -= 1;
        }
        else{
            break;
        }
    }
    

    if (totalcharsleft == 0){
        cout << "A" << endl;
    }
    else{
        cout << "N" << endl;
    }
}

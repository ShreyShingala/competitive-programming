#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

void getridzero(vector<int> &people){
    for (int i = 0; i < people.size(); i++){
        if (people[i] == 0){
            people.erase(people.begin() + i);
        }
    }
}

int main(){
    
    int total = 0;
    cin >> total;

    vector<int> people;
    for (int i = 1; i < total+1; i++){
        people.push_back(i);
    }

    int roundsremoval = 0;
    cin >> roundsremoval;

    for (int i = 0; i < roundsremoval; i++){
        int removal_cat = 0;
        cin >> removal_cat;

        for (int i = 1; i < people.size()+1; i++){
            if (i % removal_cat == 0){
                people[i-1] = 0;
            }
        }

        getridzero(people);
    }

    for (int i = 0; i < people.size(); i++){
        cout << people[i] << "\n";
    }


}
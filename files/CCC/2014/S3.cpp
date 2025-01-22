#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;


void printlist(vector<int> list){
    for (int i = 0; i < list.size(); i++){
        cout << list[i] << " ";
    }
    cout << endl;
}

int main(){

    int testcases = 0;
    cin >> testcases;

    for (int i = 0; i < testcases; i++){
        int number = 0;
        cin >> number;
        vector<int> train;

        for (int j = 0; j < number; j++){
            int temp = 0;
            cin >> temp;
            train.push_back(temp);
        }


        bool done = false;
        int currnumber = 1;
        vector<int> side;

        while (!done){
            if (train.size() == 0 && side.size() == 0){
                done = true;
                break;
            }

            if (side.size() != 0){
                if (side.back() == currnumber){
                    side.pop_back();
                    currnumber++;
                } 
                else if (train.size() == 0){
                    break;
                }
                else{
                    if (train.back() == currnumber){
                        train.pop_back();
                        currnumber++;
                    } else {
                        side.push_back(train.back());
                        train.pop_back();
                    }
                }
            }
            else {
                if (train.back() == currnumber){
                    train.pop_back();
                    currnumber++;
                } else {
                    side.push_back(train.back());
                    train.pop_back();
                }
            }
        }

        if (done == true){
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }
}

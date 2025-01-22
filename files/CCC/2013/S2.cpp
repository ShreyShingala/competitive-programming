#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

int main(){

    int max_weight = 0;
    cin >> max_weight;

    vector<int> weights;

    int current_trains = 0;
    int current_index = 0;
    int current_weight = 0;
    int number_of_trains = 0;
    bool breaker = false;

    cin >> number_of_trains;

    for (int i = 0; i < 4; i++){
        int weight = 0;
        cin >> weight;
        weights.push_back(weight);
        current_weight += weight;

        if (current_weight > max_weight || i == number_of_trains - 1){
            breaker = true;
            cout << current_trains << endl;
            break;
        }
        else{
            current_trains += 1;
        }
    }

    while (!breaker && current_index < number_of_trains && number_of_trains > current_trains){

       int weight = 0;
       cin >> weight;
       weights.push_back(weight);
       current_weight += weight;
       current_weight -= weights[current_index];
       
        if (current_weight > max_weight){
            cout << current_trains << endl;
            breaker = true;
            break;
        }
        
        current_index += 1;
        current_trains++;
    }

    if (!breaker){
        cout << current_trains << endl;
    }
}
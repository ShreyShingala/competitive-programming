#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main (){

    int largest = 1;

    string genome = "";
    cin >> genome;
    
    int count = 1;
    for(int i; i < genome.length(); i++){
        if (genome[i] == genome[i+1]){
            count += 1;
        }else{
            largest = (largest > count) ? largest : count;
            count = 1;
        }
    }


    cout << largest << endl;
    return 0;
}
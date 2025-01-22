#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

int find_find_val(char input){

    if (input == 'I'){
        return 1;
    }
    if (input == 'V'){
        return 5;
    }
    if (input == 'X'){
        return 10;
    }
    if (input == 'L'){
        return 50;
    }
    if (input == 'C'){
        return 100;
    }
    if (input == 'D'){
        return 500;
    }
    if (input == 'M'){
        return 1000;
    }
    if (input == '0'){
        return 0;
    }
    if (input == '1'){
        return 1;
    }
    if (input == '2'){
        return 2;
    }
    if (input == '3'){
        return 3;
    }
    if (input == '4'){
        return 4;
    }
    if (input == '5'){
        return 5;
    }
    if (input == '6'){
        return 6;
    }
    if (input == '7'){
        return 7;
    }
    if (input == '8'){
        return 8;
    }
    if (input == '9'){
        return 9;
    }

    return 0;
}

int main() {

    string inputy = "";

    cin >> inputy;


    reverse(inputy.begin(), inputy.end());


    int current = 0;
    int current_romanval = 0;
    int previous_romanval = 0;
    
    for(int i = 0; i < inputy.size()/2; i++) {
       if (i == 0){
        previous_romanval = find_find_val(inputy[0]);
        current += previous_romanval * find_find_val(inputy[1]);
       }
       else{
        current_romanval = find_find_val(inputy[i*2]);
        if (current_romanval < previous_romanval){
            current -= current_romanval * find_find_val(inputy[i*2+1]);
        }
        else{
            current += current_romanval * find_find_val(inputy[i*2+1]);
        }
        previous_romanval = current_romanval;
       }
    }

    cout << current << endl;
}
    
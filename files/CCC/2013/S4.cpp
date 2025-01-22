#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

//exceeds the time limit only on final solution :( sadge


bool found = false;
unordered_map<int, vector<int>> taller_map;
unordered_map<int, vector<int>> shorter_map;

void find_shorter(int shorterguy, int tallerguy, bool* found){

    if (*found == false){
        for(int talls:shorter_map[shorterguy]){

            if (talls == tallerguy){
                *found = true;
            }
            else{
                find_shorter(talls, tallerguy, found);
            }
        }
    }
}



void find_taller(int shorterguy, int tallerguy, bool* found){

    if (*found == false){
        for(int talls:taller_map[shorterguy]){

            if (talls == tallerguy){
                *found = true;
            }
            else{
                find_taller(talls, tallerguy, found);
            }
        }
    }
}

int main(){
    
    int numppl; 
    cin >> numppl;

    int comparisions;
    cin >> comparisions;



    for (int i = 0; i < comparisions; i++){
        int talldude, shortdude;
        cin >> talldude >> shortdude;
        
        taller_map[talldude].push_back(shortdude);
        shorter_map[shortdude].push_back(talldude);
    }

    int checktall = 0;
    int checkshort = 0;

    cin >> checktall >> checkshort; 

    find_shorter(checkshort, checktall, &found);

    if (found == true){
        cout << "yes" << endl;
    }



    else{
        find_taller(checkshort, checktall, &found);
        if (found == true){
            cout << "no" << endl;
        }
        else{
            cout << "unknown" << endl;
        }
    }
}  


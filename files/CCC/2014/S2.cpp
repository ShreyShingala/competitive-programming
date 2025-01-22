#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
#include <unordered_map>

using namespace std;

int main(){
    int numberppl;

    cin >> numberppl;

    vector<string> firstnames;
    vector<string> secondnames;
    bool bad = false;

    for (int i = 0; i < numberppl; i++){
        string firstname;
        cin >> firstname;
        firstnames.push_back(firstname);
    }
    
    for (int i = 0; i < numberppl; i++){
        string secondname;
        cin >> secondname;
        secondnames.push_back(secondname);
    }

    unordered_map<string, string> partnersmap;

    for (int i = 0; i < numberppl; i++){
        if (firstnames[i] == secondnames[i]){
            bad = true;
            break;
        }
        else{
            if (partnersmap[firstnames[i]] == ""){
                partnersmap[firstnames[i]] = secondnames[i];
            } else {
                if (partnersmap[firstnames[i]] != secondnames[i]){
                    bad = true;
                    break;
                }
            }

            if (partnersmap[secondnames[i]] == ""){
                partnersmap[secondnames[i]] = firstnames[i];
            } else {
                if (partnersmap[secondnames[i]] != firstnames[i]){
                    bad = true;
                    break;
                }
            }
        }
    }

    if (bad == true){
        cout << "bad";
    } else {
       cout << "good";
    }
}
#include <iostream>
#include <string>

using namespace std;
int main() {

    int n;
    string inputy;
    cin >> n;
    n++;

    int frenchy = 0;
    int englishy = 0;

    for (int i = 0; i < n; i++){
        getline(cin, inputy);

        for(int j = 0; j < inputy.length(); j++){
            if (inputy[j] == 't' || inputy[j] == 'T'){
                englishy++;
            } else if (inputy[j] == 's' || inputy[j] == 'S'){
                frenchy++;
            }
        }
    }

    if (frenchy >= englishy){
        cout << "French" << endl;
    } else {
        cout << "English" << endl;
    }
}
    
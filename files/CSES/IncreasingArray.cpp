#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    long int changes = 0;

    long int iterations = 0;
    cin >> iterations;

    int listnumbs[iterations];

    for(int i = 0; i < iterations; i++){
        cin >> listnumbs[i];
    }

    for (int i = 1; i < iterations; i++){
        if (listnumbs[i-1] > listnumbs[i]){
            changes += listnumbs[i-1] - listnumbs[i];
            listnumbs[i] += listnumbs[i-1] - listnumbs[i];
        }
    }



    cout << changes << endl;
   
    return 0;
}
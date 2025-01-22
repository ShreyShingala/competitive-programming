#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    long long int perms{};
    cin >> perms;
    long long int diffrence1{96};
    long long int diffrence2{68};
    long long int diffrence3{46};
    long long int diffrence4{30};
    long long int diffrence5{12};

    for (int i = 0; i < perms; i++){
        if (i == 0){
            cout << "0" << endl;
            
        }
        else if (i == 1){
            cout << "6" << endl;
        }
        else if (i == 2){
            cout << "28" << endl;
        }
        else if (i == 3){
            cout << "96" << endl;
        }
        else{
        
        diffrence4 = diffrence4+diffrence5;
        diffrence3 = diffrence3+diffrence4;
        diffrence2 = diffrence2+diffrence3;
        diffrence1 = diffrence1+diffrence2;
        cout << diffrence1 << endl;
        }

    }
}
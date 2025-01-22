#include <iostream>
#include <vector>

using namespace std;

int main(){

    long long int number{};
    cin>>number;
    if (number == 1){
        cout << "1" << endl;
    }
    else if (number == 4){
        cout << "3 1 4 2" << endl;
    }
    else if (number == 2 || number == 3){
        cout << "NO SOLUTION" << endl;
    }
    else{

        //even
        long long int even{};
        if (number % 2 == 0){
            even = number + 2;
        }
        else{
            even = number + 1;
        }

        for(int i = 0; i < (number+1)/2; i++){
            even -= 2;
            if (even == 0){
                break;
            }
            printf("%lld ", even);
        }

        //odd
        long long int odd{};
        if (number % 2 == 0){
            odd = number - 1;
        }
        else{
            odd = number;
        }
        
        while (odd > 0){
            printf("%lld ", odd);
            odd -= 2;
        }
        printf("\n");
    }

    return 0;
}
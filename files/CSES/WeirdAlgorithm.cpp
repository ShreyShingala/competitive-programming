#include <iostream>
#include <string>

using namespace std;

int main(){
    long int number = 0;
    cin >> number;

    while (number != 1){
        if (number % 2 == 0){
            number = number/2;
        }
        else{
            number = number*3 + 1;
        }
        printf("%ld ", number);
    }

    printf("\n");
    return 0;

}
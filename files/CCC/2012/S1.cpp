#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;
int main() {

    int number = 0;
    cin >> number;

    bool stop = false;
    int counter = 1;

    vector<int> currnums = {1, 2, 3};

    if (number < 4){
        cout << 0 << endl;
    }
    else{
        while (!stop){
            if (currnums[2] < number-1){
                counter++;
                currnums[2] += 1;
            }
            else if (currnums[2] == number-1){
                if (currnums[1] < number-2){
                    counter++;
                    currnums[1] += 1;
                    currnums[2] = currnums[1] + 1;
                }
                else if (currnums[1] == number-2){
                   if (currnums[0] < number-3){
                        counter++;
                        currnums[0] += 1;
                        currnums[1] = currnums[0] + 1;
                        currnums[2] = currnums[1] + 1;
                    }
                    else if (currnums[0] == number-3){
                        stop = true;
                    }
                }
            }

        }

        cout << counter << endl;
    }
}

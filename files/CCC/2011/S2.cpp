#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {

    int numoanswers;
    int correct = 0;
    cin >> numoanswers;

    vector<string> answers;
    vector<string> responses;

    for (int i = 0; i < numoanswers; i++){
        string answer;
        cin >> answer;
        answers.push_back(answer);
    }

    for (int i = 0; i < numoanswers; i++){
        string response;
        cin >> response;
        responses.push_back(response);
    }

    for (int i = 0; i < numoanswers; i++){
        if (answers[i] == responses[i]){
            correct++;
        }
    }

    cout << correct << endl;
}
    
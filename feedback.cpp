#include <fstream>
#include <string>
#include <vector>
using namespace std;

vector<int> letters_in_place(string guess, string answer){
    vector<int> result = {};
    for(int i=0; i<5; i++){
        if(guess[i] == answer[i]){
            result.push_back(i);
        }
    }

    return result;
}

vector<int> letters_present(string guess, string answer){
    
}
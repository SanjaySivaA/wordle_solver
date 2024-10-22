#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void check_in_file(string filename, string line){
    int i = 1;
    ifstream file;
    string comp;
    file.open(filename);

    while(file){
        getline(file,comp);
        if(line == comp){
            cout << line << " found in "  << filename << " in line " << i << "\n";
            break;
        }
        i++;
    }

    file.close();
    }

/*......................................................Duplicate....................................................................*/
void cp_to_vector(string filename,vector<string> v){//include <vector>
    ifstream file;
    string line;

    file.open(filename);

    while(file){
        getline(file, line);
        v.push_back(line);
    }

}

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

/*......................................................Duplicate....................................................................*/

int main(){

    string word;
    cout << "Enter the word\n";
    cin >> word;
    
    vector<string> lines;
    cp_to_vector("WordleAnswersList.txt", lines);

    check_in_file("WordleAnswersList.txt",word);

    return 0;
}

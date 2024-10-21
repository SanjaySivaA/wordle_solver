#include <iostream>
#include <fstream>
#include <string>
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

int main(){

    string word;
    cout << "Enter the word\n";
    cin >> word;
    
    check_in_file("WordleAnswersList.txt",word);

    return 0;
}

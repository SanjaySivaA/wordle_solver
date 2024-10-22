#include <fstream>
#include <string>
#include <vector>
using namespace std;

void cp_to_vector(string filename,vector<string> v){//include <vector>
    ifstream file;
    string line;

    file.open(filename);

    while(file){
        getline(file, line);
        v.push_back(line);
    }

}
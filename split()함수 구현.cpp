#include <bits/stdc++.h>
using namespace std;

vector<string> split(const string& input, string delimiter){
    vector<string> result;
    auto start = 0;
    auto end = input.find(delimiter);
    while(end != string::npos){
        result.push_back(input.substr(start, end - start));
        start = end + delimiter.size();
        end = input.find(delimiter, start);
    }
    result.push_back(input.substr(start, end - start));
    return result;
}
int main(){
    string str = "a-->b-->d-->a-->8-->234-->sldkfj-->#&*^";
    vector<string> strFin = split(str, "-->");
    for(const string &s: strFin){
        cout << s << "\n";
    }
    
    return 0;
}
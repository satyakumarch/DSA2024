#include<iostream>
#include<cctype>
using namespace std;

int main() {
    string first, second;
    cin >> first;
    cin >> second;
    // Check if both characters are uppercase
     string name = first+" "+second;
     for(char &c:name){
        c=toupper(c);

     }
     cout << name << endl;



    return 0;
}
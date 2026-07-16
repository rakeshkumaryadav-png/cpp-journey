#include <iostream>
using namespace std;
    void printname(string name){
        cout <<"your name is" << name << endl;
    }
    int main(){
        string name;
        cout <<"enter your name";
        getline(cin, name);

        printname(name);
    return 0;
}
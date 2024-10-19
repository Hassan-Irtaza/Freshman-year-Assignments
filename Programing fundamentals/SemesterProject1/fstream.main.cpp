#include <iostream>
#include <fstream>

using namespace std;

int main() {

    string pg = "syed hassan";
    string pg2;
    // ofstream out("sample.txt");
    //     out<<pg;
    ifstream in("sample.txt");
        getline(in,pg2);
        in >> pg2;
        cout << pg2;

    return 0;
}

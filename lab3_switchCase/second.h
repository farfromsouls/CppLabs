#include <cctype>
#include <iostream>
#include <fstream>
using namespace std;

int second() {
    ifstream inputFile("input2.txt");
    ofstream outputFile("output2.txt");

    char ch;
    while (inputFile.get(ch)) {
        if (islower(ch)) {
            ch = toupper(ch);
        } else if (isupper(ch)) {
            ch = tolower(ch);
        }
        outputFile << ch;
    }

    inputFile.close();
    outputFile.close();

    cout << "Success" << endl;

    return 0;
}
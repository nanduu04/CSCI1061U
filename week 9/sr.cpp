#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char **argv) {
    if (argc == 3) {
        ifstream in(argv[1]);
        if (in.is_open()) {
            string s(argv[2]);
            string word;
            int count = 0;
            while (in >> word) {
                int nPos = word.find(s, 0);
                while (nPos != string::npos) {
                    count++;
                    nPos = word.find(s, nPos + 1);
                }
            }
            cout << "\"" << s << "\"" << " was found " << count << " times." << endl;
            in.close();
        } else {
            cout << argv[1] << " does not exists!" << endl;
        }
    } else {
        cout << "Provide filename and a string as command line argument" << endl;
    }
    return 0;
}
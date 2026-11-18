#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string generatePassword(int length) {
    const string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    string password = "";
    for (int i = 0; i < length; ++i) {
        password += chars[rand() % chars.length()];
    }
    return password;
}

int main(int argc, char* argv[]) {
    srand(time(0));
    int length = 12;
    
    if (argc > 1) {
        length = stoi(argv[1]);
    }
    
    cout << generatePassword(length) << "\n";
    return 0;
}

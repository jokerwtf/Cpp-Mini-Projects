#include <iostream>
#include <string>

using namespace std;

int main() {
    int shift;
    string input, encrypted;
    cout << "Enter the string you want encrypted: ";
    cin >> input;

    cout << "Give your shifter key value (integer numbers only): ";
    cin >> shift;

    for (int i = 0; i < input.length(); i++) {
        if (isupper(input[i]))
            encrypted += char(int(input[i] + shift - 65) % 26 + 65);
        else
            encrypted += char(int(input[i] + shift - 97) % 26 + 97);
    }

    cout << "Your encrypted string is: " << encrypted << endl;
    return 0;
}

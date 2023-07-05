#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main() {
    int start_num, end_num, x, random;
    cout << "Type your lowest number: ";
    cin >> start_num;

    cout << "Type your highest number: ";
    cin >> end_num;

    srand(time(0));

    random = start_num + rand() % (end_num - start_num + 1);
    while (x != random) {
        cout << "\nTake your best guess: ";
        cin >> x;
        if (x == random) {
            cout << "Your guess is correct!";
            break;
        } else if (x < random) {
            cout << "Guess Higher!";
        } else {
            cout << "Guess Lower!";
        }
    }

    return 0;
}

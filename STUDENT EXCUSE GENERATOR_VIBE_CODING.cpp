#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string name;

    cout << "Enter student name: ";
    getline(cin, name);

    string excuses[] = {
        "{name} couldn't finish the assignment because the laptop decided to install updates for six hours.",
        "{name} couldn't do the homework because the internet stopped working right when research was needed.",
        "{name} forgot the assignment notebook at home after carrying it everywhere for the whole week.",
        "{name} couldn't complete the work because there was a power cut and the laptop battery was already dead.",
        "{name} was about to submit the assignment, but the file got corrupted at the last moment.",
        "{name} couldn't finish the homework because relatives came over and turned the house into a family function.",
        "{name} completed half of the assignment but fell asleep while waiting for the laptop to charge.",
        "{name} couldn't print the assignment because the printer had ink, paper, and attitude problems.",
        "{name} saved the assignment on a pen drive, but the pen drive decided to disappear mysteriously.",
        "{name} couldn't complete the assignment because the Wi-Fi was connected but the internet had other plans."
    };

    int totalExcuses = 10;

    srand(time(0));

    int index = rand() % totalExcuses;

    string excuse = excuses[index];

    int pos = excuse.find("{name}");

    while (pos != -1) {
        excuse.replace(pos, 6, name);
        pos = excuse.find("{name}");
    }

    cout << endl;
    cout << "Generated Excuse:" << endl;
    cout << excuse << endl;

    return 0;
}

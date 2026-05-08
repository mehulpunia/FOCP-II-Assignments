#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    string roasts[] = {
        "{name} writes code so slow that even Windows Update finished first.",
        "{name}'s code has so many bugs, even the bugs are reporting bugs.",
        "{name} debugs by changing random lines and calling it artificial intelligence.",
        "{name}'s logic is so weak, even if-else statements are confused.",
        "{name} writes code like a horror movie — everyone screams when it runs.",
        "{name}'s compiler doesn't show errors anymore, it just sighs deeply.",
        "{name} uses Stack Overflow so much, Stack Overflow started asking for rent.",
        "{name}'s code is so messy, even Ctrl+Z said 'I can't fix this'.",
        "{name} runs the program once and immediately starts praying to the coding gods.",
        "{name}'s laptop sees the code and automatically turns on airplane mode."
    };

    int totalRoasts = 10;

    srand(time(0));

    int index = rand() % totalRoasts;

    string roast = roasts[index];

    int pos = roast.find("{name}");

    while (pos != -1) {
        roast.replace(pos, 6, name);
        pos = roast.find("{name}");
    }

    cout << endl;
    cout << "Your Roast:" << endl;
    cout << roast << endl;

    return 0;
}

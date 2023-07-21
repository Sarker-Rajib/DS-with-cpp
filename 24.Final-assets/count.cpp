#include <iostream>
#include <sstream>
#include <unordered_map>
using namespace std;

pair<string, int> most_occurred_word(const string& s) {
    istringstream iss(s);
    unordered_map<string, int> word_count;
    string word;

    while (iss >> word) {
        word_count[word]++;
    }

    int max_count = 0;
    string most_occurred_word;
    for (const auto& entry : word_count) {
        if (entry.second > max_count) {
            max_count = entry.second;
            most_occurred_word = entry.first;
        }
    }

    return make_pair(most_occurred_word, max_count);
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Ignore the newline after T

    for (int i = 0; i < T; ++i) {
        string s;
        getline(cin, s);

        pair<string, int> result = most_occurred_word(s);
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}

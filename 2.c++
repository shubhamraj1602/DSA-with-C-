#include <iostream>
#include <unordered_map>

using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> charCount;

    // Count the frequency of each character in the string
    for (char c : s) {
        charCount[c]++;
    }

    // Find the first character with a frequency of 1
    for (int i = 0; i < s.length(); i++) {
        if (charCount[s[i]] == 1) {
            return i;
        }
    }

    // If no non-repeating character found, return -1
    return -1;
}

int main() {
    string s = "leetcode";
    int index = firstUniqChar(s);
    cout << "First non-repeating character index: " << index << endl;

    return 0;
}

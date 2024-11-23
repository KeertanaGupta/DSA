#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Assuming only lowercase alphabets
int main() {
    string s;
    cin >> s;

    int hash[26] = {0};                  // To store counts of characters
    vector<int> indices[26];             // To store indices of each character

    // Traverse the string and update hash and indices arrays
    for (int i = 0; i < s.length(); i++) {
        int charIndex = s[i] - 'a';
        hash[charIndex]++;               // Increment count
        indices[charIndex].push_back(i); // Store index
    }

    int q; 
    cin >> q;                            // Number of queries
    while (q--) {
        char c;
        cin >> c;

        int charIndex = c - 'a';
        cout << "Count: " << hash[charIndex] << endl;
        cout << "Indices: ";
        
        // Print all indices of the queried character
        for (int idx : indices[charIndex]) {
            cout << idx << " ";
        }
        cout << endl;
    }
    return 0;
}

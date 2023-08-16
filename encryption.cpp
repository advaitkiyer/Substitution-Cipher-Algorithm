#include <bits/stdc++.h>
using namespace std;
string substitutionCipher(string text, int key)
{
    for (auto &character : text)
    {
        if (!isalpha(character))
            continue;
        int index = isupper(character) ? character - 'A' : character - 'a';
        index = (index + key) % 26;
        character = isupper(character) ? char(index + 'A') : char(index + 'a');
    }
    return text;
}

int main()
{
    string input_text;
    getline(cin, input_text);
    cout << "Input Text: " << input_text << endl;

    int substitution_key;
    cin >> substitution_key;
    cout << "Input Key: " << substitution_key << endl;

    string encrypted_text = substitutionCipher(input_text, substitution_key);
    cout << "Encrypted Text: " << encrypted_text << endl;
    return 0;
}

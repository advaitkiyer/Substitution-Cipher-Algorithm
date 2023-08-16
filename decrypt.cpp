#include <bits/stdc++.h>

using namespace std;

string substitutionCipher(string text, int key)
{

    for (auto &character : text)
    {
        if (!isalpha(character))
            continue;

        int index = isupper(character) ? character - 'A' : character - 'a';
        index = (index - key + 26) % 26;
        character = isupper(character) ? char(index + 'A') : char(index + 'a');
    }
    return text;
}

int main()
{
    string encrypted_text;
    getline(cin, encrypted_text);
    cout << "Input Encrypted Text: " << encrypted_text << endl;

    int substitution_key;
    cin >> substitution_key;
    cout << "Input Key: " << substitution_key << endl;
    string decrypted_text = substitutionCipher(encrypted_text, substitution_key);
    cout << "Decrypted Text: " << decrypted_text << endl;

    return 0;
}

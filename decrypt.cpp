#include <bits/stdc++.h>

using namespace std;

// we create a function to perform the substitution cipher decryption-
string substitutionCipher(string text, int key)
{

    for (auto &character : text)
    {
        // to check if the character is alphabet-
        if (!isalpha(character))
            continue;

        // to find the index of the character-
        int index = isupper(character) ? character - 'A' : character - 'a';

        // here we apply decryption by subtracting the key and performing modulo by 26
        index = (index - key + 26) % 26;

        // to convert the index back to character-
        character = isupper(character) ? char(index + 'A') : char(index + 'a');
    }
    return text;
}

int main()
{
    // taking input of encrypted text-
    string encrypted_text;
    getline(cin, encrypted_text);
    cout << "Input Encrypted Text: " << encrypted_text << endl;

    // taking input of the substitution key-    
    int substitution_key;
    cin >> substitution_key;
    cout << "Input Key: " << substitution_key << endl;
    
    string decrypted_text = substitutionCipher(encrypted_text, substitution_key);
    cout << "Decrypted Text: " << decrypted_text << endl;

    return 0;
}

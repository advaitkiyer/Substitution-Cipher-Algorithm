#include <bits/stdc++.h>
using namespace std;

// we create a function to perform substitution cipher encryption-
string substitutionCipher(string text, int key)
{
    for (auto &character : text)
    {
        // to check if the character is alphabet we perform the following-
        if (!isalpha(character))
            continue;
        
        // to find the index of the character-
        int index = isupper(character) ? character - 'A' : character - 'a';

        // now we do substitution by adding the key and then performing modulo by 26-
        index = (index + key) % 26;

        // here we are converting the index back to the character-
        character = isupper(character) ? char(index + 'A') : char(index + 'a');
    }
    return text;
}

int main()
{
    // taking input of the text-
    string input_text;
    getline(cin, input_text);
    cout << "Input Text: " << input_text << endl;
    
    // taking input of the substitution key-
    int substitution_key;
    cin >> substitution_key;
    cout << "Input Key: " << substitution_key << endl;
    
    
    string encrypted_text = substitutionCipher(input_text, substitution_key);
    cout << "Encrypted Text: " << encrypted_text << endl;
    return 0;
}

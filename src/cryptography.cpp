#include <iostream>
#include <string>
using namespace std;
void encrypt(char chars[], int length) { //algorythm to encrypt the array to the reverse letter from the alphabet ex. a goes to z and b goes to y and so on
    for (int i=0; i<length;++i){
        if (isalpha(chars[i])) {
            char base = islower(chars[i]) ? 'a' : 'A';
            chars[i] = 'z' - (chars[i] - base);
        }
    }
}
int main() {
    cout << "Enter a word or phrase that you would like to encrypt:" << endl;

    string phrase;
    getline(cin, phrase);

    cout << "Entered phrase: " << phrase << endl;

    int length = phrase.length(); // Use string's length() method

    cout << "Length of the phrase: " << length << endl;

    char chars[300]; // Array to store user entered characters

    // Copy characters from the string to the array
    for (int i = 0; i < length && i < 300; ++i) {
        chars[i] = phrase[i];
    }

    cout << "Array containing each character: "; //Outputs each character from the entered string into an array to prepare for encryption
    for (int i = 0; i < length; ++i) {
        cout << chars[i] << " ";
    }
    cout << "\n";
    
        encrypt(chars, length); // calls the encryption algorythm to encrypt the array
    cout << "encrypted phrase:" << endl;
    for (int i = 0; i < length; ++i) { //displays the encrypted word or phrase
        cout << chars[i];
    }
    cout << endl;

    return 0;
}


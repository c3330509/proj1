#include <stdio.h>
#include <string.h>

void rotationcipher (char* str, int key);

int main () {
    
    char str[80];
    int key;  
    printf ("ENTER THE MESSAGE HERE\n"); //ask the user for the plain text to encrypt.
    
    fgets (str, 80, stdin); // the text input is then stored in str variable
    
    printf ("ENTER THE VALUE OF THE KEY HERE\n"); //user puts the key in
    scanf ("%d", &key); //reads the value the user put in
    
    printf ("THE CIPHERED TEXT IS\n"); 
    
    rotationcipher (str, key); 
}

void rotationcipher (char* str, int key) {
    int i = 0; 
    int cipherValue; 
    char cipher; 
    
    while (str[i] != 0 && strlen(str) - 1 > i) {
        cipherValue = (str[i] - 97 + key) % 26 + 97;
        cipher = (cipherValue);
        
        printf ("%c", cipher);  // the cipher will be printed
        i++; //incrementation 
    }

}
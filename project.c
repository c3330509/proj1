#include <stdio.h>
#include <string.h>
 
int main () {
    char str[1024]; //encrypting a message (rotation)
    char string[1024]; //decrypting a message (rotation)
    char msg[1024]; // encrypting a message (substitution)
    char message[1024]; // decrypting a message (substitution)  
    char lead[26]; 
    char alpha [26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int key, i, j;
    
    int choose;
    printf("press 1 to choose encryption for rotation cipher\n"); 
    printf("press 2 to choose decryption for rotation cipher\n");
    printf("press 3 to choose encryption for substitution cipher\n");
    printf("press 4 to choose decryption for substitution cipher\n");
    scanf ("%d", &choose);
    switch (choose) {
        case 1: 
            printf ("Enter the original message here:\n"); //ask the user for the plain text to encrypt.
            fgets (str, 1024, stdin); // the text input is then stored in str variable
            printf ("Enter the key here: \n"); //user puts the key in
            scanf ("%d", &key); //reads the value the user input
                for(i = 0; (i < 1024 && str[i] != 0); i++) {
                    str[i] = str[i] + key; 
    }
            printf ("The encrypted text is: %s\n", str); // the cipher will be printed
        break;
            
        case 2: 
            printf("Enter the cipher text here: \n"); //ask the user to input the message
            getchar(); //to allow the compiler to ignore new line ('enter') by the programmer.
            fgets(string, 1024, stdin); // the text input is stored in the string varible
            printf("Enter the key here:\n"); //user choose then inputs the key
            scanf("%d", &key); //reads the value of the user input	
                for(i = 0; (i < 1024 && string[i] != 0) ; i++) {
                    string[i] = string [i] - key; // decrypting the message
            }
            printf ("The decrypted message is: %s\n", string); //prints the decrypted message
        break; 
            
            case 3: 
                printf("Enter your original text here: \n"); //ask the user to input the message 
                getchar (); 
                fgets(msg, 1024, stdin); //stores the message in stdin
                printf ("Enter the unique key of 26 characters here:"); //the 26 character is decided by the user
                scanf("%s", lead); // scans the input
                    for (i =0; i <strlen(msg); i++) {
                        for (j = 0; j< 26; j++) {
                            if (alpha[j] == msg[i]) { 
                                msg[i] = lead[j]; 
                                }
                        }
                    }
                printf ("The encrypted text is: %s\n", msg); //prints the encrypted text for substitution cipher
            break; 
                
            case 4: 
                printf("Enter your original text here: \n"); //ask the user to input the message 
                getchar (); 
                fgets(message, 1024, stdin); //stores the message in stdin
                printf ("Enter the unique key of 26 characters here:"); //the 26 character is decided by the user
                scanf("%s", lead); // scans the input
                    for (i =0; i <strlen(message); i++) {
                        for (j = 0; j< 26; j++) {
                            if (message[i] == lead [j]){
                                message[i] = alpha[j];
                            }
                        }
                    }
                printf ("the decrypted text is: %s\n", message); //prints the decrypted text for substitution cipher
            break;
            
            default: 
                 printf ("PLEASE ENTER A VALID CHOICE\n"); 
                 break; 
}
}
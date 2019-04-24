#include <stdio.h>
#include <string.h>
 
int main () {
    char str[1024]; //encrypting a message (rotation)
    char string[1024]; //decrypting a message (rotation)
    char msg[1024]; // encrypting a message (substitution)
    char message[1024]; // decrypting a message (substitution)  
    char lead[26]; //key for the substitution cipher
    char alpha [26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}; //allows the message to be readable
    int key, i, j;
    
    int choose;
    printf("press 1 to choose encryption for rotation cipher\n"); // the printf allows the user to choose
    printf("press 2 to choose decryption for rotation cipher\n");
    printf("press 3 to choose encryption for substitution cipher\n");
    printf("press 4 to choose decryption for substitution cipher\n");
    scanf ("%d", &choose); //reads the users choice
    switch (choose) {
        case 1: //performes encryption for rotation cipher
            printf ("Enter the original message here:\n"); //ask the user for the plain text to encrypt.
            fgets (str, 1024, stdin); // the text input is then stored in str variable
            printf ("Enter the key here: \n"); //user puts the key in
            scanf ("%d", &key); //reads the value the user input
                for(i = 0; (i < 1024 && str[i] != 0); i++) { 
                    str[i] = str[i] + key; // the key will be added onto the original message
    }
            printf ("The encrypted text is: %s\n", str); // the cipher will be printed
        break;
            
        case 2: 
            printf("Enter the message here: \n"); //ask the user to input the message
            getchar(); //to allow the compiler to ignore new line ('enter') by the programmer.
            fgets(string, 1024, stdin); // the text input is stored in the string varible
            printf("Enter the key here:\n"); //user choose then inputs the key
            scanf("%d", &key); //reads the value of the user input	
                
                for(i = 0; (i < 1024 && string[i] != 0) ; i++) {
                    string[i] = string [i] - key; // the key will be subtracted from the encrypted message 
            }
            printf ("The decrypted message is: %s\n", string); //prints the decrypted message
        break; 
            
            case 3: 
                printf("Enter the original text here: \n"); //ask the user to input the message 
                getchar (); //allows the compiler to ignore new line within the code
                fgets(msg, 1024, stdin); //stores the message in stdin and also reads whitespaces
                printf ("Enter the unique key of 26 characters here:"); //the 26 character is decided by the user
                scanf("%s", lead); // scans the key the user input
                    for (i =0; i <strlen(msg); i++) {
                        for (j = 0; j< 26; j++) {
                            if (alpha[j] == msg[i]) {  //this makes the original message readable by the user
                                msg[i] = lead[j]; // the key is then stored into the original message respectively, hence encrypting it
                                }
                        }
                    }
                printf ("The encrypted text is: %s\n", msg); //prints the encrypted text for substitution cipher
            break; 
                
            case 4: 
                printf("Enter the message here: \n"); //ask the user to input the message 
                getchar (); //allows the compiler to ignore new line within the code
                fgets(message, 1024, stdin); //stores the message in stdin
                printf ("Enter the unique key of 26 characters here:"); //the 26 character is decided by the user
                scanf("%s", lead); // scans the input
                    for (i =0; i <strlen(message); i++) {
                        for (j = 0; j< 26; j++) {
                            if (message[i] == lead [j]){ //the key equals the encrypted message, which makes it unreadable
                                message[i] = alpha[j]; //the alphabet is then replaced by the message, making it readable, and hence decrypting it
                            }
                        }
                    }
                printf ("the decrypted text is: %s\n", message); //prints the decrypted text for substitution cipher
            break;
            
            default: 
                 printf ("PLEASE ENTER A VALID CHOICE\n"); // if the choice is neither 1, 2, 3 or 4, then this prints
                 break; 
}
}
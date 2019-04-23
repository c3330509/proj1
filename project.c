#include <stdio.h>
#include <string.h>

char *encryption (char[]); 
char *decryption (char[]); 
char alpha [26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char key[26];

int main () { 
    
    char str[1024]; //encrypting a message
    int key, i;  
    
    printf ("--ROTATION CIPHER--\n"); //title of cipher that is being performed
    
    printf ("Enter the original message here:\n"); //ask the user for the plain text to encrypt.
    
    fgets (str, 1024, stdin); // the text input is then stored in str variable
    
    printf ("Enter the key here: \n"); //user puts the key in
    
    scanf ("%d", &key); //reads the value the user input
    
    for(i = 0; (i < 1024 && str[i] != 0); i++) {
        str[i] = str[i] + key; 
    }
   printf ("The encrypted text is: %s\n", str); // the cipher will be printed
   
   char string[1024]; //the code for decrypting a message starts here
	
   printf("Enter the cipher text here: \n"); //ask the user to input the message
	
   getchar(); //to allow the compiler to ignore new line ('enter') by the programmer.
	
   fgets(string, 1024, stdin); // the text input is stored in the string varible

   printf("Enter the key here:\n"); //user choose then inputs the key
	
   scanf("%d", &key); //reads the value of the user input	
	
   for(i = 0; (i < 1024 && string[i] != 0) ; i++) {
       
		string[i] = string [i] - key; // decrypting the message
}

printf ("The decrypted message is: %s\n", string); //prints the decrypted message

int choice , flag = 0; // identifying variables. 
char *cipheredtext;
char msg[1024];

   printf("--SUBSTITUTION CIPHER--\n"); //substitution cipher begins here
   
   printf("Enter your original text here: \n"); //ask the user to input the message 
   
   getchar (); 

   fgets(msg, 1024, stdin); //stores the message in stdin
   
   printf("The original message is: %s", msg); // prints the original message
   
   do { //allows the user to choose whether they want to perform encryption or decryption.
       
       printf("press 1 for encryption\npress 2 for decryption\npress 0 for exit\n"); 
       
       scanf ("%d", &choice); 
       switch (choice){
           case 1: 
            cipheredtext = encryption (msg); 
            flag = 1; 
            break; 
           
           case 2: 
            if (flag == 1)
                decryption (cipheredtext); 
            else 
                printf("FIRST PERFORM EXCRYPTION PROCESS\n"); 
                break; 
            
            default : 
                printf ("PLEASE ENTER A VALID CHOICE\n"); 
                break;
            }
        } while (choice != 0);
       
   }

char *encryption (char cipher_text []){ //function for encryption process
int i, j; // varibable identification
   
   printf ("Enter the unique key of 26 characters here:"); //the 26 character is decided by the user
   
   scanf("%s", key); // scans the input
   
   for (i =0; i <strlen(cipher_text); i++) {
     for (j = 0; j< 26; j++) {
        if (alpha[j] == cipher_text [i]) { 
            cipher_text[i] = key [j];
            break;
        }
    }
}
    printf ("The encrypted text is: %s\n", cipher_text); //prints the encrypted text for substitution cipher
    return cipher_text; 
}

char *decryption (char cipher_text []){
    
    int i, j;
    
    char cipher [255]; 
    
    strcpy (cipher, cipher_text); 
    
    for (i =0; i <strlen(cipher_text); i++) {
        for (j = 0; j< 26; j++) {
            if (cipher[i] == key [j]){
                cipher[i] = alpha[j];
                break;
            }
        }
    }
    
    printf("The decrypted text is: %s", cipher);
    return 0;
}
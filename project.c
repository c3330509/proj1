#include <stdio.h>
#include <string.h>

char *encryption (char[]); 
char *decryption (char[]); 
char alpha [26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char key[26];

int main () { 
    
    char str[1024]; //encrypting a message
    int key, i;  
    
    printf ("ENTER THE MESSAGE HERE\n"); //ask the user for the plain text to encrypt.
    
    // scanf ("%c", str);
    fgets (str, 1024, stdin); // the text input is then stored in str variable
    
    printf ("ENTER THE KEY HERE\n"); //user puts the key in
    scanf ("%d", &key); //reads the value the user input
    
    for(i = 0; (i < 1024 && str[i] != 0); i++) {
        
        str[i] = str[i] + key; 
         
        // printf ("%c\n %s\n--%d\n", str[i], str, i);  // the cipher will be printed
    }
    
   printf ("THE ENCRYPTED TEXT IS %s\n", str);
    
    char string[1024]; //the code for decrypting a message starts here
	
	printf("ENTER THE MESSAGE HERE\n"); //ask the user to input the 
	//message
	getchar();
	//scanf("%s\n", string); 
	fgets(string, 1024, stdin); // the text input is stored in the 
	//string varibale
	printf("ENTER THE KEY\n"); //user inputs the key
	scanf("%d", &key); //reads the value of the user input
	
	for(i = 0; (i < 1024 && string[i] != 0) ; i++) {
		
		string[i] = string [i] - key; // decrypting the message
		// printf("%c", string[i]); 
}
printf ("DECRYPTED MESSAGE %s\n", string); //prints the decrypted message

int choice , flag = 0; 
char *c_text;
char msg[1024];
   // printf ("ENTER THE PLAIN TEXT HERE:");
   printf("SUBSTITUTION CIPHER\n");
   printf("ENTER YOUR TEXT:\n");
   getchar ();  
   //scanf("%1024[^\n]%*c", msg);
   //scanf("%s", msg);
    fgets(msg, 1024, stdin);
   printf("YOUR PLAIN TEXT IS: %s", msg); 
   do {
       printf("press 1 for encryption\n press 2 for decryption\n press 0 for exit\n"); 
       scanf ("%d", &choice); 
       switch (choice){
           case 1: 
            c_text = encryption (msg); 
            flag = 1; 
            break; 
           case 2: 
            if (flag == 1)
                decryption (c_text); 
            else 
                printf("FIRST PERFORM EXCRYPTION PROCESS\n"); 
                break; 
            case 0: 
                break;
            default : 
                printf ("PLEASE ENTER A VALID CHOICE\n"); 
                break;
       }  
   } while (choice != 0);
   } 

char *encryption (char cipher_text []){
int i, j; 
   printf ("ENTER THE UNIQUE KEY OF 26 CHARACTERS FOR ENCRYPTION:");
    scanf("%s", key); 
    for (i =0; i <strlen(cipher_text); i++) {
        for (j = 0; j< 26; j++) {
            if (alpha[j] == cipher_text [i]) {
                cipher_text[i] = key [j];
                break;
            }
        }
    }
    printf ("YOUR ENCRYPTED MESSAGE IS: %s\n", cipher_text); 
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
    
    printf("DECRYPTED TEXT IS: %s\n", cipher);
    
    return 0;
}
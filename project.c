#include <stdio.h>
#include <string.h>

int main () { 
    
    char str[80]; //encrypting a message
    int key, i;  
    
    printf ("ENTER THE MESSAGE HERE\n"); //ask the user for the plain text to encrypt.
    
    // scanf ("%c", str);
    fgets (str, 80, stdin); // the text input is then stored in str variable
    
    printf ("ENTER THE KEY HERE\n"); //user puts the key in
    scanf ("%d", &key); //reads the value the user input
    
    for(i = 0; (i < 80 && str[i] != 0); i++) {
        
        str[i] = str[i] + key; 
         
        // printf ("%c\n %s\n--%d\n", str[i], str, i);  // the cipher will be printed
    }
    
   printf ("THE ENCRYPTED TEXT IS %s\n", str);
    
    char string[80]; //decrypting a message
	
	printf("ENTER THE MESSAGE HERE\n"); //ask the user to input the 
	//message
	getchar();
	//scanf("%s\n", string); 
	fgets(string, 80, stdin); // the text input is stored in the 
	//string varibale
	printf("ENTER THE KEY\n"); //user inputs the key
	scanf("%d", &key); //reads the value of the user input
	
	for(i = 0; (i < 80 && string[i] != 0) ; i++) {
		
		string[i] = string [i] - key; // decrypting the message
		// printf("%c", string[i]); 
}
printf ("DECRYPTED MESSAGE %s\n", string); //prints the decrypted message
}
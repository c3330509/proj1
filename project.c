#include <stdio.h>
#include <string.h>

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



char message = "txt message"; 
char text [27] = {'d','w','c','q','f','e', 'h','o','y','x','g','u','v','t','i','z','j','n','m','l','a','b','p','r','s','k','space'); 
// substituition cipher starts here

char subciphencrypt = Encrypt (message, text); 
printf ("ENTER THE MESSAGE HERE: %s\n", message);
printf("ENCRYPTED MESSAGE IS: %s\n", subciphencrypt);
char subciphdecrypt = Decrypt(subciphencrypt)
}


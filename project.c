#include <stdio.h>
#include <string.h>

int main () {
    
    char str[80];
    int n, i; 
    printf ("ENTER THE MESSAGE HERE\n");
    fgets(str, 80, stdin); //does read the whitespaces instead of exiting after the whitespace for string. 
    
    n = strlen(str);
    
    for(i=0; i < n; i++)
    {
        if (str[i] >= 97  && str [i] <= 122 )
        str [i] = str [i] - 32;
        
        printf ("SENTENCE IN UPPER CASE IS  %d\n", n); 
    }
   // printf ("SENTENCE IN UPPER CASE IS\n", str[i]);
    
    return 0; 
    
}

void main () {
    
    int key, i; 
    char x [30]; 
    
    clrscr(); 
    printf ("ENTER THE MESSAGE HERE\n"); 
    fgets(str, 80, stdin); //reads the whitespaces
    
    printf("ENTER THE KEY VALUE HERE\n"); 
    scanf ("%d", &key); 
    {
        for (i = 0; i < strlen(x); i++); {
            
            if (x[i] == ' ') { } ; // if the input is a blankspace it will do nothing
            
            else {
                
                if (x[i] >= 'y') {
                    x[i] = x[i] - 26; 
                }
                
                x[i] = x[i] + key;
                }
        } 

    }
    
    
    
}
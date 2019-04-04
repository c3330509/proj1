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
#include <stdio.h>

int main ()
{

    int i = 1, n;
    

    while (i <= 7)
    {

        printf ("\nDigite um numero entre 12 e 20: ");
        scanf ("%d" , &n);

        if (n > 12 && n < 20){

            printf ("\nO numero digitado eh: %d", n);
            break;
        }

        else {
            printf ("\nDigite outro numero! ");
        }


        i++;     
    }

    

    
 return 0;


}





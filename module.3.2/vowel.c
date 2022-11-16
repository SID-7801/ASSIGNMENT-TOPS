#include<stdio.h>
int main()
{
    char alphabet;

    while(alphabet!='1'){
    printf("Enter the alphabet: ");
    scanf("%c",&alphabet);
    //alphabet = getc(stdin);
    switch (alphabet)
        {
            case 'a':
            printf("Its is a vowel\n");
            break;

            case 'i':
            printf("Its is a vowel\n");
            break;

            case 'o':
            printf("Its is a vowel\n");
            break;

            case 'e':
            printf("Its is a vowel\n");
            break;
            case 'u':
            printf("Its is a vowel\n");
            break;

            case '1':
            printf("thanks for using \n");
            break;
        
            default:
            printf("it is a consonant\n");
            break;
        }
        

    }

    
    return 0;
    
}



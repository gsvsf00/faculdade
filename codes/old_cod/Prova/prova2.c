#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void quest1(){
    
    char s1[50], s2[50];
    printf("\ndigite s1: ");
    scanf("%[^\n]s", s1);
    getchar();
    printf("\ndigite s2: ");
    scanf("%[^\n]s", s2);
    getchar();
    for(int i = 0; s1[i] != '\0'; ++i){
        for(int j=0; s2[j] != '\0'; ++j)
            if(s1[i]==s2[j]){
                s1[i] = ' ';
            }
    }
    printf("%s\n", s1);
}

/*void quest1(char str1[], char str2[]){
    //char str1[50]= "spiderman no way home", str2[] = "rafael", 
    char str3[50];
    strcpy(str3, str1);
    for(int i = 0; str3[i] != '\0'; ++i){
        for(int j=0; j < str2[j] != '\0'; ++j){
            if(str3[i]==str2[j]){
                str3[i] = (1<<2);
            }    
        }
    }
	printf("%s\n", str3);
}*/

/*char *quest2(char str[], char c){
    // primeira ocorrência da letra a
    char *letra;
    for(int i=0; str[i] != '\0'; ++i)
        if(str[i] == c)
            letra = &str[i];

    printf("\n%c\n", *letra); // imprime a letra a
}*/

void quest2(){

    char s1[50], c;
    printf("\ndigite s1: ");
    scanf("%[^\n]s", s1);
    getchar();
    printf("\ndigite char: ");
    scanf("%c", c);
    getchar();
    char *letra;

    for(int i=0; s1[i] != '\0'; ++i)
        if(s1[i] == c)
            letra = &s1[i];

    printf("\n%c\n", *letra); 
}

int main(){
    quest1();
    quest2();    
  return 0;
}
#include<stdio.h>
#include<string.h>

void Login(); // Login Page
void Register();  // Register Page
int string_equator(char str1[], char str2[]);

int main(){
    int choice;
    printf("Welcome to Family Management System\nCodes:-");
    printf("1. Login\n");
    printf("2. Register\n");
    printf("3. exit\n");
    for(int i=1; ;i++){
        printf("Enter code: ");
        scanf("%d",&choice);
        if(choice == 3){
            break;
        }
        switch(choice){
            case 1: Login();
            break;
            case 2: Register();
            break;
            default: printf("Wrong code entered");
        }
        if(choice == 1 || choice == 2){
            break;
        }
    }
}

void Login(){
    char inuser[100], outuser[100], check_user[100];
    int pass, outpass;
    printf("***************\n");
    printf("=====Login=====\n");
    FILE *fptr;
    for(int j=0; ;j++){
    fptr = fopen("userpass.txt", "r");
    printf("Enter Username:- ");
    scanf("%s", &inuser);
    for(int i=0; ;i++){
        fscanf(fptr, "%s", outuser);
        if(string_equator(check_user, outuser)){
            printf("Incorrect Username!!\n");
            break;
        }
        if(string_equator(inuser, outuser)){
            fscanf(fptr, "%d", &outpass);
            
            printf("Enter Password: ");
            scanf("%d", &pass);
            if(pass == outpass){
                printf("Correct Password");
                return;
            }
            else{
                printf("Incorrect Password\nPlease retry\n");
            }
        }
        strcpy(check_user, outuser);
    }
    fclose(fptr);
    }
}

void Register(){
    printf("Coming Soon.............");
}

int string_equator(char str1[],char str2[]){
    int str1_len = strlen(str1);
    int str2_len = strlen(str2);
    if(str1_len == str2_len){
        for(int i=0;i<=strlen(str1);i++){
            if(str1[i] != str2[i]){
                return 0;
            }
        }
        return 1;
    }
    else{
        return 0;
    }
}
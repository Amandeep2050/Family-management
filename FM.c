#include<stdio.h>

void Login();
void Register();

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
    printf("Coming Soon.............");
}

void Register(){
    printf("Coming Soon.............");
}
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include "project25f.h"
char* input(){
    char c = 0;
    char* string[256];
    while(c != '\r'){
        if(c == '\b'){
            putchar('\b'),putchar('\b');
        }
        strcpy(string,c);
        c = getchar();
    }
    return string;
}
void login(){
    int choice;
    printf("    ==================== Login ====================\n    1. Login\n    2. Register (If you do not have an account)\n    3. Exit\n===============================================\n    Choose an option (1-3):"); 
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Please input your account name: ");
            char* name = input();
            printf("Enter password: ");
            char* password = input();
            break;
        case 2:
            break;
        case 3:
            printf("Byebye!\n");
            return;
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 3.\n");
            login();
            break;
    }
}
void passwordschecker(){
    file1 = freopen("file1.txt")
}
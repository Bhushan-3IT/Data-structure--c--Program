1)to push and pop element in the stack using array

#include<stdio.h>
#define MAX 5;

int stack[MAX]

int top = -1;

void push(int a) {
    if (top == MAX-1) {
        printf("Stack Overflow");
    } else {
         stack[++top] = a;
        printf("Pushed %d into stack\n", a);
    }
}
void pop(){
    if (top == -1) {
        printf("Stack underflow");
    } else {
          printf("pop %d from stack\n", stack[top]);
        top--;
    }
}

void show(){
    if (top ==-1) {
        printf("Stack is Empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main(){
     push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60); 
    show();

    pop();
    pop();
    pop();
    pop();
    pop();
    pop(); 
    show();

 return 0;
}

2)print reverse char array using stack

#include<stdio.h>
#define MAX 100

char stack[MAX];

int top = -1;

void push(int c) {
    if (top == MAX-1) {
        printf("Stack Overflow");
        return;
    }  
         stack[++top] = c;
   }

char pop(){
    if (top == -1) {
        printf("Stack Underflow\n");
        return '\0';
    } 
          return stack[top--];
    }


int main(){
     char str[MAX];
     printf("enetr string:");
     scanf("%s",&str);
     for (int i = 0; str[i] != '\0'; i++) {
        push(str[i]);
    }
     while(top!=-1){
    printf("%c",pop());
    }
    
 return 0;
}

3) cheack palindrome

#include<stdio.h>
#include<string.h>
#define MAX 100

char stack[MAX];
int top = -1;
void push(int c) {
    if (top == MAX-1) {
        printf("Stack Overflow");
        return;
    }  
         stack[++top] = c;
   }

char pop(){
    if (top == -1) {
        printf("Stack Underflow\n");
        return '\0';
    } 
          return stack[top--];
    }

    int main(){
     char str[MAX];
     printf("enter string:");
     scanf("%s",str);
     int len=strlen(str);
     for (int i = 0; i<len; i++) {
        push(str[i]);
    }
        int isPalindrome = 1;
    for (int i = 0; i < len; i++) {
        if (str[i] != pop()) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome");
    } else {
        printf("The string is NOT a palindrome");
    }
     return 0;
}

5) undo operation using stack

#include <stdio.h>
#include <string.h>
#define MAX 1000
char stack[MAX];

int top = -1;

void push(int c) {
    if (top == MAX-1) {
        printf("Stack Overflow");
        return;
    }  
         stack[++top] = c;
   }

char pop(){
    if (top == -1) {
        printf("Stack Underflow\n");
        return '\0';
    } 
          return stack[top--];
    }

    void showText() {
        printf("after undo: ");
   for (int i = 0; i <= top; i++) {
        printf("%c", stack[i]);
    }
    printf("\n");
}


int main(){
     char str[MAX];
     printf("enetr string:");
     scanf("%s",&str);
     for (int i = 0; str[i] != '\0'; i++) {
        push(str[i]);
    }
   for (int i = 0; i < 1; i++) {
        pop();
    }
showText();
 return 0;
}

#include<stdio.h> 
#define MAX 10
char stack[MAX];
int top=-1;
int mismatch(char a,char e){
    if(a=='['&&e==']'){
        return 0;
    }
    else if(a=='('&&e==')'){
        return 0;
    }
    else if(a=='{'&&e=='}'){
        return 0;
    }
     return 1;
}
char pop(){
    char temp=stack[top];
    top--;
    return temp;
}
void push(char a){
    top++;
    stack[top]=a;
}
int main(){
    char exp[20];
    printf("enter expression to be checked");
    scanf("%s",exp);
    char *e=exp;
    while(*e!='\0'){
        if(*e=='('||*e=='['||*e=='{')
        {
            push(*e);
        }
        if(*e==')'||*e==']'||*e=='}'){
            if(top==-1){
                printf("Invalid expression");
                return 0;
            }
            else{
                char temp=pop();
                if(mismatch(temp,*e)){
                    printf("mismatch");
                    return 0;
                }

            }
        }
        e++;
    }
    if(top==-1){
        printf("\nexpression is correct");
    }
    else{
        printf("\nexpression is not correct");
    }
}
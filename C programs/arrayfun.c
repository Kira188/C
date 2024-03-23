#include<stdio.h>
char charscan(char *a,int size);
int main()
{
    char a[20];
    charscan(a,20);
    puts(a);
}
char charscan(char *a,int size){
    char ch,p;
    int t;
    p=a;
    for(t=0;t<size;t++){
        scanf("%c",&ch);
        switch(ch){
            case '\n':a[t]='\0';
            return p;
            case '\b':if(t>0) t--;
            break;
            default:a[t]=ch;
        }
    }
a[79]='0';
return p;
    
}
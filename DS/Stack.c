#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int stack[MAX];
int top=-1;
int isEmpty(){
    return top==-1;
}
void push(int var){
    if(top==MAX-1){
        printf("Stack overflow\n");
    }
    else{
        top++;
        stack[top]=var;
    }
    
}
int pop(){
    int temp;
    if(top==-1){
        printf("stack underflow\n");
        return -1;
    }
    temp=stack[top];
    top--;
    return temp;
}
void printi(){
    for(int i=0;i<MAX;i++){
        printf("%d ",stack[i]);
    }printf("\n");
}
void DFS(int G[][7], int start, int n)
{
    int u = start;
    int v;
    static int visited[7] = {0};
    printf("hello");
    printf("%d ", u);
        visited[u] = 1;
        push(u);
    //if (visited[u] == 0)
    //{
        while (!isEmpty())
        {
            u=pop();
            push(u);
         for (v = 1; v <= n; v++)
        {
            if (G[u][v] == 1 && visited[v] == 0)
            {
                //DFS(G, v, 7);
                printf("%d ", v);
                visited[v] = 1;
            }
        }   
        }
        
        
        
    //}
}

    int main(){
    int G[7][7] = {{0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 0, 0, 0},
                   {0, 1, 0, 0, 1, 0, 0},
                   {0, 1, 0, 0, 1, 0, 0},
                   {0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 1, 0, 0}};

    

     DFS(G,1,7);
    return 0;
}


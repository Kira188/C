#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
}*front = NULL,*rear = NULL;

int isEmpty(){
    return front==NULL;
}
void enqueue(int i){
    struct Node *t=(struct Node*)malloc(sizeof(struct Node));
    if (t == NULL)
    printf("queue is full");
    else {
        t->data=i;
        t->next=NULL;
        if(isEmpty())
        front=rear=t;
        else
        rear->next=t;
        rear=t;
    }
}
int dequeue(){
    int x = -1;
    struct Node *t;
    if(isEmpty()){
        printf("queue is empty");
    }
    else{
        t = front;
        x = front->data;
        front=front->next;
        free(t);
    }
    return x;
}
void BFS(int G[][7],int start,int n){
    int u = start;
    int visited[7]={0};
    printf("%d ",u);
    visited[u]=1;
    enqueue(u);
    while(!isEmpty()){
        u=dequeue();
        for(int v=1;v<n;v++){
            if(G[u][v]==1 && visited[v]==0){
                printf("%d ",v);
                visited[v]=1;
                enqueue(v);
            }
        }
    }
}
void DFS(int G[][7], int start, int n)
{
    int u = start;
    int v;
    static int visited[7] = {0};
    if (visited[u] == 0)
    {
        printf("%d ", u);
        visited[u] = 1;
        for (v = 1; v <= n; v++)
        {
            if (G[u][v] == 1 && visited[v] == 0)
            {
                DFS(G, v, 7);
            }
        }
    }
}
int main(){
    int G[7][7] = {{0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 0, 0, 0},
                   {0, 1, 0, 0, 1, 0, 0},
                   {0, 1, 0, 0, 1, 0, 0},
                   {0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 1, 0, 0}};

    BFS(G,4,7);

     DFS(G,1,7);
    return 0;
}
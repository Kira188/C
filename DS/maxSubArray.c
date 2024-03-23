#include<stdio.h>
int maxSubArray(int* nums, int numsSize){
    int i=0,j=0;
    int Maax_size=-999999;
    int record[2]={0};
    
    for(i=0;i<numsSize;i++){
        int sii=0;
        
        for(j=i;j<numsSize;j++)
        {
            sii+=nums[j];
            //printf(" %d",sii);
            if(Maax_size<sii)
            {Maax_size = sii;
            record[0]=i;
            record[1]=j;
            }
            if(Maax_size<0)
            {break;}
            
        }  
        
    }
    
    printf(" at %d %d",record[0]+1,record[1]+1);

    return Maax_size;
}
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int size=sizeof(arr)/sizeof(int);
    maxSubArray(arr,size);
}

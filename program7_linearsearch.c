#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int i,element,len,temp=0;
    len=sizeof(arr)/sizeof(arr[0]);
    printf("enter element to search :");
    scanf("%d",&element);
    for(i=0;i<len;i++){
        if(arr[i]==element){
            temp=1;
            break;    
        }
    }
        if(temp==1){
            printf("element found at  %d",i);
        }
        else{
            printf("element not found");
        }
return 0;
}

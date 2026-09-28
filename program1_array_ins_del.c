#include<stdio.h>
int main(){
    int array[10] = {10,20,30,40,50}, i, length,value,position,del_position;
    length = 5;
    printf("enter value want to insert");
    scanf("%d",&value);
    printf("enter position want to insert");
    scanf("%d",&position);
    
    for(i=length;i >= position;i--){
        array[i] = array[i-1];
    }
    array[position - 1] = value;
    length = length + 1;
    printf("array after inserion\n");
    for (i = 0; i < length;i++) {
        printf("%d\t", array[i]);
    }
    printf("enter position want to delete");
    scanf("%d",&del_position);
   
    for(i = del_position - 1; i < length - 1;i++){
        array[i] = array[i+1];
    }
    length = length - 1;
    printf("array after deletion\n");
    for (i = 0; i < length;i++) {
        printf("%d\t", array[i]);
    }
    return 0;
}

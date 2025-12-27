#include<stdio.h>
int main(){
    int size,number;
    printf("enter the size of array : ");
    scanf("%d",&size);
    

    int arr[size];
    printf("enter elements in the array :\n ");
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("enter the element which you want to find in the array");
    scanf("%d",&number);

    for(int i = 0;i<size;i++){
        if(number==arr[i]){
            printf("the element %d is found at this %d index",number,i);
            return 0;
        }
    }
    printf("the element is not found in the array sorry to inform you that :");
    return 0;

}

#include<stdio.h>
int binarySearch(int arr[],int key,int lb,int ub){
    if(lb<=ub){
        int middle=(lb+ub)/2;
        if(arr[middle]==key){
            return middle;
        }
        else if(arr[middle]>key){
            ub=middle-1;
        }
        else{
            lb=middle+1;
        }
        binarySearch(arr,key,lb,ub);
    }
    else
    return -1;
}
int main(){
    int list[]={10,20,40,50,60,70,80};
    int len=sizeof(list)/sizeof(list[0]),key=80;
    int index=binarySearch(list,key,0,len-1);
    if(index==-1)
        printf("%d not present!",key);
    else
        printf("%d is found at %d",key,index+1);
    return 0;
}
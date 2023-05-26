#include<stdio.h>
#include<stdlib.h>

int* printArray(int* array, int* n){
    printf("Printing the original array:-\n");
    for(int i=0;i<*n;i++){
        printf("array[%d] = %d\n",i,array[i]);
    }
}
int* printArray1(int* array1, int* merge){
    printf("Printing the modified array:-\n");
    for(int i=0;i<*merge;i++){
        printf("array[%d] = %d\n",i,array1[i]);
    }
}
int* newarrayusingMalloc(int* n, int* n1, int* array, int index, int* array1, int* merge){
    *merge = (*n) + (*n1);
    int* newArray=(int*)malloc((*merge)*(sizeof(int)));
    int i;
    printArray(array,n);
    
    
    for(i=0;i<index;i++){
        newArray[i]=array[i];
    } 
    for(int j=0;j<*n1;j++) {
        newArray[i+1]=array1[j];
    }
    for(i=index;i<*merge;i++){
         newArray[i]=array[i-*n1];
    } 
    printArray1(array1,merge);
    
    return newArray;
}

int main(){
    int array[]={2,3,4,8,9};
    int array1[]={5,6,7};
    int index=3,n=5, n1=3, merge;
    newarrayusingMalloc(&n,&n1,array,index,array1,&merge);
}
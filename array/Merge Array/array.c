#include <stdio.h>
void marge(int result[],int *resultLength, int array1[],int length1,int array2[],int length2){
    int i;
    for(i=0;i<length1;i++){
        result[i]=array1[i];
    }
    for(int j=0;j<length2;j++,i++){
        result[i]=array2[j];
    }
    *resultLength=length1+length2;
}
void main(){
    int array1[5]={1,2,3,4,5};
    int array2[5]={6,7,8,9,10};
    int result[10],length;
    int resultLength;
    marge(result,&resultLength,array1,5,array2,5);
    printf("Merged Array is \n");
    for(int i=0;i<resultLength;i++){
        printf("%d\t",result[i]);
    }
}

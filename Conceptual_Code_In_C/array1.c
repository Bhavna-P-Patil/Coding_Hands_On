#include<stdio.h>

int main()
{
  int arr[5]={10,20,30,40,50};
  printf("%d",arr[3]);            // 40
  printf("%d",arr);               //100
  printf("%d",&arr);              //100
  printf("%d",&arr[3]);           // 112
  printf("%d",sizeof(arr[3]));    //4
  printf("%d",sizeof(arr));       //20
  printf("%d",arr+1);             //104
  printf("%d",&arr+1);            //120

}
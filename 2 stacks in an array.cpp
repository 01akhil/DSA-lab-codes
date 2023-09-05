#include<stdio.h>
#define size 51

int arr[size];
int top1=-1;
int top2=size;

void push1(int element){
    if((top2-top1)>1){
        top1++;
        arr[top1]=element;
    }
    else{printf(" stack overflow \n");}
}

int pop1(){
    if(top1==-1){
        printf(" stack underflow \n");
    }
   printf("%d", arr[top1]);
   top1--;
}

void push2(int element){
    if((top2-top1)>1){
        top2--;
        arr[top2]=element;
        
    }
    else{printf("stack overflow \n");}
}

int pop2(){
    if(top2<size){
    printf("%d \n", arr[top2]);
    top2++;
    }
    else{
        printf("stack underflow \n");
    }
}

void print_stack1 ()
{
  if(top1==-1){
      printf("stack underflow \n");
  }
  for (int i = top1; i >= 0; --i)
  {
    printf ("%d ", arr[i]);
  }
  printf ("\n");
}

void print_stack2(){
    if(top2<size){
        printf("stack underflow \n");
    }
    for(int j=top2;j<size;j++){
        printf("%d ", arr[j]);
    }
    printf("\n");
}

int main(){
    
    push1(4);
    push1(3);
    push1(8);
    push1(19);
    push2(5);
    pop2();
    pop2();
    push2(10);
    pop1();
    print_stack1();
    print_stack2();
}
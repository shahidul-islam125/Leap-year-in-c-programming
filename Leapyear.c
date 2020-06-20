#include<stdio.h>
int main(){
    int num;
    printf("Enter a Number :");
    scanf("%d", &num);
    
    if(num % 400 == 0){
        printf("It's a leapy yeap");
    }
    else if(num % 4 == 0 && num % 100 != 0 ){
        printf("It's a leap year");      
    }
   else{
        printf("It's a not  a leap year");
    } 
    
  return 0;  
}
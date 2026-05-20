// Take a number from user and check if its a even number or odd number.
//input: 5
//output: 5 is an odd number.
#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    if(num%2==0){
        printf("%d is an even number.", num);
    }
    else{
        printf("%d is an odd number.", num);
    }
}


// Take a number from user and check if its a positive or negative number.
// input: -5
// output: -5 is a negative number.
#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    if(num>0){
        printf("%d is a positive number.", num);
    }
    else if(num<0){
        printf("%d is a negative number.", num);
    }
    else{
        printf("The number is zero.");
    }
}



#include <stdio.h>


int sum(int a,int b){
    return a +b;
}

int square(int num){

    return num*num;
}

//function declaration 
void printMyName();

int addRange(int n);
int factorial(int n);

int main() {

    int result = sum(10, 20);
    printf("Sum of two numbers: %d\n",result);

    printf("Square of 5: %d\n",square(5));

    printMyName();

    int res= addRange(10);
    printf("result of recursion: %d\n",res);

    printf("factorial of 5 is:%d\n",factorial(5));


    return 0; 
}

//function definition
void printMyName(){
    printf("Nishan Bista\n");
}

int addRange(int n){

    //base case if not given, infinite loop
    if(n>0){
        return n+addRange(n-1);

    }else{
        return 0;
    }
}

int factorial(int n){

    if(n>0){
        return n * factorial(n-1);
    }else{
        return 1;
    }
}

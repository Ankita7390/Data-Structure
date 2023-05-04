#include<stdio.h>
int fact(int n , int initial );
int main(){
    int num,factorial;
    int initial=1;
    printf("enter any no.:");
    scanf("%d",&num);
    factorial=fact(num,1);
    printf("%d",factorial);
    return 0;

}
int fact(int n , int initial ){

    if(n<=1){
        return initial;
    }
   else{
    return fact(n-1 , n*initial);
   }
}
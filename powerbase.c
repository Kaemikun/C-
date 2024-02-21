#include <stdio.h>
int power(int base,int exponent){
    if (exponent ==0){
        return 1;
    }
    else
    return base * power(base,exponent-1);

}
int main(){
    int a;
    int b;
    printf("\nEnter base: ");
    scanf("%d",&a);
    printf("\nEnter exponent: ");
    scanf("%d",&b);
    int c = power(a,b);
    printf("%d",c);
}
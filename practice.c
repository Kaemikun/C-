#include <stdio.h>
// int odd(int a){
//     if (a %2 !=0){
//         return a +=1;
//     }
//     else
//     return even(a);
// }
// int even(int a){
//     if(a%2==0){
//         return a-=1;
//     }
//     else
//     return odd(a);
// }
// int main(){
//     // int a[] = {1,2,3,4,5,6,7,8,9,10};
//     for(int i = 1;i<=10;i++){
//         printf("%d\t",odd(i));
//     }
// }
int fib(int a,int* count){
    int fib1;
    int fib2;
    int count1,count2;
    if (a <= 1){
        *count = 1;
        return 1;
    }
    else
    {fib1 = fib(a-1,&count1);
    fib2 = fib(a-2,&count2);
    *count = 1 + count1 + count2;
    return fib1 +fib2;}

}
int main(){
    int a= 5;
    int count;
    int b = fib(a,&count);
    printf("%d\n",b);
    printf("%d",count);
    
}
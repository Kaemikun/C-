#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// int main(){
//     static int a= 1;
//     a++;
//     printf("%d",a);
// }
// void fun(){printf("hello");}
// int main(){
//     fun(123);
//     main();

// }
// int reverse(char str[]){
//     int size = strlen(str);
//     if (size <=1){
//         return;
//     }
    
    
//     char a = str[strlen(str)-1];
//     return (a,reverse(size-1));
//     // ,reverse(str[size-1]);
// }

        
// int main(){
//     char str[] = "hello";
//     printf("%c",reverse(str));
// }

// int num(int a){
//     if (a ==0){
//         return;
//     }
//     printf("%d\n",a);
//     num(a-1);
    

// }
// int main(){
//     int a = 7;
//     num(a);
// }
// void call(int a){
//     if (a == 0){
//         return;
//     }
//     printf("Good Morning\n");
//     call(a-1);
// }
// int main(){
//     int a = 3;
//     call(a);
// }
// int call(int a){
//     if (a == 0){
//         return;
//     }
//     call(a-1);
//     printf("%d\n",a);
    
// }
// int main(){
//     int a = 3;
//     call(a);
// }
// void lol(int c,char a[]){
    
//     if (c < 0){
//         return;
//     }
//     printf("%c",a[c]);
    
//     lol(c-1,a);
   
    
// }
// int main(){
//     char a[5] = "hello";
//     // char b[3] = "lol";
//     int c = strlen(a)-1;
//     lol(c,a);
// }
//factorial calculation
// int fac(int a){
//     if(a==1 || a==0){
//         return 1;
//     }
//     else
//     return a*fac(a-1);

// }
// int main(){
//     int a;
//     printf("\nEnter a num: ");
//     scanf("%d",&a);
//     int b = fac(a);
//     printf("%d",b);
// }
//nth fibonacci
// int fib(int a){
//     if(a <= 1){
//         return;
//     }
//     else
//     return fib(a-1) + fib(a-2);

// }
// int print(int a){
//     for(int i = 1;i<=a;i++){
//         printf("%d\n",fib(i));
//     }
// }
// int main(){
//     int a = 5;
//     print(a);
    
// }
// int fib(int a,int* count){
//     (*count)++;
//     if (a<=1){
//         return a;

//     }
//     else
//     return fib(a-1,count) + fib(a-2,count);


// }
// int main(){
//     int a = 0;
//     int count = 0;
//     int b = fib(a,&count);
//     printf("%d\n",b);
//     printf("%d",count);
// }
//sum of digits of positive integeres
// int sum(int a){
//     if (a<10){
//         return a;

//     }
//     else
//     return a%10 + sum(a*0.1);
// }
// int main(){
//     int a = 1932;
//     int b = sum(a);
//     printf("%d",b);
// }
//power base
// int power(int base,int pow){
//     if (pow <=1){
//         return base;
//     }
//     else
//     return base * power(base,pow-1);

// }
// int main(){
//     int base = 4;
//     int pow = 3;
//     int a = power(base,pow);
//     printf("%d",a); 
// }
//GCD using euclidean
// int GCD(int a,int b){
//     if (b==0){
//         return a;
//     }
//     else
//     return GCD(b,a%b);
// }
// int main(){
//     int a = 12;
//     int b = 30;
//     int c = GCD(a,b);
//     printf("%d",c);
// }
// int palin(char a[],int size){

//     char b;
//     if (size<=0){
//         return;
//     }
//     else
//     b = a[size-1];
//     printf("%c",b);
//     return palin(a,size-1);
    
    
// }
// int main(){
//     char a[] = "pikachu";
//     int size = strlen(a);
//     palin(a,size);
    
    
// }
// int pali(char a[],int start,int end){
//     if (start>=end){
//         return 1;
//     }
//     if (a[start] == a[end]){
//         return pali(a,start+1,end-1);
//     }
//     else
//     return 0;

// }
// int main(){
//     char a[] = "bob";
//     int start = 0;
//     int end = strlen(a);
//     if(pali(a,0,strlen(a)-1)){
//         printf("its palindrome");

//     }
//     else
//     printf("its not palindrome");
// }
// reversing a string
// int reverse(char a[],int start,int end){
//     char b;
//     if (end<1){
//         return;
//     }
//     else
//     b = a[end-1]; 
//     printf("%c",b);
//     return reverse(a,start+1,end-1);
// }
// int main(){
//     char a[] = "kaemi";
//     int start = 0;
//     int end = strlen(a);
//     reverse(a,start,end);
// }
//binary search
// int search(int a[],int low,int high,int target){
    
//     if (low<=high){
//         int mid = (low +high)/2;
//         if(a[mid] == target){
//         return mid;
//         }
//         if(a[mid]< target){
//         return search(a,mid+1,high,target);
//         }
//         else{
//         return search(a,low,mid-1,target);}
//     }

//     return -1;
    

// }
// int main(){
//     int a[] = {1,3,4,7,8,9};
//     int low = 0;
//     int high = sizeof(a)/sizeof(a[0]) -1;
//     int target = 7;
//     int b = search(a,low,high,target);
   
//     if (b>=0){
//         printf("%d",b);
        
//     }
//     else
//     printf("no. not found!");
    
// }
//tower of hanoi
// int hanoi(int a,char A,char B,char C){
//     if (a==1){
//         printf("Move disk 1 from %c to %c\n",A,C);
//         return;
//     }
//     hanoi(a-1,A,C,B);
//     printf("Move disk %d from %c to %c\n",a,A,C);
//     hanoi(a-1,B,A,C);
// }
// int main(){
//     int a = 3;
//     hanoi(a,'A','B','C');
// }
// int main(){
//     char a[] = "hellobaka";
//     char d[15];
//     int b = sizeof(a)/sizeof(a[0])-1;
//     int c = strlen(a);
//     printf("%d\n",b);
//     printf("%d",c);
//     fgets(d,sizeof(d),stdin);
//     d[strlen(d)-1] = '\0';
//     printf("hi sup and %s sup",d);
// }
// int reverse(char a[],int start,int end){
//     char b;
//     if(end<0){
//         return;
//     }
//     b = a[end];
//     printf("%c",b);
//     return reverse(a,start +1,end-1);
// }
// int main(){
//     char a[] = "Ansh Kaushal";
//     int start = 0;
//     int end = strlen(a)-1;
//     reverse(a,start,end);
// }
// int bin(int a[],int left,int right,int target){
//     if (left<=right){
//         int mid = (left +right)/2;
//         if(a[mid]==target){
//             return mid;
//         }
//         if (left< target){
//             return bin(a,mid+1,right,target);

//         }
//         return bin(a,left,mid-1,target);

//     }
//     return -1;
// }
// int main(){
//     int a[] = {1,3,4,6,8,9};
//     int left = 0;
//     int right = sizeof(a)/sizeof(a[0])-1;
//     int b = bin(a,left,right,4);
//     if(b !=-1){
//         printf("%d",b);
//     }
//     else
//     printf("not found");
// }
int towr(int n,char A,char B,char C){
    if (n ==1){
        printf("Move disk 1 form %c to %c\n",A,C);
        return;
    }
    towr(n-1,A,C,B);
    printf("Move disk %d from %c to %c\n",n,A,C);
    towr(n-1,B,A,C);
}
int main(){
    int n = 3;
    towr(n,'A','B','C');
}
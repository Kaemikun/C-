#include <stdio.h>
#include <string.h>
// void reverse(char a[]){
//     if (strlen(a) ==0){
//         return;
//     }
//     else
//     printf("%c",a[strlen(a)-1]);
//     a[strlen(a)-1] = '\0';
//     reverse(a);
// }
// int main(){
//     char a[] = "hello";
//     reverse(a);
// }
int main(){
    char a[] = "hello";
    strrev(a);
    printf("%s",a);
}

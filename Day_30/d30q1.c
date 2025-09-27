//Count even and odd numbers in an array.

#include <stdio.h>
int main() {

    int n,even =0,odd = 0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];

    for(int i = 0;i < n;i++){
    scanf("%d", &arr[i]);
    }
   for (int i = 0; i < n; i++) {
        if (arr[i] % 2 ==0 )
            even++;
        else 
            odd++;
    }
     printf("Even = %d\n", even);
    printf("Odd = %d\n", odd);

   return 0;
}

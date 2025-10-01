//Count positive, negative, and zero elements in an array.

#include <stdio.h>
int main() {

    int num,p = 0,n = 0,z = 0;
    printf("Enter the size of array: ");
    scanf("%d",&num);
    int arr[num];

    for(int i = 0;i < num;i++){
    scanf("%d", &arr[i]);
    }
   for (int i = 0; i < num; i++) {
        if (arr[i] > 0 )
            p++;
        else if (arr[i] < 0 )
            n++;
        else
            z++;
    }
     printf("Positive = %d\n", p);
     printf("Negative = %d\n", n);
     printf("Zero = %d\n", z);

   return 0;

}

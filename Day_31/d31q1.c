//Search for an element in an array using linear search.

#include <stdio.h>
int main() {

  int num,n;
  
  printf("Enter the size of array: ");
  scanf("%d",&n);
  int arr[n];

for(int i = 0;i < n;i++){
 scanf("%d", &arr[i]);
}
printf("Enter the number to be searched: ");
scanf("%d",&num);

for(int i = 0;i < n;i++){
    if(arr[i] == num)
    printf("Found at index: %d", i);
}
return 0;

}

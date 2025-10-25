//Merge two arrays.

#include <stdio.h>
int main() {

  int n1,n2,n;
  
  printf("Enter the size of first array: ");
  scanf("%d",&n1);
  int a1[n1];

for(int i = 0;i < n1;i++){
 scanf("%d", &a1[i]);
}

printf("Enter the size of second array: ");
  scanf("%d",&n2);
  int a2[n2];

for(int i = 0;i < n2;i++){
 scanf("%d", &a2[i]);
}
//Merging both the arrays
int arr[n1+n2];

for(int j = 0;j < n1;j++){
arr[j] = a1[j];
}

for(int k = 0;k < n2;k++){
arr[n1 + k] = a2[k];
}
printf("Merged array :");
for(int i = 0;i < (n1+n2);i++){
printf(" %d",arr[i]);
}

return 0;
}

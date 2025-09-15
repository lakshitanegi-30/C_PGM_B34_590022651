/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F.*/

#include <stdio.h>

int main() {          //Declaration
float percnt;

printf("Enter your percentage: ");
scanf("\n%f",&percnt);

if(percnt >= 90 && percnt <=100){
printf("Grade A");
}
else if(percnt >= 80 && percnt <=89){
printf("Grade B");
}
else if(percnt >= 70 && percnt <=79){
printf("Grade c");
}
else if(percnt >= 60 && percnt <=69){
printf("Grade D");
}
else{
printf("Grade F");
}
return 0;


}

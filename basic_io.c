#include <stdio.h>
int main() {
  int a;
float b;
double c;
char ch;
char name[50];
  printf("Enter an integer: ");
  scanf("%d" , &a);
printf("Enter a float value: ");
  scanf("%f , &b);
  printf("Enter a double value:
  ");
  scanf("%If" , &c);
  printf("Enter a single
    character: ");
scanf(" %c" , &ch);
printf("Enter a string (name):
  ");
  scanf("%49s" , name);
printf("\n---Output ---\in");
printf("Integer entered: %d\n" ,
  a);
printf("Float entered: %.2f\n" ,
  b);
printf("Double entered:
  %.21f\n" , c);
printf("Character entered:
  %c\n , ch);
  printf("String entered: %s\n" ,
  name);
retun 0;
}


  #include <stdio.h>
#include <stdlib.h>

int main()
{
  char name[20];
  char lastname[20];
  char sexe[15];
  char email[30];
  int age;

  printf("enter your name:");
  scanf("%s",name);
  printf("enter your last name:");
  scanf("%s",lastname);
  printf("enter your age:");
  scanf("%d",&age);
  printf("enter your gender:");
  scanf("%s",sexe);
  printf("enter your email:");
  scanf("%s",email);

  printf("your name is %s\n your last name is %s\n your gender is %S\n your email is ",name,lastname,age,sexe,email,email);

    return 0;
}

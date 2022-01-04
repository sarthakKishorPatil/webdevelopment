#include <stdio.h>

int main()
{
    char name[30];
    int first, second;
    printf("Enter name: ");
    scanf("%s", &name);

    char *p = &name[0];
  printf("\nThe address of the first array element  : %p", p);
 
  char *p1 = &name[1];
  printf("\nThe address of the second array element  : %p", p1);
 
    //printf("your name is %s", name);
    printf("\n%p\t%p", (void*)&name, (void*)(&name+1));
    printf("\nEnter First number: %d", sizeof(name[0]));
    scanf("%d", &first);

    printf("Enter Second number: ");
    scanf("%d", &second);

    if (first>second)
    {
        printf("First number is greater.");
    }
    else
    {
        printf("Second number is greater.");
    }

    char c[12];
    scanf("%s", &c);
    return 0;

}

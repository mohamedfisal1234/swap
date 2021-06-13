#include <stdio.h>

int Main()

{
    int x, y;
    // asking values
    printf("Enter Value of x ");
    scanf("%d", &x);
    printf("\nEnter Value of y ");
    scanf("%d", &y);
  //if x=10 & y=20
    int temp = x;
    //temp = 10
    x = y;
    //x = 20
    y = temp;
  //y = 10
    printf("\nAfter Swapping: x = %d, y = %d", x, y);
    return 0;
}

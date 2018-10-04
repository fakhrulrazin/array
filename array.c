#include <stdio.h>
 
main()
{
    int array[100], number, c;
   
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
   
    printf("Enter %d elements\n", number);
   
    for (c = 0; c < number; c++)
        scanf("%d", &array[c]);
   
    printf("The array elements are:\n");
   
    for (c = 0; c < number; c++)
        printf("%d\n", array[c]);
   
    return 0;
}

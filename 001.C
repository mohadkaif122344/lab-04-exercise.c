/*
Program: Write a program to print positive 
        integers from 1 to 10.
*/
#include <stdio.h>

int main() {
    int i;
    // Loop to print integers from 1 to 10
    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    return 0;
}

//Using WHILE LOOP

#include<stdio.h> 
int main()
{
int i=1; 
while(i<=10)
{
printf("%d \n", i);
} 
i++;
return 0;;
}

//Using DO-WHILE LOOP

#include<stdio.h>
int main()
{
int i=1; 
do
{
printf("%d \n", i);
 i++;
}
while(i<=10);
 return 0;
}

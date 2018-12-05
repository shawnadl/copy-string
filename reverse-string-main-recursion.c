//reverse a string by using main recursion
//practice-2 2018-05-12
#include<stdio.h>

int main(void)
{
  int c;
  if((c = getchar()) != EOF){//in Window, after input a string
    main();                 //press ctrl+z = EOF
    printf("%c",c);
    }
}

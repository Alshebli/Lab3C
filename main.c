// Author: Saeed Alshebli saa6016@psu.edu
// Collaborator: Aidan OConnor avo5337@psu.edu
// Collaborator: Lindsey Rich lxr5326@psu.edu
// Collaborator: Siddhant Rajoriya sbr5632@psu.edu
// Section: 2
// Breakout: 11
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
int sum_n(n){
  if (n>0){
     return n+sum_n(n-1);
   }
   else{
     return 0;
   }
}

void print_n(const char*s,int n) {
  if (n!=0){
    printf("%s\n",s);
    print_n(s,n-1);
   }
}

int main(void){
  char *intstring= readline("Enter an int: ");
  int intinput = atoi(intstring);
  printf("sum is %d.\n", sum_n(intinput));
  char*string = readline("Enter a string: ");
  print_n(string,intinput);
}
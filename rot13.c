#include <stdio.h>
#include <strings.h>


int someotherthing(int c, int basis){
  c = (((c-basis)+13)%26)+basis;
  return c;
}

int something(int c){
  if('a' <= c && c <= 'z')
  {
    return someotherthing(c,'a');
  }
  else if ('A' <= c && c <= 'Z') {
    return someotherthing(c, 'A');
  }
  else {
    return c;
  }
}

int main() {
  printf("Enter a string\n");
  int c, a;
  char label[4];
  int i=0;
  while(((c = getchar())!= EOF))
  {
    c = something(c);
    printf("%c",c);
  }
  

  return 0;
}

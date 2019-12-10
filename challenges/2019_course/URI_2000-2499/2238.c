#include <stdio.h>
#include <math.h>

int main() {

  int a, b, c, d;
  int success = -1, i, j = 1, x = 2;

  scanf("%d %d %d %d", &a, &b, &c, &d);

  if(a%b != 0 && d%a != 0 && a%a == 0 && c%a == 0)
    success = a;

  for(i = a*2; i <= c/x; j++) {
    if(i%b != 0 && d%i != 0 && success == -1){
      if(i%a == 0 && c%i == 0) {
        success = i;
        break;
      }
    }
    i = a * (j+1);
    if(c/(x++) < sqrt(c))
      x = x;
    else
      x++;
  }

  if(success == -1 && c%b != 0 && d%c != 0 && c%a == 0 && c%c == 0) {
    success = c;
  }


  /*if(success == -1)  {
    for(i = c/(sqrt(c)); i <= c; i++) {
       if(i%b != 0 && d%i != 0 && success == -1)  {
        if(i%a == 0 && d%a == 0)  {
          success = i;
          break;
        }
       }
    }
  }*/





  printf("%d\n", success);

  return 0;
}

#include <stdio.h>

int main () {

  int cred[3];
  int i, j;
  int success = 0;

  scanf("%d %d %d", &cred[0], &cred[1], &cred[2]);

  if(cred[0] + cred[1] == cred[2])
    success = 1;

  else if(cred[0] + cred[2] == cred[1])
    success = 1;


  else if(cred[2] + cred[1] == cred[0])
    success = 1;

  else {
    for(i = 0; i < 3; i++) {
      for(j = i+1; j < 3; j++) {
        if(cred[i] - cred[j] == 0)
          success = 1;
      }
    }
  }

  if(success == 1)
    printf("S\n");
  else
    printf("N\n");

 return 0;
}

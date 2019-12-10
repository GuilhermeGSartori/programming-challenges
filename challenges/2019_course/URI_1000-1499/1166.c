#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int test_cases;
  int success = 1, inserting = 1;
  int i, j, k;
  float sum;
  float x;
  int ball;
  int hanoi_last[50];

  scanf("%d", &test_cases);

  int T[test_cases];

  for(i = 0; i < test_cases; i++)
  {
    scanf("%d", &T[i]);
  }


  for(i = 0; i < test_cases; i++)
  {

    for(k = 0; k < T[i]; k++)
      hanoi_last[k] = 0;

    ball = 1;
    success = 1;
    j = 0;
    inserting = 1;


    while(success)
    {
      while(j < T[i] && inserting)
      {
          sum = hanoi_last[j] + ball;
          x = sqrt(sum);
          if(x - floor(x) == 0 || hanoi_last[j] == 0)
          {
              hanoi_last[j] = ball;
              inserting = 0;
          }
          else
              j++;
      }

      if(j == T[i])
      {
          printf("%d\n", ball-1);
          success = 0;
      }
      else
      {
          ball++;
          inserting = 1;
          j = 0;
      }
    }

  }
  exit(0);
}

#include <stdio.h>
#include <stdlib.h>

int factorial (int n)
{
  int i;
  int res = 1;
  
  for (i=1; i <=n; i++)
      res = res * i;
        
  return res;
}

int combination(int n, int r)
{   
  int div1, div2;     //div1 : 분자, //div2: 분모 
  
  div1 = factorial(n);
  div2 = factorial(n-r)*factorial(r);

  return (div1/div2); 
}

int main(int argc, char *argv[])
{
  int n, r;
  int result; 
  
  //1. 입력 값을 받음
       // 메세지 출력:
  printf("Input n: ");
       // n 입력 
  scanf("%d", &n);
       // 메세지 출력:
  printf("Input r: ");
       // r 입력 
  scanf("%d", &r);
  
  //2. combination 함수를 불러와서 최종 결과 정의  
  result = combination(n,r);
  //3. 최종 값 출력 
  printf("The combination result is %i\n", result);
  
  system("PAUSE");	
  return 0;
}

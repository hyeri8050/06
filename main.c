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
  int div1, div2;     //div1 : ����, //div2: �и� 
  
  div1 = factorial(n);
  div2 = factorial(n-r)*factorial(r);

  return (div1/div2); 
}

int main(int argc, char *argv[])
{
  int n, r;
  int result; 
  
  //1. �Է� ���� ����
       // �޼��� ���:
  printf("Input n: ");
       // n �Է� 
  scanf("%d", &n);
       // �޼��� ���:
  printf("Input r: ");
       // r �Է� 
  scanf("%d", &r);
  
  //2. combination �Լ��� �ҷ��ͼ� ���� ��� ����  
  result = combination(n,r);
  //3. ���� �� ��� 
  printf("The combination result is %i\n", result);
  
  system("PAUSE");	
  return 0;
}

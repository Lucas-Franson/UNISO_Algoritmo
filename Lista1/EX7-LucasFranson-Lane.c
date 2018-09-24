
#include <stdio.h>
#include <stdlib.h>

int conv_c_f();

int main()
{
  int celsius,fahr;
  
  printf("Digite a temperatura em Celsius: \n");
    scanf ("%i",&celsius);
   
  fahr = conv_c_f(celsius);
  printf ("A temperatura convertida em Fahrenheit e : %i  Fahrenheit \n ", fahr);
  
  system("pause");
  return 0;
}

int conv_c_f(int cels)
{
	int fhr;
	fhr = (9 * cels + 160)/5;
	return fhr;
}
 

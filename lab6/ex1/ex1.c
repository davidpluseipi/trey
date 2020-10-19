#include<stdio.h>
#include<math.h>

int j;
int k;

int computeFactorial(int number){
  int facto = 1;
  if (number == 0){
    facto = 1;
    return facto;
  }
  for (j = 1; j <= number; j++) {
    facto = facto * j;
  }
  return facto;
}

double computeSeriesValue(double x, int n) {
  double seriesValue = 0.0;
  for(k = 0; k <= n; k++) {
    seriesValue += x / computeFactorial(k);
  }
  return seriesValue;
}



int main() {
  double x;
  int n;
  printf("enter x: ");
  scanf("%lf", &x);
  printf("enter n: ");
  scanf("%d",&n);

  double seriesValue = computeSeriesValue(x,n);
  printf("%lf", seriesValue);

  return 0;
}

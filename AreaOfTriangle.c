#include <stdio.h>
#include <math.h> //to use sqrt() function
int main()
{
  // Variable area to store calculated area, "temp"
  // variable to store the result of temporary calculation
  // and side represents the side of the triangle
  float side, area, temp;

  // Prompt user to input side of the Equilateral triangle
  printf("Enter the Side of the triangle: ");
  scanf("%f",&side);

  //Calculate and print the area of Equilateral Triangle
  temp = sqrt(3) / 4 ;
  area = temp * side * side ;
  printf("Area of Equilateral Triangle is: %f",area);

  return 0;
}

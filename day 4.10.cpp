#include <stdio.h>
#include <math.h>

#define PI 3.14159

union shape {
  float radius;
  struct {
    float length;
    float width;
  } rectangle;
};

int main() {
  union shape s;
  char choice;

  printf("Enter 'c' for circle, 'r' for rectangle: ");
  scanf("%c", &choice);

  if (choice == 'c') {
    printf("Enter the radius of the circle: ");
    scanf("%f", &s.radius);
    printf("The area of the circle is: %.2f\n", PI * pow(s.radius, 2));
  } else if (choice == 'r') {
    printf("Enter the length of the rectangle: ");
    scanf("%f", &s.rectangle.length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &s.rectangle.width);
    printf("The area of the rectangle is: %.2f\n", s.rectangle.length * s.rectangle.width);
  } else {
    printf("Invalid choice\n");
  }

  return 0;
}

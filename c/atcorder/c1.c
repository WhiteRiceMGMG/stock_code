#include <stdio.h>
void main() {
  int a = 5;
  int b;
  int c;

  scanf("%d", &b);
  
  
  c = a + b;
  
  printf ("%d", c);
  
  return -1;
}



#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        printf("%d", t);
    } else {
        printf("Failed to read integer.\n");
    }
    return 0;
}
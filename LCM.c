#include<stdio.h>
#include<math.h>



int lcm(int x, int y) {

for(int i = (x > y) ? x:y; i <= x*y; i++) {

if(i % x == 0 && i % y == 0) {
return i;
}
}

return -1;
}

int main() {
int x = 10;
int y = 15;

int ans = lcm(x, y);

printf("%d", ans);
}
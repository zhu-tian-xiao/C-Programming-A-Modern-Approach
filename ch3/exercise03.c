// 3.
// For each of the following pairs of scanf format strings, indicate whether or not the two
// strings are equivalent. If they’re not, show how they can be distinguished.
// (a) "%d"
// versus " %d"
// (b) "%d-%d-%d" versus "%d -%d -%d"
// (c) "%f"
// versus "%f "
// (d) "%f,%f"
// versus "%f, %f"

#include <stdio.h>
int main(void) {
  // (a) 这两种情况是一样的, %d表示在读取真正的数据之前可以读取任意数量的空格
  int a, a1;
  scanf("%d", &a);
  scanf(" %d", &a1);
  printf("a = %d, a1 = %d\n", a, a1);
  // (b) 
  // 第一种情况输入的3个数据必须紧挨着-， 比如1-2-3
  // 第二种情况输入的3个数据可以有任意的空格， 比如1 -2  - 3
  // 规律是%d前面加空格是无所谓的，后面加空格含义不同
  int c, d, e, c1, d1, e1;
  scanf("%d-%d-%d", &c, &d, &e);
  scanf("%d -%d -%d", &c1, &d1, &e1);
  printf("c = %d, d = %d, e = %d\n", c, d, e);
  printf("c1 = %d, d1 = %d, e1 = %d\n", c1, d1, e1);
  // (c) 和(b)的情况基本相同，在scanf的字符串末尾不能加空格，否则可以和任意数量的空格结合
  float f, f1;
  scanf("%f", &f);
  // scanf("%f ", &f1);
  printf("f = %f\n", f);
  // printf("f1 = %f\n", f1);
  // (d) 相同 
  float g, h, g1, h1;
  scanf("%f,%f", &g, &h);
  scanf("%f, %f", &g1, &h1);
  printf("g = %f, h = %f\n", g, h);
  printf("g1 = %f, h1 = %f\n", g1, h1);
}
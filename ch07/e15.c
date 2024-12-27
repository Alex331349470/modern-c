#include <stdint.h>
#include <stdio.h>

typedef int8_t Int8;
typedef int16_t Int16;
typedef int32_t Int32;

int main(void) {
  Int8 i8 = 0x7F;
  Int16 i16 = 0x7FFF;
  Int32 i32 = 0x7FFFFFFF;

  printf("i8 = %d\n", i8);
  printf("i16 = %d\n", i16);
  printf("i32 = %d\n", i32);

  return 0;
}

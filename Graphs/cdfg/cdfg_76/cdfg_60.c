#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 59197223
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(void)
{
  signed char v_6;
  unsigned int v_4;
  short v;
  signed char result;
  v_6 = (signed char)52;
  v = (short)-27200;
  v_4 = (unsigned int)((int)v_6 / ((int)((signed char)-1.40363330553e+38f) + 126));
  result = (signed char)(-64381LL >> (((unsigned long)(- v) + (3364240621UL ^ (unsigned long)v_4)) & 63UL));
  return result;
}



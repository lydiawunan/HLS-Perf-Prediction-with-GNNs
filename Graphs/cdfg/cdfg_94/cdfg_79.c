#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 900615267
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, double p_7[1][2][4], int p_9,
                 long long p_11[2], unsigned long p_13)
{
  long v_17;
  float v_15;
  unsigned char v_5;
  signed char v;
  unsigned int result;
  v_17 = -290237434L;
  v_15 = 2012296576.f;
  v_5 = (unsigned char)p_7[0][1][3];
  v = (signed char)p_11[0];
  while ((unsigned long long)(~ (! p_13)) % (18446744073709502292ULL / (unsigned long long)(
                                             (int)(~ v) + 321) + 822ULL) < 
         ~ (18446744073348232930ULL % (unsigned long long)((int)v_5 + 433)) % (unsigned long long)(
         ((int)((signed char)p_7[0][1][2]) + (int)(- v)) + 175)) {
    result = v_17 * (long)(v_15 - 676430656.f);
    v_17 = (long)(-9096640512.f * (float)(- (! p)));
    v_15 = (float)((long long)p_13 % (~ (~ p_11[1]) + 548LL));
    v = (signed char)(18446744073709541345ULL * (unsigned long long)(! (
                      (unsigned long)v_17 - (unsigned long)result)));
  }
  while_0_break: ;
  result = (unsigned int)(~ ((int)p / ((int)v + 138)) + (110 * (int)v_5 | (int)(- p)));
  return result;
}



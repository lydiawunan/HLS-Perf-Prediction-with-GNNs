#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1044841898
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p, unsigned long p_5[3][1][4], float p_7,
        unsigned char p_11, long long p_13)
{
  unsigned long v_15;
  unsigned short v_9;
  unsigned char v;
  int result;
  v_15 = p_5[2][0][3];
  v_9 = (unsigned short)p_11;
  if ((long long)((((unsigned long)p_11 - p_5[1][0][3]) >> ((75LL & p_13) & 31LL)) * 120UL) > 
      (494LL + (long long)v_15 / (p_13 + 56LL)) << ((int)p & 63)) {
    result = -77;
    result = (int)((unsigned long long)((int)p % ((77 - result) + 536)) % 967303780ULL);
  }
  else {
    v = (unsigned char)((int)(! v_9) ^ 2);
    v = (unsigned char)(((float)(- p_5[1][0][2]) + (p_7 + -125.f)) / (
                        (float)((int)v % ((int)((unsigned char)(-1082553850.26 * (double)p)) + 158)) + 274.f));
    result = ~ (((int)p / ((int)v + 978)) % 610520759);
  }
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 238682579
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p[4][2], unsigned char p_4, unsigned long long p_6,
        float p_8, unsigned char p_10)
{
  unsigned long long v_21;
  long v_19;
  signed char v_17;
  char v_15;
  unsigned long long v_13;
  unsigned long long v;
  int result;
  v_21 = 140640382ULL;
  v_19 = -53030L;
  v_17 = (signed char)p[2][0];
  v_15 = (char)-73;
  v_13 = 18446744073709497866ULL;
  result = -519363963;
  if ((unsigned long long)p[2][1] < 0ULL) {
    v_13 = - (18446744073213135653ULL / ((p_6 ^ 58530ULL) + 654ULL));
    v = (unsigned long long)v_19;
    result = (int)v_17;
  }
  else {
    v = (unsigned long long)(~ (-882783975 | (int)v_17)) % ((0ULL - v_13) + 580ULL);
    v_15 = (char)(5808387148.36 + (double)(p_8 * (p_8 - 205.f)));
    v_17 = (signed char)((int)1.84467440737e+19f * ! ((int)p_4 | (int)p_10));
  }
  if ((unsigned long long)p_4 * (v * ((unsigned long long)p_8 / (v_13 + 944ULL))) <= (unsigned long long)(
      (unsigned long)((-41320L * (long)result) % (long)((int)v_15 + 244)) % (unsigned long)(
      - (320726529U % (unsigned int)((int)v_17 + 708)) + 670U))) result = 690789531;
  else result = (int)(p[2][1] * ~ (- p[2][1]));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 8553454
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p[3], unsigned int p_5, int p_9[2],
                   unsigned long long p_11, char p_13)
{
  unsigned long long v_25;
  long long v_23;
  char v_21;
  double v_19;
  long v_17;
  unsigned long v_15;
  long v_7;
  long long v;
  unsigned short result;
  v_23 = (long long)p_5;
  v_21 = (char)-101;
  v_19 = (double)p_11;
  v_17 = (long)p_13;
  v_15 = (unsigned long)p[1];
  v_7 = (long)p_11;
  result = (unsigned short)12727;
  while ((float)(~ v_17) > - ((4828440576.f / ((float)result + 235.f)) / (
                              (float)(p_9[0] & 524941472) + 934.f))) {
    v_21 = (int)v_21 + -2422;
    v_25 = (unsigned long long)(((unsigned long)p_5 + (unsigned long)v_17) * (unsigned long)(- p_9[1])) / (
           ~ (p_11 % ((unsigned long long)v_19 + 211ULL)) + 512ULL);
    v_19 = (double)(p[0] / (v_7 + 491L));
    v_17 = (long)((unsigned long long)(~ (~ v_17)) % (! ((unsigned long long)v_23 + v_25) + 848ULL));
  }
  while_0_break: ;
  if (v_15 * ((674700196UL % (unsigned long)(p_5 + 207U)) % (unsigned long)(
              p_5 / (unsigned int)((int)p_13 + 231) + 746U)) < (unsigned long)(~ (
      28863 + (int)((short)3.11215032729e+38)))) result = (unsigned short)35459;
  else {
    v_7 = (long)p_13;
    v = (long long)((unsigned long long)((unsigned long)p_5 * (unsigned long)v_7) % (
                    (unsigned long long)(p_9[0] - (int)result) * (p_11 + 18446744073709551585ULL) + 72ULL));
    result = (unsigned short)((long long)p[2] % (v % 8178LL + 560LL) - 17381LL);
  }
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 65338577
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, long long p_4, signed char p_6,
         unsigned short p_11[3][3], char p_15)
{
  long v_19;
  int v_17;
  int v_13;
  float v_9;
  long long v;
  long result;
  v_19 = -13532L;
  v_17 = -1020103143;
  v_13 = (int)(((long)1.30757114135e+38 * v_19) * 65535L);
  v_9 = (float)3436438151U;
  v = (long long)((long)(- ((int)((unsigned short)(19775.f * v_9)) * (int)p_11[2][2])) + 
                  ((long)(v_13 ^ (int)p_15) & 552L) % (long)(v_17 + 282));
  result = (long)(674.281005859f - (float)((((unsigned long long)p + 5931ULL) + (unsigned long long)(! p_4)) / (unsigned long long)(
                                           - ((long long)p_6 + v) + 827LL)));
  return result;
}



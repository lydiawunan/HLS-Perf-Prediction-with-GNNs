#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 671100990
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p, unsigned char p_9, char p_13)
{
  long long v_19;
  long long v_17;
  unsigned short v_15;
  unsigned long long v_11;
  float v_7;
  signed char v_5;
  signed char v;
  int result;
  v_19 = (long long)p_9;
  v_17 = (long long)p;
  v_15 = (unsigned short)6294;
  v_11 = (unsigned long long)p;
  v = (signed char)((unsigned long long)(! (~ p) * (121 % ((int)((unsigned char)3717250304.f) + 586))) % (
                    ((v_11 ^ (unsigned long long)p_13) / (unsigned long long)(
                     ((int)p_13 & (int)v_15) + 463)) % (unsigned long long)(
                    (long long)(! p) / (v_17 % (v_19 + 839LL) + 218LL) + 732LL) + 855ULL));
  v_5 = (signed char)p_9;
  v_7 = (float)279256530UL;
  result = (int)(! ((long)(p % ((int)v + 463) + (int)(- v_5)) % (~ ((long)v_7 - 5824561L) + 98L)));
  return result;
}



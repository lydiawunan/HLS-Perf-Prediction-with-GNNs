#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1056662020
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, unsigned short p_5[3][4][3],
                  unsigned long long p_9[3][4], unsigned long p_11,
                  long long p_15)
{
  long long v_23;
  int v_21;
  signed char v_19;
  unsigned short v_17;
  double v_13;
  signed char v_7;
  unsigned char v;
  unsigned char result;
  v_23 = (long long)p;
  v_21 = 63125;
  v_19 = (signed char)59;
  v_17 = (unsigned short)p_11;
  v_13 = 5220677808.19;
  v = (unsigned char)249;
  if ((p_15 + (long long)v_17) * (p_15 / (p_15 + 435LL) + (long long)(
                                  (int)v_19 % (v_21 + 975))) < - (~ (
      (long long)v_21 * v_23))) {
    v_7 = (signed char)(((unsigned long)((int)v % -81) + p_11) + (unsigned long)v_13);
    v = (unsigned char)((unsigned long long)((int)p_5[2][1][2]) / (((unsigned long long)(- v_7) & ~ p_9[2][1]) + 99ULL));
    result = (unsigned char)(! ((int)(~ v) % (p + 544)));
  }
  else {
    result = (unsigned char)6.23623327312e+35f;
    result = (unsigned char)(((-27788L ^ (long)result) + (long)((int)result ^ 161)) / (long)(
                             -7 % ((int)((signed char)-3816572160.f) + 261) + 70));
  }
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 216220172
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p[1][3], signed char p_4[4][4], unsigned char p_7,
              char p_11, float p_13)
{
  unsigned int v_21;
  unsigned long v_19;
  signed char v_17;
  unsigned long long v_15;
  unsigned short v_9;
  long v;
  long long result;
  v_21 = 3563573745U;
  v_19 = (unsigned long)p_4[3][1];
  v_17 = (signed char)82;
  v_15 = (unsigned long long)((v_21 | (unsigned int)(p_13 - (float)p_11)) - (
                              (unsigned int)((int)v_17 % ((int)p_7 + 44)) ^ 4294937861U));
  if (17799LL % ((-34514LL + (long long)((unsigned long)v_17 + v_19)) + 546LL) != (long long)p[0][2]) {
    result = (long long)(-55932L);
    result = ~ (20196LL / (result + 552LL));
  }
  else {
    v_9 = (unsigned short)v_15;
    v = (long)(((int)p_7 + (int)(- v_9)) + (int)(- p_11) * ((int)((signed char)p_13) & (int)p_4[3][2]));
    result = (long long)(p[0][1] + 0L % (((long)p_4[1][3] ^ v) + 239L));
  }
  return result;
}



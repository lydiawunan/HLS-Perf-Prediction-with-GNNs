#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 88181721
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p[4], long long p_7, int p_9[4], unsigned int p_11,
        unsigned char p_15[2][1])
{
  signed char v_17;
  unsigned short v_13;
  long v_5;
  float v;
  int result;
  v_17 = (signed char)-67;
  result = (int)p[3];
  v_13 = (unsigned short)(0UL / (! (p[1] & (unsigned long)p_11) + 734UL));
  if ((long long)((int)p_15[0][0] ^ (int)(! p_15[1][0])) < (-48LL / (
                                                            ((long long)p_9[3] + p_7) + 477LL)) % (long long)(
                                                           (int)v_17 + 150)) {
    v = (float)((unsigned long long)(((unsigned int)p_9[1] - p_11) / 52228U) + 
                (18446744073709503992ULL >> ((int)v_13 & 63)) * (unsigned long long)(
                (int)((signed char)2246083191.37) - -71));
    v_5 = (long)p_7;
    result = (int)(v + (float)(p[0] % (unsigned long)(v_5 + 462L) | 209552126UL));
  }
  else result = (int)(~ ((long long)p_15[1][0] / 16704LL));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 239832813
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, double p_7, short p_9[2][3][2], double p_13, int p_17)
{
  long v_23;
  unsigned char v_21;
  short v_19;
  long v_15;
  signed char v_11;
  unsigned int v_5;
  unsigned long v;
  float result;
  v_23 = -358421086L;
  v_21 = (unsigned char)p_13;
  v_19 = (short)-25301;
  v_15 = (long)p;
  v_11 = (signed char)p_9[0][2][1];
  result = (float)p;
  while ((int)((short)(- result)) * (int)v_19 >= (int)(-178.410202026f * (float)(
                                                       (int)(- v_11) % -4778215))) {
    v_15 = v_23 / (long)(((int)v_21 >> ((int)((unsigned char)1.29008111016e+38) & 7)) + 722);
    v_5 = (unsigned int)(147110248UL * (unsigned long)(- p_13) - (unsigned long)8257096251.22);
    result = (float)((unsigned long long)v_5 * 18446744073709532117ULL);
    v_11 = (signed char)(0L % (((long)p_9[0][2][0] ^ 229L * v_15) + 836L));
  }
  while_0_break: ;
  if (15859ULL > (226004570ULL & (unsigned long long)((long)(p_17 & (int)p_9[0][2][0]) & ! v_15))) {
    v_5 = (unsigned int)(p_13 * (double)(~ (- v_15)));
    v = (unsigned long)((-103LL % (p + 703LL) & (long long)(39U - v_5)) + (long long)(
                        p_7 - (double)((int)p_9[0][0][1] + (int)v_11)));
    result = (float)v;
  }
  else result = (float)(- (- -1.64978326363e+37));
  return result;
}



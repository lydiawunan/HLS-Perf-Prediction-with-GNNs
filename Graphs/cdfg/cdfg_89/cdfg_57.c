#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 398358821
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, unsigned long long p_4, long p_7[3], unsigned int p_13[2],
          unsigned long long p_15[5][4])
{
  unsigned short v_23;
  unsigned long long v_21;
  long long v_19;
  unsigned char v_17;
  signed char v_11;
  int v_9;
  short v;
  short result;
  v_23 = (unsigned short)46245;
  v_21 = p_15[3][3];
  v_19 = 12063LL;
  v_17 = (unsigned char)127;
  v_11 = (signed char)-64;
  v_9 = (int)p;
  if (18446744072797035374ULL <= ~ (- p_4 * (unsigned long long)(p - (float)v_23))) {
    v_11 = (signed char)(- (8.57186958804e+37 / ((double)v_19 + 915.)));
    v = (short)(! ((55832ULL >> (p_15[0][2] & 63ULL)) * (p_4 + (unsigned long long)v_17)));
    result = (short)((long)((int)(675.865539551f / ((float)p_7[0] + 586.f)) / (
                            v_9 + 704)) & p_7[2]);
  }
  else {
    v_9 = (int)(- (~ v_21 * (unsigned long long)p));
    v = (short)p_4;
    result = (short)(! (p_15[2][3] * 77ULL + 45191ULL * (unsigned long long)p_13[1]));
  }
  while (- (- p) < - p * ((float)(p_4 ^ (unsigned long long)v) - 3.18785933408e+38f / (
                                                                 (float)p_7[1] + 699.f))) {
    result = (int)v_11 & v_9 * 7;
    result = (short)(! (p_15[1][2] * (unsigned long long)p + (unsigned long long)(
                        119 - (int)result)));
    v_11 = (signed char)(! (! (p_13[1] & (unsigned int)-4510198540.77)));
    v = (short)56;
  }
  while_0_break: ;
  return result;
}



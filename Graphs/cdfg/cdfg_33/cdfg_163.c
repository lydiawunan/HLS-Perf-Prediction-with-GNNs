#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 855332142
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p[1][3][2], unsigned short p_5, double p_7,
                  long long p_9, signed char p_11[2])
{
  long long v_23;
  long v_21;
  signed char v_19;
  unsigned short v_17;
  double v_15;
  double v_13;
  short v;
  unsigned char result;
  v_23 = (long long)p_5;
  v_21 = -1056273524L;
  v_17 = (unsigned short)p_9;
  if ((long long)(- (-11456L % (((long)p_5 - v_21) + 105L))) < (long long)(
                                                               ((int)p_5 + (int)p_5) % (
                                                               (int)p[0][0][1] + 401)) + v_23) {
    v_15 = (double)(! ((long long)((unsigned long)p_11[0] + 650990869UL) - 
                       p_9 * (long long)v_17));
    v_13 = (double)((long)(~ ((int)p_5 + (int)((unsigned short)v_15))) % 1536493603L);
    v = (short)((long long)((int)p_5 / ((int)((unsigned short)p_7) + 805)) * (
                p_9 ^ (long long)p_11[1]) + (p_9 % ((long long)v_13 + 161LL) + -62148LL));
  }
  else {
    v_19 = (signed char)28;
    v = (short)((unsigned long)(6U % (((unsigned int)p_11[0] - 705185907U) + 721U)) + (unsigned long)(- (
                9659L % (long)((int)v_19 + 72))));
  }
  result = (unsigned char)(((unsigned int)v * 3443601431U) * (unsigned int)p[0][1][1]);
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 993686357
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p[3], unsigned short p_4, char p_6[3], char p_11,
         unsigned short p_13)
{
  long long v_21;
  unsigned int v_19;
  unsigned long long v_17;
  unsigned char v_15;
  short v_9;
  unsigned short v;
  char result;
  v_21 = 811376537LL;
  v_19 = 4036623842U;
  v_17 = (unsigned long long)p_11;
  v_15 = (unsigned char)87;
  v_9 = (short)p_4;
  v = p_4;
  while (((18446744072941024301ULL + v_17) + (unsigned long long)(- v_19)) % (unsigned long long)(
         ((int)p_6[2] * (int)v & (int)v_15) + 657) < (unsigned long long)(
         ((long)(! p_4) / ((long)p_11 % -36922L + 457L)) * (long)(- (
         (int)p_13 / ((int)v_15 + 373))))) {
    v_9 = v_21 % -63LL;
    v_21 = (long long)p_11;
    v_15 = (unsigned char)((unsigned long long)((unsigned int)p_11 - v_19) % (
                           v_17 + 927ULL) - (unsigned long long)(~ (206 % (
                                                                    (int)v + 304))));
    v_19 *= (unsigned int)p_4;
  }
  while_0_break: ;
  if ((int)((float)(~ p[0]) / 1.48993059768e+38f + -242.913223267f) <= ! (
      (int)p_4 % ((int)v_15 + 259) + -343194170)) {
    result = (char)(((unsigned long)((int)p_6[2] - (int)v) % ((p[0] - (unsigned long)v_9) + 1018UL)) / 1302300096UL);
    result = (char)(~ (16220UL / (unsigned long)((int)result + 127)) % (unsigned long)(
                    (0 ^ (int)p_4) + 965));
    result = (char)((~ p[1] * (unsigned long)result) / ((4294967269UL + ! p[2]) + 766UL));
  }
  else result = (char)(648417573UL * (p[1] * (unsigned long)p_11) ^ (unsigned long)(
                       (int)(! p_13) / 38));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 816179310
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p[1][3][3], char p_5, short p_11,
                  unsigned long p_21[1][1])
{
  short v_23;
  unsigned short v_19;
  unsigned int v_17;
  unsigned long long v_15;
  unsigned short v_13;
  unsigned short v_9;
  signed char v_7;
  double v;
  unsigned char result;
  v_23 = (short)p_5;
  v_19 = (unsigned short)p[0][1][2];
  v_13 = (unsigned short)19021;
  v_7 = (signed char)p_11;
  if ((unsigned long long)v_23 == ((unsigned long long)(20149L * (long)p_11) + (
                                   (unsigned long long)v_7 & 18446744073509349226ULL)) + (unsigned long long)(~ (
                                  4225662790UL * (unsigned long)p_5))) {
    v_7 = (signed char)p_5;
    v_9 = (unsigned short)((56 | ((int)p_11 + (int)p_5)) ^ -36 % ((int)v_13 / (
                                                                  (int)v_7 + 420) + 454));
    v = (double)((long long)(! (! v_7)) / (30802LL * (long long)v_9 + 440LL));
  }
  else {
    v_17 = (unsigned int)((unsigned long)(29702 % ((int)v_19 + 864) - (int)v_19) - - (- p_21[0][0]));
    v_15 = (unsigned long long)(- (- v_17));
    v = (double)((unsigned long long)(! ((int)p_11 % -82)) - (0ULL - v_15));
  }
  result = (unsigned char)((unsigned int)(- (- v)) + - (p[0][2][0] * (unsigned int)p_5));
  return result;
}



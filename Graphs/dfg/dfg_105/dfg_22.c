#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 753688551
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p[4], long p_4, unsigned char p_7, unsigned char p_11,
          signed char p_21)
{
  long long v_19;
  unsigned int v_17;
  unsigned long v_15;
  unsigned short v_13;
  unsigned char v_9;
  unsigned long v;
  short result;
  v_19 = -16025LL;
  v_17 = (unsigned int)p[0];
  v_15 = 4239578191UL;
  v_9 = p_7;
  v = 746244412UL;
  result = (short)24437;
  result = (short)((((float)((int)p_11 + (int)result) * -7977792512.f) * (float)p_4) / (
                   (float)(((v_19 / (v_19 + 986LL)) / (long long)(((int)p_21 << (
                                                                   (int)v_9 & 7)) + 836)) % (
                           - (~ p[2]) + 261LL)) + 288.f));
  v_13 = (unsigned short)(~ (~ (17877UL + (unsigned long)8367815980.39) + (unsigned long)v_17));
  v_9 = (unsigned char)((unsigned long)((long)result + ~ (p_4 / (long)(
                                                          (int)v_13 + 242))) + 
                        914649392UL / (v_15 + 766UL));
  result = (short)(! (((p[2] + (long long)p_4) + (long long)(~ v)) / (long long)(
                      (unsigned long)((int)p_7 * (int)v_9) % ((v | (unsigned long)p_11) + 642UL) + 547UL)));
  return result;
}



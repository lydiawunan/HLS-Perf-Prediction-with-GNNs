#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 381135794
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, char p_13, float p_15, unsigned char p_17,
                   short p_19)
{
  signed char v_11;
  unsigned short v_8;
  unsigned long v_6;
  unsigned char v_4;
  long long v;
  unsigned short result;
  v_11 = (signed char)p;
  v_6 = (unsigned long)p_19;
  v_4 = (unsigned char)232;
  v_8 = (unsigned short)v_4;
  v = (long long)((unsigned long)(! (56 / ((int)p_17 + 376))) % (0 / (unsigned long)(
                                                                 -117 / (
                                                                 (int)p_19 + 354) + 881) + 478UL) + (unsigned long)p_15);
  v_4 = (unsigned char)(((v_6 - (unsigned long)((unsigned int)v_8 - p)) & (
                         (unsigned long)(3546329229U % (p + 547U)) - (
                         (unsigned long)v_11 - 4294926223UL))) & (unsigned long)(
                        (float)p_13 + p_15));
  result = (unsigned short)(- ((- v + (long long)(! v_4)) % 49973LL));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 771221604
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, int p_4, unsigned long p_15[2][4][3],
                   unsigned int p_17)
{
  unsigned long long v_13;
  signed char v_11;
  unsigned char v_9;
  char v_7;
  short v;
  unsigned short result;
  v_11 = (signed char)-7;
  v_7 = (char)71;
  result = (unsigned short)p_4;
  v_13 = ! (! 56795ULL);
  v_9 = (unsigned char)((float)((((unsigned long long)result + 13265ULL) + (unsigned long long)(! v_11)) - v_13) + - (
                        ((float)p_15[0][0][0] - -3.12403971814e+38f) / (
                        (float)(127U * p_17) + 587.f)));
  v = (short)((int)(- (~ v_7)) << ((695758124ULL & (unsigned long long)(- (
                                    (int)v_9 * 19))) & 7ULL));
  result = (unsigned short)(! (! ((int)p % ((p_4 - (int)v) + 645))));
  return result;
}



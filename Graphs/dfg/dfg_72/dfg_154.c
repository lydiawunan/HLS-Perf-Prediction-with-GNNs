#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 228612292
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, unsigned char p_7, unsigned long p_9[1][4], int p_11,
        unsigned char p_15)
{
  unsigned short v_21;
  char v_19;
  unsigned short v_17;
  char v_13;
  short v_5;
  unsigned long v;
  int result;
  v_21 = (unsigned short)15713;
  v_19 = (char)-119;
  v_17 = (unsigned short)p_9[0][3];
  v_13 = (char)(-40442L / (long)((int)(- (~ v_17)) / (((int)v_19 & 18) % (
                                                      (int)(- v_21) + 405) + 411) + 228));
  v_5 = (short)(((unsigned long long)(- v_13) / ((unsigned long long)p_15 * 33486ULL + 779ULL) | (unsigned long long)(
                 (int)(! p_7) & (int)((unsigned char)-1.66730124548e+38))) * (unsigned long long)p_11);
  v = (unsigned long)((long long)p % (((long long)((unsigned int)v_5 + 4294926328U) + (
                                       (long long)p_7 + -95928786LL)) / (long long)(
                                      ~ (p_9[0][1] ^ (unsigned long)p_11) + 208UL) + 429LL));
  result = (int)(v + 4294904617UL);
  return result;
}



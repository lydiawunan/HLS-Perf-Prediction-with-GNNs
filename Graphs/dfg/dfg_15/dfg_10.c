#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 544311870
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, signed char p_7, unsigned short p_9,
                       unsigned int p_13, unsigned short p_15[5][4][3])
{
  short v_17;
  short v_11;
  signed char v_4;
  unsigned long long v;
  unsigned long long result;
  v_17 = (short)2907;
  result = (unsigned long long)p;
  v_11 = (short)(((unsigned long long)(~ (~ p_13)) * (result * (unsigned long long)p_15[3][3][2] + (unsigned long long)(
                                                      55223U + p_13))) % (unsigned long long)(
                 ((unsigned int)5486646272.f - ((unsigned int)((int)v_17 & -6050) & p_13)) + 476U));
  v = (unsigned long long)v_11;
  v_4 = (signed char)(! p_9);
  result = ((46087ULL / (v + 534ULL) - (unsigned long long)v_4) - (unsigned long long)(~ p)) % (
           (unsigned long long)(- (724.46270752f + (float)(- p_7))) + 251ULL);
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 90915132
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, short p_5, unsigned long long p_9,
                 unsigned short p_15[5][1], unsigned long long p_17[4][2])
{
  long v_27;
  unsigned short v_25;
  unsigned short v_23;
  int v_21;
  unsigned int v_19;
  unsigned int v_13;
  unsigned int v_11;
  unsigned int v_7;
  unsigned char v;
  unsigned int result;
  v_27 = -24435L;
  v_23 = (unsigned short)39916;
  v_19 = 4294907341U;
  if ((long)p_15[4][0] < (long)((int)p_5 % (((int)p | (int)p) + 954)) / (
                         - (v_27 % 19502L) + 438L)) {
    v_21 = (int)((unsigned long long)(- ((int)p % ((int)p_5 + 314))) | 
                 (unsigned long long)(- p_15[2][0]) / (p_17[1][1] + 531ULL));
    v_11 = (unsigned int)((p_17[1][0] | (unsigned long long)(! v_19)) & (unsigned long long)(
                          - v_19 - (unsigned int)v_21));
    v_13 = (unsigned int)(-10823LL);
  }
  else {
    v_25 = (unsigned short)(- (29135ULL % (p_9 + 960ULL)));
    v_11 = ~ (v_19 - (unsigned int)p_5) / (unsigned int)(((int)v_23 - 
                                                          (int)v_25 * (int)p_5) + 834);
    v_13 = (unsigned int)p_9;
  }
  if (p_17[1][0] != p_17[2][0] * (unsigned long long)v_13) {
    v_7 = v_13 % (unsigned int)((int)p + 385) >> ((92ULL - ((unsigned long long)p_15[3][0] ^ p_17[3][1])) & 31ULL);
    v = (unsigned char)(((unsigned long long)((unsigned int)p_5 ^ v_7) / (
                         p_9 + 372ULL)) * (unsigned long long)v_11);
    result = (unsigned int)((int)v / ((int)p + 1000));
  }
  else result = 9110U;
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 12816072
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, unsigned long p_4, unsigned char p_6[5][3][4],
         long p_9, unsigned char p_11)
{
  unsigned long long v_19;
  unsigned char v_17;
  unsigned long v_15;
  double v_13;
  unsigned short v;
  char result;
  v_19 = 36946273ULL;
  v_17 = (unsigned char)p_4;
  v_13 = (double)p_6[0][2][3];
  v = (unsigned short)p_9;
  if ((unsigned long long)v_17 == 724163807ULL / (v_19 + 487ULL)) {
    v_17 = (unsigned char)(0.0470463521779f / ((float)((p_4 ^ p) - 4294919852UL) + 779.f));
    v_15 = ~ ((unsigned long)p_9 - 4294940934UL);
    v = (unsigned short)((((unsigned long)p_6[1][2][2] * p) * (p_4 - (unsigned long)v)) / (
                         ((unsigned long)((int)p_6[4][0][3] - (int)v_17) + ~ p_4) + 538UL));
  }
  else {
    v = (unsigned short)(2807685898UL % (unsigned long)(p_9 + 687L));
    result = (char)89;
    v_15 = ~ ((unsigned long)((unsigned int)result ^ 4258335381U) * p);
  }
  if (v_13 == (double)(((unsigned long long)((unsigned long)p_9 + v_15) - 
                        (unsigned long long)p % 63033ULL) % (unsigned long long)(
                       (int)p_6[3][2][1] / ((int)(! v) + 726) + 947))) {
    result = (char)18;
    result = (char)0;
  }
  else {
    v = (unsigned short)(0LL / (long long)((int)(-6310013494.72 + (double)p) * 507476682 + 521));
    result = (char)(~ (p_4 - (unsigned long)v) / (unsigned long)((p_9 * -25981L) * (long)(
                                                                 49338 * (int)p_11) + 76L));
  }
  return result;
}



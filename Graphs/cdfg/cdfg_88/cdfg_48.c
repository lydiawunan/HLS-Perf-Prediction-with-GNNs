#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 486297552
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p, unsigned char p_7, char p_13)
{
  unsigned long long v_19;
  unsigned int v_17;
  long v_15;
  unsigned char v_11;
  long v_9;
  float v_5;
  unsigned long long v;
  unsigned short result;
  v_19 = (unsigned long long)p_7;
  v_17 = 4140895931U;
  v_11 = (unsigned char)118;
  v_9 = 514436354L;
  v_5 = (float)p;
  v = 53568ULL;
  while (v_5 <= (float)((unsigned long long)((float)(v % (unsigned long long)(
                                                     (int)p_7 + 318)) - v_5) | 
                        (unsigned long long)p * ~ v)) {
    v_15 = (long)v_11 % ((v_9 + 15706L) + 656L);
    v_9 = (long)((unsigned long long)p_13 % (((unsigned long long)(! v_17) | v_19) + 868ULL));
    v_9 = (long)(66UL % ((unsigned long)((long)p_13 * v_15) % (4053688768UL / (unsigned long)(
                                                               v_9 + 253L) + 29UL) + 28UL));
    v_5 = (float)p_7;
  }
  while_0_break: ;
  result = (unsigned short)((v * 3354ULL) / ((0 ^ (unsigned long long)p) + 884ULL));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 854035863
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, char p_4, signed char p_6, float p_8,
          long p_10)
{
  signed char v_19;
  unsigned char v_17;
  unsigned long v_15;
  unsigned long long v_13;
  int v;
  short result;
  v_19 = (signed char)39;
  v_17 = (unsigned char)p_4;
  v_15 = 4294954603UL;
  v_13 = (unsigned long long)p_4;
  v = (int)p_10;
  while (! (! (p - (unsigned long long)v)) > (unsigned long long)((float)v_17 - 
                                                                  (float)p_4 / (
                                                                  p_8 + 221.f)) * (
                                             (unsigned long long)(- p_8) % 1075107324ULL)) {
    result = (long long)v_19 + 28141LL;
    v_19 = (signed char)(p * (unsigned long long)(~ (! p_6)));
    v_15 = (unsigned long)((unsigned int)(- (- p_8)) + ((unsigned int)(! result) - (
                                                        4294928529U | (unsigned int)p_6)));
    v_17 = (unsigned char)(! p_10);
  }
  while_0_break: ;
  if ((unsigned long long)(((int)p_4 & (int)p_4) % 23294) % (((unsigned long long)v + v_13) / 104ULL + 541ULL) != (unsigned long long)v_15) {
    result = (short)(- (p + 240ULL) % (unsigned long long)((int)p_6 + 632));
    result = (short)((unsigned long long)result / (p + 354ULL) - (unsigned long long)((int)(~ p_4)));
  }
  else result = (short)((long)(p_8 + 3861.f) + - (! p_10));
  return result;
}



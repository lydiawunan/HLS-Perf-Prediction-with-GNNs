#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 295391743
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(int p, unsigned long long p_5, char p_7, short p_15,
          unsigned long long p_17)
{
  long v_13;
  unsigned long long v_11;
  long long v_9;
  short v;
  float result;
  v_11 = p_17;
  v = (short)17166;
  result = -1649934976.f;
  v_13 = (long)((int)(- (~ p_7)) - (int)(! p_15));
  while ((unsigned long long)(((int)v + 149) - ~ p) - p_5 == (unsigned long long)(~ (- p_7))) {
    v_9 = v_11 - 18446744073709527821ULL;
    result = (float)((unsigned long long)v - p_5);
    v_11 = (unsigned long long)(13807 * (int)p_15) - ~ ((unsigned long long)p % (
                                                        p_17 + 32ULL));
    v = (short)(56079LL / (((long long)(- v_13) | (v_9 | (long long)result)) + 277LL));
  }
  while_0_break: ;
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1047242028
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, char p_7, float p_11, long p_13, unsigned long p_15)
{
  float v_17;
  unsigned char v_9;
  unsigned int v_5;
  unsigned int v;
  float result;
  v_17 = -660.75f;
  v_9 = (unsigned char)p_13;
  v_5 = (unsigned int)p_13;
  v = 51430U;
  result = p_11;
  if ((! p_15 + ! p_15) / ((unsigned long)(- (- p_11)) + 62UL) >= (unsigned long)(
      103U - v_5)) {
    v_9 = (unsigned char)((float)(((unsigned long)v * 4294935340UL) % (unsigned long)(
                                  (long)-2279390346.19 / (p_13 + 175L) + 799L)) * (
                          (float)(! v_5) * ((float)p_15 * -627.897644043f)));
    v_5 = (unsigned int)(~ (~ 129934317));
    v_5 = (unsigned int)((long long)(- (v_5 / 4965U)) / (p + 964LL));
  }
  else {
    result = (float)(! (! (! v_9)));
    v_9 = (unsigned char)(- v_17);
    v_5 = (unsigned int)p_15;
  }
  while (! ((long long)v % (p + 124LL)) == (long long)(v_5 * 4294936494U + (unsigned int)p_7)) {
    v_9 = (unsigned char)(~ (! v_5) ^ (unsigned int)((int)(- v_9) % (
                                                     (int)((unsigned char)(- p_11)) + 303)));
    result = -1.99019176842e+38f;
    v = (unsigned int)p_11;
  }
  while_0_break: ;
  return result;
}



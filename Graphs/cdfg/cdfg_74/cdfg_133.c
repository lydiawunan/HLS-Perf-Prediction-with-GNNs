#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 389292328
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p, double p_4, unsigned long p_6, signed char p_8,
         int p_13)
{
  unsigned long v_15;
  unsigned long v_11;
  float v;
  char result;
  v_15 = (unsigned long)p;
  result = (char)-68;
  v = (float)(- (~ p_6 * (v_15 * (unsigned long)p_8)));
  while (- (237153723LL + (long long)((unsigned long)p_8 - p_6)) <= (long long)result) {
    v_11 = v + 49142.f;
    v = (float)(((28698UL | v_11) - 83UL) % (unsigned long)(p_13 + 70));
    result = (char)-4224367976.49;
  }
  while_0_break: ;
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 678073628
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p[1][5], unsigned long long p_5[4],
                       unsigned int p_7, unsigned long long p_9,
                       unsigned short p_19)
{
  long v_17;
  long long v_15;
  float v_13;
  unsigned int v_11;
  char v;
  unsigned long long result;
  v_17 = 50665L;
  v_15 = (long long)p_5[0];
  v_13 = -885.866699219f;
  v_11 = 3329292189U;
  v = (char)p[0][2];
  while (p_5[2] + ((unsigned long long)(~ p_7) - ~ p_9) != (unsigned long long)(~ (
         v_11 / 21190U))) {
    v = (long long)v_17 * (v_15 + (long long)(v_13 - 2.66362111e+38f));
    v_15 = (long long)(- (p_7 * (unsigned int)(191 % ((int)p_19 + 841))));
    v_17 = (long)(! (- (~ p_7)));
    v_11 = (unsigned int)-790662080.f;
  }
  while_0_break: ;
  result = (unsigned long long)(- ((-125LL + p[0][1]) % (long long)((int)v + 468)));
  return result;
}



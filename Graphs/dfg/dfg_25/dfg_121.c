#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 796869871
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, unsigned int p_7, long p_9[5][3],
                       short p_11[3], unsigned char p_13)
{
  long long v_5;
  float v;
  unsigned long long result;
  v = (float)p_13;
  v_5 = 4294964841LL;
  result = - (! ((unsigned long long)p_11[1] % 536901666ULL) * (unsigned long long)(
              (long long)p_13 * v_5 - v_5));
  v_5 = (long long)result;
  result = (unsigned long long)((long long)(v * 875.f) / (((long long)p - v_5) + 220LL) - (long long)(- p_7)) * (
           (unsigned long long)((unsigned long)p_7 / 3580UL) / (! ((unsigned long long)p_9[3][0] - result) + 716ULL));
  return result;
}



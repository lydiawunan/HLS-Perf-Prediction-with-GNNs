#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 387036726
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, unsigned char p_7[3], unsigned long long p_11[2],
              short p_13)
{
  unsigned long v_17;
  unsigned long long v_15;
  unsigned int v_9;
  long v_4;
  unsigned char v;
  long long result;
  v_17 = (unsigned long)p;
  v_9 = 10196U;
  v_4 = (long)p_7[2];
  result = (long long)p_11[1];
  v_15 = (unsigned long long)p_13;
  if (~ ((unsigned long long)p_13 - p_11[1] * v_15) < (unsigned long long)v_17) {
    result = result;
    v = (unsigned char)((long long)v_9 * ((result & -40306LL) % -975998831LL));
    result = 94LL + (long long)((long)v / (v_4 + 725L)) % (p % (long long)(
                                                           (int)p_7[2] + 702) + 765LL);
  }
  else result = (long long)p_11[1];
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 822887246
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, signed char p_4, unsigned long long p_7, double p_11,
        long long p_13)
{
  long long v_17;
  long v_15;
  short v_9;
  long v;
  int result;
  v_17 = p_13;
  v_15 = 637653524L;
  result = 405514902;
  if ((unsigned long long)((v_17 * 36LL + (long long)(~ v_15)) % 3929709LL) >= 688664397ULL) {
    v = (long)result;
    result = (int)(- (p_13 & (p_13 + (long long)v_15)));
    v_9 = (short)(4027818441UL % (unsigned long)((result * (int)p_4) / 3087 + 225));
  }
  else {
    v = (long)(~ ((unsigned long long)p_13 - - p_7));
    result = (int)(- (p_11 * p_11) - 87.);
    v_9 = (short)(((long long)result % (p_13 + 280LL) & (long long)(~ p)) + (long long)v);
  }
  if (- (((unsigned long long)v + p_7) - 869142163ULL) > (unsigned long long)(
      ((long)(! v_9) % ((v - 624732483L) + 687L)) % ((long)(- ((double)p * p_11)) + 780L))) 
    result = (int)(- (1072.f + (float)p / -1.45775833533e+38f));
  else result = 8 / ((int)p_4 + 23);
  return result;
}



//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 514823348
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, long p_4, long long p_11, unsigned int p_13,
              signed char p_15)
{
  unsigned long v_9;
  char v_7;
  short v;
  long long result;
  v_9 = 3805271180UL;
  v = (short)p_11;
  result = (long long)p_15;
  v_7 = (char)((long long)(- v_9) - (p_11 % (long long)((int)v + 897) + (long long)(
                                     4U + p_13)) * (long long)(~ (~ p_15)));
  result = (long long)(! (32516UL ^ ((unsigned long)p_4 - 29396UL))) * (
           (long long)p_4 * ((long long)(-56051L * (long)v_7) + ~ result));
  result = (long long)((-75L - p_4) % (long)((int)(- v) + 722) + (long)(
                       (int)p ^ 0)) % (! (result / (long long)((int)p + 472) - (long long)p) + 329LL);
  result = (long long)(~ (-32278 >> (result & 15LL)) + (int)(! (~ p))) - result;
  return result;
}



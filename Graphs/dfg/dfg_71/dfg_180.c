#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 174926557
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p, long long p_5, unsigned long p_15[3][5])
{
  unsigned int v_13;
  signed char v_11;
  unsigned long long v_9;
  unsigned short v_7;
  signed char v;
  long result;
  v_13 = (unsigned int)p_5;
  v_11 = (signed char)p;
  v_9 = 405588438ULL;
  v_7 = (unsigned short)p;
  v = (signed char)-33;
  result = -621995682L;
  v = (signed char)(! ((unsigned long long)v_7 - v_9) % (unsigned long long)(
                    ((long)v_11 / (result + 163L)) * (result - (long)v) + 750L) << (
                    (unsigned long)((unsigned int)(~ v) - (v_13 ^ 497985831U)) * p_15[2][0] & 63UL));
  result = (long)((double)(- ((long long)(-810.559448242f - p) % (-27466LL * (long long)v + 466LL))) / (
                  ((double)(! (p_5 % (long long)((int)v_7 + 718))) - 4942789852.17) + 236.));
  result = - (~ (15824L - result));
  result = ~ (! result);
  return result;
}



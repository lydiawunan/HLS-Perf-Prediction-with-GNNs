//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 16032140
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, float p_5, unsigned int p_7, unsigned char p_15)
{
  unsigned long v_13;
  unsigned int v_11;
  double v_9;
  long long v;
  int result;
  v_9 = -6576377623.44;
  v = -263655395LL;
  result = -369744064;
  v_13 = (unsigned long)(~ (-123 % ((int)(- (~ p_15)) + 68)));
  v_11 = (unsigned int)(21LL % ((long long)p_5 % ((long long)(-109 * (int)((signed char)p_5)) * v + 586LL) + 573LL));
  result = (int)(((long long)((float)((long long)p - 77419474LL) - (float)v / (
                                                                   p_5 + 207.f)) / (
                  (50209LL + (-385939944LL - (long long)result)) + 740LL)) % (long long)(
                 (unsigned long)((double)p_7 - v_9) * - ((unsigned long)v_11 * v_13) + 606UL));
  return result;
}



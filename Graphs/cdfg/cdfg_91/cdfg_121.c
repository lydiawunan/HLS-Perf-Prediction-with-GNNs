#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 520983416
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, int p_7, long long p_9, unsigned long long p_11,
                unsigned int p_13)
{
  unsigned char v_21;
  unsigned int v_19;
  double v_17;
  unsigned short v_15;
  long long v_5;
  unsigned long v;
  signed char result;
  v_21 = (unsigned char)39;
  v_17 = -5.54676210301e+37;
  v = 3347080029UL;
  if ((unsigned long long)v * (p_11 / (unsigned long long)(p + 92) ^ (unsigned long long)(
                               p / (p_7 + 869))) < (unsigned long long)(
      ~ (p_13 % (unsigned int)(p_7 + 506)) / ((unsigned int)(- (3923328256. - v_17)) + 604U))) {
    v_15 = (unsigned short)170.46328818;
    v = (unsigned long)(~ v_15);
    v_5 = (long long)(- (((unsigned long long)p_13 - p_11) | 18446744073709546864ULL));
  }
  else {
    v_19 = ~ (3679086234U % (- p_13 + 797U));
    v_5 = (long long)(! ((unsigned long)(6826U / (v_19 + 76U)) & (unsigned long)(
                         (long)v_21 / -46720L)));
    v = (unsigned long)(- ((v_17 * 3940694189.) * (double)(- v_5)));
  }
  if ((unsigned long long)((long long)v % ((v_5 - (long long)p_7) + 877LL) - p_9) == - (~ (
      57829ULL * p_11))) result = (signed char)((long)p % ((51L + (long)p % 56245L) + 857L));
  else result = (signed char)-58;
  return result;
}



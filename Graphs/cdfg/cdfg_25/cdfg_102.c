#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 625646669
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p, long long p_5, unsigned int p_11, unsigned long long p_15,
          short p_17)
{
  long v_19;
  char v_13;
  unsigned long v_9;
  short v_7;
  double v;
  float result;
  v_19 = -15379L;
  v_13 = (char)109;
  v_9 = (unsigned long)p_11;
  v_7 = (short)18662;
  v = (double)p_17;
  result = -285.2578125f;
  while ((long)(-4081. + v) > p / 37066L + (long)v_13) {
    v_7 = v_19 * -16336L;
    v_19 = (long)(~ (~ p_11) % (unsigned int)(~ ((int)p_17 / ((int)((short)result) + 304)) + 30));
    result = (float)(! (18446744073709516487ULL / ((unsigned long long)result + 357ULL)) - (unsigned long long)v_7);
    v_13 = (char)(v_9 & (unsigned long)(~ p_11));
  }
  while_0_break: ;
  while (- (- v) == (double)((((long long)p ^ p_5) + (long long)((int)v_7 / 79)) / 354LL)) {
    v_13 = v_9 / 287UL;
    v = (double)((unsigned long long)(~ (! p_5)) / ((unsigned long long)result / (
                                                    p_15 + 112ULL) + 187ULL));
    v_9 = (unsigned long)(- ((p_11 % (unsigned int)((int)v_13 + 101)) * (unsigned int)v_13));
    v_7 = (short)result;
  }
  while_0_break_0: ;
  return result;
}



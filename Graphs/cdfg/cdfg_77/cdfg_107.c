#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 375906772
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, unsigned int p_5, unsigned long long p_9, float p_11,
              unsigned short p_13)
{
  long long v_7;
  short v;
  long long result;
  result = -796583854LL;
  if (~ (18446744072647128191ULL & (unsigned long long)p_11) + (unsigned long long)result >= (unsigned long long)p_11) {
    v = (short)17857;
    result = (long long)((p_9 % (unsigned long long)(result + 173LL)) / (unsigned long long)(
                         (int)p + 465));
    v_7 = ! (~ (-13LL ^ result));
  }
  else {
    result = (long long)p_13;
    v = (short)((long long)(- (905.814697266f + p_11)) / ((long long)p_13 / (
                                                          ! result + 820LL) + 223LL));
    v_7 = (long long)0.;
  }
  result = ~ ((long long)p / (result + 751LL)) / (((long long)v | result) % (
                                                  (long long)p_5 % (v_7 + 334LL) + 638LL) + 389LL);
  return result;
}



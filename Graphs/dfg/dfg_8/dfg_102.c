//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 783651211
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p, unsigned short p_5, unsigned int p_9,
        unsigned short p_11, unsigned int p_17[5][3])
{
  char v_15;
  char v_13;
  unsigned long v_7;
  unsigned long v;
  int result;
  v_15 = (char)p;
  v_13 = (char)89;
  v_7 = (unsigned long)p_17[2][0];
  v = (unsigned long)((unsigned int)((-398402724 / ((int)p_5 + 959) + (int)v_13) + (int)(~ (- v_15))) % (
                      ~ p_17[0][0] + 310U));
  result = (int)(- (((unsigned long)-865.260238263 + v) - (unsigned long)p_5 % (
                                                          v_7 + 623UL)) + ! (
                 (unsigned long)(p_9 - 3796289231U) & (unsigned long)(
                 (long)p_11 * 20038L)));
  v = 680653712UL;
  result = (int)(- ((double)((long long)((long)p % -55139L) % ((11237LL - (long long)v) + 1016LL)) / (
                    (573.214176425 - (double)result) + 534.)));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 287133700
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, short p_5[1][2], int p_11[4][4],
          signed char p_17, char p_19)
{
  long long v_15;
  short v_13;
  unsigned int v_9;
  signed char v_7;
  int v;
  short result;
  v_15 = (long long)p_11[3][1];
  v_9 = 668759664U;
  v_7 = (signed char)p;
  v = -19523;
  result = (short)p_11[1][2];
  v_13 = (short)(((unsigned long long)result * (p / (unsigned long long)(
                                                v_15 + 954LL) - 18446744073709542653ULL)) % (unsigned long long)(
                 (int)v_7 + 375));
  v_15 = (long long)(((- p | (unsigned long long)(51302UL * (unsigned long)result)) * 18446744073709533847ULL) * (unsigned long long)(! (
                     v % ((int)p_19 * (int)p_5[0][0] + 637))));
  v_7 = (signed char)((((unsigned long long)v_9 % (p + 76ULL) << ((p_11[0][2] - (int)v_13) & 63)) - (unsigned long long)(
                       (v_15 - (long long)p_17) % (long long)((int)(~ p_19) + 967))) / (
                      ~ (18446744073347211530ULL + p / (p + 199ULL)) + 297ULL));
  result = (short)((unsigned long long)(~ v) & ((p % (p + 368ULL)) % (unsigned long long)(
                                                (int)p_5[0][0] + 549) - - (
                                                p / (unsigned long long)(
                                                (int)v_7 + 962))));
  return result;
}



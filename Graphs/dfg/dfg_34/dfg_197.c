#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 567413663
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p, double p_9[4][5][4], long long p_11,
              long long p_15, int p_17)
{
  short v_19;
  long long v_13;
  long v_7;
  char v_5;
  char v;
  long long result;
  v_19 = (short)p_17;
  v_13 = -6495LL;
  result = 838476399LL;
  v_7 = (long)(p_15 * (long long)((unsigned long)(- p_17 + 650870867) * - (
                                  48931UL * (unsigned long)v_19)));
  v_5 = (char)((long long)(! (v_7 % ((long)(p_9[2][2][2] * -315251326.) + 850L))) * (
               (p_11 | p_11 % (result + 592LL)) * (- v_13 * (p_15 / (long long)(
                                                             p_17 + 61)))));
  v = v_5;
  result = (long long)(! ((int)((unsigned char)((double)(-606.086364746f - (float)v) - 2.36506216281e+38)) % (
                          (int)(- p) + 362)));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1015450746
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long p, char p_5, float p_9, long p_11[3][5][5],
                       char p_15)
{
  unsigned long long v_17;
  short v_13;
  int v_7;
  double v;
  unsigned long long result;
  v_17 = (unsigned long long)p_15;
  v_13 = (short)-16405;
  v_7 = -300391224;
  v_17 = ! ((unsigned long long)v_13 - - v_17);
  if ((unsigned long long)(((p_11[1][2][4] + (long)v_13) - (long)((int)p_15 + v_7)) ^ 19L) >= - v_17) {
    v_7 = v_7;
    v = (double)(- (- ((float)v_7 * p_9)));
    result = (unsigned long long)(((v - (double)p) * (double)((long long)v - -12056792LL)) * (double)p_5);
  }
  else result = 18446744073617399607ULL;
  return result;
}



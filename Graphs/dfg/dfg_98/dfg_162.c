#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 349314263
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, long p_9, char p_11, int p_13[2][2][1],
              signed char p_15)
{
  unsigned short v_21;
  int v_19;
  int v_17;
  int v_7;
  long long v_4;
  unsigned long long v;
  long long result;
  v_21 = (unsigned short)p_15;
  v_19 = 190314890;
  v_17 = -16137;
  v_4 = -644402387LL;
  v_7 = (int)v_21;
  v = (unsigned long long)(-80629762 - v_19);
  v = (unsigned long long)(- (-10399L / (long)((int)p_15 + 604))) % (
      ((unsigned long long)v_17 - ~ v) * (unsigned long long)(974133035UL * (unsigned long)p - (unsigned long)(- p_15)) + 470ULL);
  result = (long long)(((18446744073088394587ULL | v) % (unsigned long long)(
                        v_4 % (long long)((int)p + 605) + 1014LL) - (unsigned long long)(
                        (long)v_7 * p_9 ^ (long)p_11)) - (unsigned long long)(
                       ! (- p_13[0][1][0]) / -75));
  return result;
}



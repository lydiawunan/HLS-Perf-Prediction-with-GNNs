#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 533191458
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, signed char p_4[1][1], float p_7, short p_9[3][2][5],
         unsigned long long p_13)
{
  long v_19;
  long long v_17;
  unsigned long v_15;
  unsigned int v_11;
  int v;
  char result;
  v_19 = -44913L;
  v_17 = -491840419LL;
  v_11 = 42221U;
  v = (int)p_4[0][0];
  result = (char)(! ((unsigned long long)v_17 % (p_13 + 707ULL)) + ~ (
                  p_13 * (unsigned long long)v_19));
  while ((unsigned long long)(! (v ^ 13682) - ~ ((int)((short)p_7) / 12269)) > 
         ((60345ULL / (unsigned long long)((int)p_9[0][1][1] + 291)) % (
          (unsigned long long)((float)v - 71.9976501465f) + 549ULL)) % 515ULL) {
    v_15 = v_11 / 742U;
    result = (char)(! (4294952294UL + ~ v_15));
    v_11 = 4294906863U;
    v = (int)(32664ULL % (p_13 + 627ULL));
  }
  while_0_break: ;
  return result;
}



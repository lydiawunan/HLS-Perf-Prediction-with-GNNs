#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 975819173
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, int p_5, signed char p_17)
{
  unsigned long v_15;
  short v_13;
  double v_11;
  unsigned int v_9;
  float v_7;
  short v;
  unsigned long result;
  v_15 = (unsigned long)p_5;
  v_13 = (short)28030;
  v_9 = (unsigned int)p;
  v_7 = -981.441589355f;
  v = (short)p_17;
  result = 4294926722UL;
  if (! ((unsigned long)p_5 * v_15) * ((unsigned long)p_5 - 27785UL % (
                                                            result + 470UL)) < (unsigned long)(~ (
      (long)p_17 + -600164303L))) {
    v_11 = (double)(52995ULL + ! (31113ULL + (unsigned long long)v_13));
    v_7 = (float)0;
    v = (short)(-114 * (int)((char)(v_11 * (double)p_5 + 3261113176.)));
  }
  else {
    result = (unsigned long)p_5;
    v_11 = (double)(- ((69UL * result) / (unsigned long)(v_9 * 4294940881U + 637U)));
    result = v_15;
  }
  while ((unsigned long long)((int)v / (p_5 + 608)) != 47716ULL) {
    v_9 = v_11 / (double)(v_7 * 633319680.f + 98.f);
    result = (unsigned long)(- ((18446744073709551395ULL - (unsigned long long)p_5) * (unsigned long long)(! v_9)));
    v_13 = (short)190;
    v = v_13;
  }
  while_0_break: ;
  return result;
}



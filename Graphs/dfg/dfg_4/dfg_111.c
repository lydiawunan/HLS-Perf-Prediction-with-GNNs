//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 43283056
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, long long p_13)
{
  float v_19;
  short v_17;
  int v_15;
  unsigned long long v_11;
  float v_9;
  short v_6;
  float v_4;
  float v;
  int result;
  v_19 = 2.76465620944e+37f;
  v_17 = (short)21916;
  v_15 = 64497;
  v_11 = 1070031535ULL;
  v_9 = (float)p;
  v_6 = (short)((((unsigned long long)v_9 / (~ v_11 + 760ULL)) % (unsigned long long)(
                 4294924047LL % ((p_13 - 4294934980LL) + 161LL) + 831LL)) % (unsigned long long)(
                ~ (~ v_15 / (((int)v_17 + (int)((short)v_19)) + 625)) + 677));
  v_4 = (float)((unsigned long)(! v_6) / (~ ((46604UL - p) + 4294967204UL) + 453UL));
  v = v_4;
  result = (int)((unsigned long)(- v) % 4294908216UL);
  return result;
}



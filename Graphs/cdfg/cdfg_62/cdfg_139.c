#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 165371979
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, char p_5, signed char p_13,
                  unsigned long long p_17[1][3], long long p_21)
{
  long long v_27;
  unsigned int v_25;
  unsigned long v_23;
  unsigned long v_19;
  double v_15;
  int v_11;
  unsigned long long v_9;
  short v_7;
  long long v;
  unsigned long result;
  v_27 = -34150LL;
  v_25 = 899695551U;
  v_19 = 989740734UL;
  v_15 = -5549243962.86;
  v_9 = p_17[0][0];
  v_23 = p;
  if ((double)(((unsigned long long)v_15 - p_17[0][1]) + (unsigned long long)(
               -4.50856466135e+37f / ((float)v_19 + 893.f))) * ((double)(! p_21) + -902.308274722) != (double)(
      p_21 * ((long long)(v_23 ^ (unsigned long)v_25) + (v_27 << (p_21 & 63LL))))) {
    v = (long long)(! (! v_9));
    v_7 = (short)((long long)(! (4294967173UL - p)) + (v - (long long)p_5) % -26LL);
    result = (unsigned long)((long long)(p - 4294939904UL) - (v % (long long)(
                                                              (int)p_5 + 261)) / (long long)(
                                                             ((int)((short)-4152122725.67) + (int)v_7) + 166));
  }
  else {
    v_11 = (int)(~ p_13);
    result = (unsigned long)v_11;
  }
  return result;
}



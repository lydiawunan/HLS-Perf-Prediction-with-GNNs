#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 802863787
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, long p_9, unsigned long p_13, signed char p_15)
{
  unsigned int v_19;
  unsigned long long v_17;
  unsigned long v_11;
  double v_7;
  long long v_4;
  unsigned long long v;
  char result;
  v_19 = 9332U;
  v_17 = 18446744073709494632ULL;
  v_7 = (double)p_15;
  v_4 = (long long)p_15;
  v = (unsigned long long)(- ((unsigned int)((int)p_15 % 60) * v_19));
  if ((((unsigned long long)p_15 * v_17 >> 40LL) | (unsigned long long)(! (! v_19))) <= (unsigned long long)(! v_4)) {
    v_4 = (long long)(- (30885. - v_7) - (double)(~ p_9));
    v = (unsigned long long)(-29446LL * v_4 - (long long)(45744UL / (
                                                          p + 982UL))) * (
        v / 44863ULL);
    result = (char)v;
  }
  else {
    v_11 = 4294923144UL;
    result = (char)(! 0UL);
  }
  return result;
}



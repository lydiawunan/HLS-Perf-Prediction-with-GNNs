//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 938644186
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, long p_7, unsigned short p_9, short p_11,
                  unsigned short p_15)
{
  long v_17;
  unsigned long v_13;
  unsigned int v_5;
  unsigned short v;
  unsigned char result;
  v_17 = (long)p_9;
  v_5 = (unsigned int)p_15;
  v_13 = 3692033262UL;
  v = (unsigned short)(~ (- (-50184LL / (long long)(v_17 + 636L)) * (long long)v_13));
  result = (unsigned char)((((unsigned long)v_5 - (unsigned long)(p_7 - (long)p_9)) ^ 
                            (unsigned long)(~ p_11) % (v_13 + 274UL)) * (
                           (- v_13 / (unsigned long)((-1044345117 + (int)p_15) + 795)) / (
                           (unsigned long)(49805 * (int)p_15) / (28391UL * (unsigned long)v + 325UL) + 892UL)));
  result = (unsigned char)((unsigned long long)(! ((long)v - -60692L)) / (
                           ~ ((unsigned long long)((int)((unsigned char)p) * (int)result) / 18446744073057623954ULL) + 991ULL));
  return result;
}



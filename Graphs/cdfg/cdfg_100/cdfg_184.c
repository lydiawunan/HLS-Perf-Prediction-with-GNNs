#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 188040883
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, unsigned long p_5, double p_7,
         unsigned char p_9, long p_11)
{
  unsigned long v_17;
  long long v_15;
  short v_13;
  long v;
  char result;
  v_17 = p_5;
  v_15 = (long long)p_9;
  v_13 = (short)20595;
  v = 980102638L;
  if (-36LL == v_15 * (long long)((double)p_9 * p_7) + (long long)p_5) {
    v_15 = (long long)(~ (~ (-50015)));
    v_13 = (short)-809.463745117f;
    result = (char)(- (~ v ^ 0L));
  }
  else {
    v_15 = ~ (((long long)p_5 ^ v_15) + (long long)(4294918442UL ^ v_17));
    v = (long)((int)p_9 - 23);
    result = (char)v;
  }
  if ((long long)p_9 <= (long long)((long)result * p_11 | 1107019586L) % (
                        (((long long)v_13 + -14489LL) - v_15) + 182LL)) 
    result = (char)(! p / (p + 981ULL));
  else {
    v = (long)(- 1.33832646049e+38);
    result = (char)(152 % ((int)((unsigned char)((double)((unsigned long)v * p_5) + (
                                                 130412390. - p_7))) + 347));
  }
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 438525474
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, unsigned long p_7, unsigned short p_9)
{
  unsigned short v_13;
  unsigned long long v_11;
  signed char v_5;
  double v;
  long result;
  v_13 = p_9;
  v_11 = 18446744073709522510ULL;
  v = (double)(- (- (! (~ v_13))));
  v_5 = (signed char)(- -563.503231638);
  result = (long)(((unsigned long long)v_5 % ((unsigned long long)(81UL * p_7) % (
                                              (18446744073536299465ULL << (
                                               p_7 & 63UL)) + 887ULL) + 17ULL)) % (
                  (unsigned long long)(- (- p_9)) / ((unsigned long long)(
                                                     p_7 & (unsigned long)p) % (
                                                     (98ULL ^ v_11) + 423ULL) + 352ULL) + 753ULL));
  result = - ((long)(- v) + (long)p % (result + 335L)) / ((long)2.2039152043e+38 + 485L);
  return result;
}



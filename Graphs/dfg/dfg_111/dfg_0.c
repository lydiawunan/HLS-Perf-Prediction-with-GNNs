#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 747713467
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, double p_7, long long p_9,
                  unsigned char p_13, unsigned short p_17)
{
  long v_15;
  unsigned char v_11;
  unsigned char v_5;
  long long v;
  unsigned char result;
  v_11 = (unsigned char)226;
  v_15 = (long)p_17;
  v = (long long)(2.92367804833e+38 / ((double)(47UL / (((unsigned long)(
                                                         (int)v_11 / (
                                                         (int)p_13 + 918)) & 
                                                         (unsigned long)v_15 * 4294919195UL) + 868UL)) + 632.));
  v_5 = (unsigned char)(- ((~ v * (long long)-2.58342916832e+38) / ((
                                                                    (long long)(
                                                                    (int)p_7 | -649568499) & (
                                                                    p_9 + v)) + 36LL)));
  result = (unsigned char)((25. - 862.611049023 * (double)p) / ((double)(
                                                                ((v ^ v) / 89LL) / (long long)(
                                                                ~ (102 + (int)v_5) + 371)) + 495.));
  return result;
}



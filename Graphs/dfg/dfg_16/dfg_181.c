#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 564778908
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, unsigned long p_7, double p_9,
                unsigned short p_11, unsigned short p_19)
{
  unsigned int v_23;
  short v_21;
  int v_17;
  signed char v_15;
  double v_13;
  double v_5;
  unsigned short v;
  signed char result;
  v_23 = 3552154451U;
  v_21 = (short)-14886;
  v_15 = (signed char)p_11;
  v_13 = (double)p_7;
  v_5 = (double)p_11;
  v = (unsigned short)6282;
  result = (signed char)110;
  v_17 = ! ((int)p_11 + ! ((int)p_19 / ((int)v_15 + 110)));
  v_15 = (signed char)((unsigned int)((int)(- v_13) / (~ ((int)p_19 - (int)v_21) + 309)) * v_23);
  v = (unsigned short)(- (v_13 / 345.) - (double)((unsigned int)(~ (- v)) * (
                                                  (p % (unsigned int)(
                                                   (int)v_15 + 603)) % (unsigned int)(
                                                  v_17 * (int)result + 262))));
  result = (signed char)((double)((unsigned long)((p - (unsigned int)result) - (unsigned int)(~ v)) / (
                                  149690905UL * (unsigned long)(11040. / (
                                                                v_5 + 906.)) + 832UL)) * - (
                         (double)p_7 * p_9 + (double)(23 * (int)p_11)));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 30604514
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, short p_7, long p_13, int p_17, unsigned int p_19[4])
{
  double v_15;
  unsigned char v_11;
  double v_9;
  char v_4;
  unsigned long long v;
  signed char result;
  v_15 = 987.830291736;
  v_11 = (unsigned char)p_17;
  v_4 = (char)(((-40220L + (long)((int)p_7 + p_17)) << (p & 31)) << (
               ! (120U / (p_19[0] + 261U)) * 4294965926U & 31U));
  v_9 = (double)(0UL - (unsigned long)(- (- p_13)));
  v = (unsigned long long)(0L - (102L * ((long)p * p_13)) / ((long)((double)(
                                                                    (int)p_7 / (
                                                                    (int)((short)2.61313905966e+38) + 673)) - v_15) + 717L));
  result = (signed char)(v * (unsigned long long)(((int)v_4 + 47722 / (
                                                              p + 78)) % (
                                                  (int)(- p_7) / ((int)((unsigned char)v_9) / (
                                                                  (int)v_11 + 705) + 381) + 254)));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 902523952
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long long p, long p_9, signed char p_11,
                  unsigned long long p_13[4], short p_17[2])
{
  long v_15;
  long v_6;
  unsigned char v_4;
  unsigned char v;
  unsigned char result;
  v_15 = -630249561L;
  result = (unsigned char)110;
  v_4 = (unsigned char)p;
  v = (unsigned char)((unsigned long long)p_11 | (unsigned long long)v_4 * (
                                                 (p_13[0] / (unsigned long long)(
                                                  v_15 + 596L)) * (unsigned long long)(
                                                 (long)p_17[0] - p_9)));
  v_6 = p_9;
  result = (unsigned char)(((long long)(((int)result / ((int)result + 310)) % (
                                        (int)(~ v) + 72)) * ((long long)(
                                                             (int)v_4 / 17249) % (
                                                             ((long long)v_6 - p) + 801LL))) % (
                           (long long)(-3.92554634563e+46 / ((double)(
                                                             18324LL | 
                                                             179835920LL / (
                                                             p + 923LL)) + 849.)) + 49LL));
  return result;
}



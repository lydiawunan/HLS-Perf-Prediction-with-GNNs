#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 966776284
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, unsigned short p_4, double p_7,
                signed char p_21)
{
  double v_19;
  int v_17;
  long v_15;
  short v_13;
  short v_11;
  double v_9;
  unsigned long v;
  signed char result;
  v_19 = -5520496506.83;
  v_17 = (int)p;
  v_13 = (short)p;
  v_11 = (short)p;
  v_9 = -164.266641605;
  v = 60362UL;
  v_19 = (double)((int)((unsigned short)(- (- v_19 / ((p_7 - v_19) + 376.)))) / (
                  (int)p_4 + 22));
  v_15 = (long)(((unsigned long)v_17 / (71UL * (v % ((unsigned long)p_7 + 599UL)) + 1016UL)) / (unsigned long)(
                ((long)(((int)((unsigned char)v_19) * 96) * (int)(~ p_21)) + 
                 (long)(~ p) * 36101L) + 986L));
  v = (unsigned long)(~ ((long)((int)(! v_11) - (int)p_4) - (long)(! v_13) % (
                                                            (v_15 << 20) + 894L)));
  result = (signed char)(((unsigned long long)(3845220376U + (unsigned int)(
                                               (int)p - (int)p_4)) % 18446744073709491115ULL) * (unsigned long long)(
                         (double)v * ((p_7 / (v_9 + 437.)) / (- v_9 + 6.))));
  return result;
}



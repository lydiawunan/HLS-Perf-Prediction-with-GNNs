#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 735341907
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, double p_4, unsigned short p_6[3],
                   unsigned long p_11, double p_13)
{
  signed char v_23;
  long v_21;
  double v_19;
  float v_17;
  double v_15;
  long long v_9;
  unsigned long v;
  unsigned short result;
  v_23 = (signed char)p_6[2];
  v_21 = 23775L;
  v_17 = 3.0609616271e+38f;
  v_15 = (double)p_11;
  v_9 = 46488LL;
  v = 3394300216UL;
  v_19 = (double)((long long)((long)((7212 % ((int)p + 35)) * ((int)p >> 14)) & 
                              ((long)p % (v_21 + 692L)) / (long)(((int)v_23 + 107) + 233)) + (
                  v_9 * (long long)v | (long long)p_4));
  v_9 = (long long)((int)(((2.29596240006e+38 - p_13) - (double)v_17) / (
                          (double)((unsigned long)((int)p_6[2] % 351) * - p_11) + 916.)) ^ - (
                    (int)(! p) % ((int)((short)(v_19 - 17.)) + 807)));
  v = (unsigned long)((v_9 % (long long)((54923UL + ~ p_11) + 853UL)) % (long long)(
                      4294966971U * (unsigned int)(- p_13 - v_15 * (double)p_6[0]) + 451U));
  result = (unsigned short)((unsigned long)(((int)p / ((int)((short)(- p_4)) + 353)) * (int)p_6[1]) % (
                            v + 830UL));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 777432858
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, unsigned long p_5, long p_11, unsigned int p_13,
              double p_15)
{
  float v_25;
  float v_23;
  long v_21;
  double v_19;
  double v_17;
  short v_9;
  unsigned char v_7;
  long long v;
  long long result;
  v_25 = -922.42590332f;
  v_23 = (float)p_13;
  v_21 = (long)p_15;
  v_19 = -392.171226697;
  v_17 = 804505641.247;
  v_7 = (unsigned char)79;
  v = (long long)p_15;
  while (v_19 >= (double)v / (v_19 + 301.)) {
    v_7 = (long)v_23 - (v_21 | 35L);
    v_23 = (float)((long long)(~ (30065 ^ (int)p_15)) - - (53272LL / (long long)(
                                                           p_5 + 128UL)));
    v_21 = (long)((float)(- p_13) - (- v_25 + (float)(98569933LL + (long long)p)));
    v_19 = (double)(((32426316ULL >> (p_13 & 63U)) * (unsigned long long)p_13) * 589930123ULL);
  }
  while_0_break: ;
  if ((unsigned long)v_17 >= 4294955920UL) {
    v = (long long)(~ (- p)) % ((long long)p_5 * 56062LL + 75LL);
    result = v;
  }
  else {
    v_9 = (short)v_17;
    result = (long long)(p_15 / 496.364624023);
    result = (result << 7) / (long long)(p_5 * (unsigned long)v_7 + 844UL) - (long long)(
             (unsigned long)((long)v_9 % (p_11 + 729L)) | (unsigned long)p_13);
  }
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 174673788
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, long p_7[3], float p_11, unsigned int p_13[2],
          unsigned short p_19)
{
  char v_25;
  unsigned int v_23;
  char v_21;
  char v_17;
  long long v_15;
  char v_9;
  unsigned long v_5;
  double v;
  float result;
  v_25 = (char)p_19;
  v_23 = (unsigned int)p_7[1];
  v_17 = (char)92;
  v_15 = -14490LL;
  v_9 = (char)20;
  v_21 = (char)(! (signed char)4);
  if ((! v_15 * (long long)((int)v_17 ^ (int)p_19)) / ((long long)(- (- p_11)) + 475LL) != (long long)(
      ((unsigned int)v_21 | p_13[0] % (v_23 + 292U)) + (unsigned int)v_25)) {
    v = (double)v_9;
    v_5 = (unsigned long)(- (- (- v)));
    result = (float)(((unsigned long long)((int)((short)v) - (int)p) * 18446744073183302497ULL) / (unsigned long long)(
                     ((unsigned long)p / (v_5 + 547UL)) % (unsigned long)(
                     57193L * p_7[0] + 798L) + 671UL));
  }
  else result = (float)((unsigned int)(- p_11) & (p_13[0] % 4294967251U) / (unsigned int)(
                                                 (int)(- p) + 309));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 801614778
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, short p_7, unsigned int p_11)
{
  signed char v_21;
  int v_19;
  unsigned long v_17;
  unsigned short v_15;
  unsigned long long v_13;
  short v_9;
  double v_5;
  double v;
  unsigned long result;
  v_21 = (signed char)p_11;
  v_17 = (unsigned long)p_7;
  v_15 = p;
  v_13 = (unsigned long long)p_7;
  v_9 = (short)p_11;
  v_5 = -2.86646354467e+38;
  v = -190.707396442;
  result = (unsigned long)p_11;
  if (! ((unsigned long)3.35961474659e+38 / 29731UL) - (unsigned long)(! (
      (unsigned int)v - p_11)) <= (unsigned long)(- ((int)v_21 * (int)v_9))) {
    v_9 = (short)((0ULL / (v_13 + 120ULL)) * ((unsigned long long)(! v_15) / (
                                              (v_13 & (unsigned long long)v_17) + 36ULL)));
    v = (double)(- (61351U * ((unsigned int)v % (p_11 + 526U))));
    v_5 = (double)v_9;
  }
  else {
    v_19 = (int)(-195275278LL % (long long)(((unsigned int)((double)p_11 / (
                                                            v_5 + 622.)) - 
                                             41244U % (p_11 + 1008U)) + 9U));
    v_5 = (double)((long long)1.48515712121e+38 * (long long)(~ (v_19 % (
                                                                 (int)v_21 + 236))));
    v = (double)(150UL * (result ^ 60UL) + 4294967214UL);
  }
  result = (unsigned long)(((long)v * -449636944L + (long)9221232713.52) + (long)(
                           (int)(~ p) / (((int)((short)v_5) ^ (int)p_7) + 707)));
  return result;
}



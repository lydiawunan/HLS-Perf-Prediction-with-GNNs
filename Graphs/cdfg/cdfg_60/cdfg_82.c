#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 383677767
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, unsigned char p_4, long long p_6,
                  double p_9, unsigned int p_15)
{
  unsigned int v_19;
  float v_17;
  unsigned char v_13;
  int v_11;
  long long v;
  unsigned long result;
  v_19 = (unsigned int)p_9;
  v_17 = 677952576.f;
  v_13 = (unsigned char)19;
  v_11 = (int)p_4;
  v = 379273559LL;
  result = (unsigned long)p_6;
  if (((unsigned long)((int)v_13 * (int)v_13) % (result * (unsigned long)v_13 + 1014UL)) * (unsigned long)(- (
      (float)v_13 / -3.02067102607e+38f)) >= 4294967295UL) {
    v_11 = (int)(! (v % ((long long)v_17 + 523LL) & (long long)(- p_4)));
    result = - ((unsigned long)p_15 % 3457429067UL);
    v = (long long)((int)p * (4 * (int)v_13)) / (((long long)((unsigned long)p & result) & v) + 152LL);
  }
  else {
    v = (long long)(- v_11) | (48052LL * v - (long long)v_19);
    v_19 = - (~ 3857356664U);
    v_13 = (unsigned char)(((long long)(v_17 + (float)v_19) + v * -20624LL) % (
                           (long long)(- ((double)v_11 - 468.262496579)) + 536LL));
  }
  while (- (- ((long long)p + p_6)) >= (long long)((double)(~ (~ v)) * - p_9)) {
    v_17 = (unsigned long long)v_13 - ((unsigned long long)v_11 ^ 20536ULL);
    v_11 = (int)(- ((double)p_15 + 1.2802446538e+38) - (double)((int)(
                                                                (float)v / (
                                                                v_17 + 28.f)) % (
                                                                ((int)p & (int)p) + 128)));
    result = 22UL;
    v = (long long)(((double)(42882ULL % (unsigned long long)((int)p + 544)) + 
                     (double)result / -5.55652682127e+36) * (double)(- (~ p_15)));
  }
  while_0_break: ;
  return result;
}



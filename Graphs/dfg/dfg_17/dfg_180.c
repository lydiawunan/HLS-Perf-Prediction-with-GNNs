#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 288391711
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p, char p_7, unsigned int p_9, float p_11,
              long p_13[1][1])
{
  unsigned short v_15;
  unsigned short v_5;
  float v;
  long long result;
  v_15 = (unsigned short)p;
  v = (float)p_13[0][0];
  result = (long long)(- ((int)((unsigned short)p_11) / ((int)(- v_15) + 423) + (
                          (int)((unsigned char)v) + 155)));
  v = (float)((unsigned long long)(result - (long long)(! (- p_13[0][0]))) + 
              (((unsigned long long)p_13[0][0] + p) * 7767ULL) % 93ULL);
  v_5 = (unsigned short)(~ (9281ULL * (p * (unsigned long long)p_11)) - (unsigned long long)(! (
                         (long long)p_13[0][0] % 357663938LL - (long long)(
                         (unsigned long)p_9 - 3894928346UL))));
  result = (long long)(((unsigned long long)v | (p / (unsigned long long)(
                                                 (int)v_5 + 618)) / 92ULL) % (
                       (unsigned long long)(- ((int)p_7 + 8)) * ((unsigned long long)p_9 - ! p) + 617ULL));
  return result;
}



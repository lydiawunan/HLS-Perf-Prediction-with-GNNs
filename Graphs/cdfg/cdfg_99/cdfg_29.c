#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 742801381
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p[4][4], unsigned long long p_5, unsigned long p_9[4][4],
         unsigned long long p_11)
{
  int v_15;
  double v_13;
  unsigned char v_7;
  int v;
  long result;
  v_15 = (int)p_11;
  v_13 = 156.541794155;
  if (934050ULL / (p_11 / ((unsigned long long)v_13 + 621ULL) + 471ULL) + 31869ULL > (unsigned long long)v_15) 
    v = (int)p_5;
  else {
    v = ! 6651;
    v_7 = (unsigned char)(! (p_9[2][3] % (unsigned long)(- v + 648)));
    v = (int)v_7 - 12377;
  }
  result = (long)(9749969920. + ((p[3][3] - 47374.) + (double)((unsigned int)v - 407730506U)));
  return result;
}



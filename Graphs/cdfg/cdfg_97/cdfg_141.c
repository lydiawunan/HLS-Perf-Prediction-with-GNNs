#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 218962437
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(int p, unsigned long long p_13, float p_15, float p_17, float p_23)
{
  unsigned long long v_25;
  float v_21;
  double v_19;
  unsigned char v_11;
  unsigned short v_9;
  long long v_7;
  float v_5;
  unsigned long long v;
  float result;
  v_21 = (float)p;
  v_19 = (double)p_13;
  v_9 = (unsigned short)58186;
  v = 275936162ULL;
  result = 426.606628418f;
  v_25 = (unsigned long long)p_15;
  if ((double)p_17 > ((v_19 - (double)v_21) - (double)(- p_23)) * (double)(
                     v_21 * (float)(p_13 % (v_25 + 854ULL)))) {
    v_5 = (float)(unsigned short)46490;
    v_7 = (long long)((unsigned long long)(6223792383.34 * (double)(result / 18621.f)) % (
                      (v / (unsigned long long)((int)v_9 + 721) + (unsigned long long)p) + 728ULL));
    result = (float)((v / (unsigned long long)(p + 65) - (unsigned long long)v_5) * (unsigned long long)v_7);
  }
  else {
    v_11 = (unsigned char)(! (p_13 % ((unsigned long long)p_15 + 457ULL)) % 1ULL);
    result = (float)(~ ((long long)p / 30267LL - (long long)((int)v_11 - 29815)));
  }
  return result;
}



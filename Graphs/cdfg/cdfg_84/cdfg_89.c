#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 296710156
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p, int p_13, double p_17)
{
  long v_19;
  float v_15;
  unsigned long long v_11;
  long v_9;
  unsigned char v_6;
  unsigned long v_4;
  signed char v;
  unsigned char result;
  v_15 = 2270639872.f;
  v_11 = p;
  v_9 = -49395L;
  v_6 = (unsigned char)80;
  v_4 = (unsigned long)p_17;
  v = (signed char)p_17;
  result = (unsigned char)p_13;
  while ((unsigned long long)((int)v_6 >> ((p + (unsigned long long)v_6) & 7ULL)) >= 
         (unsigned long long)v_9 / (18446744073709551533ULL % (~ p + 760ULL) + 380ULL)) {
    v_9 = v_11 * 18446744073584416822ULL;
    v_19 = (long)v_6 * ((long)p_17 / (v_9 + 547L) - (long)((int)v * (int)result));
    v = (signed char)((long)(p_17 - (double)v) % ((long)result % (v_19 + 272L) + 991L) - 30480L);
    v_6 = (unsigned char)(((double)p_13 - -2.00653214304e+38) * (double)(
                          (v_15 - (float)p_13) - 55968.f));
  }
  while_0_break: ;
  result = (unsigned char)((unsigned long)(! v) ^ ~ v_4);
  return result;
}



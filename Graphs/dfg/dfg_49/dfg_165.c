#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 356434785
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p, unsigned char p_9, int p_13[2],
                  unsigned long p_15, unsigned short p_17)
{
  unsigned int v_19;
  unsigned char v_11;
  long long v_7;
  long long v_5;
  unsigned long long v;
  unsigned long result;
  v_19 = (unsigned int)p_13[1];
  v_11 = (unsigned char)250;
  v = (unsigned long long)(! ((unsigned long)p_9 / ((unsigned long)p_13[1] / (
                                                    p_15 + 882UL) + 82UL)) + (unsigned long)(
                           (int)(~ (~ p_17)) << (v_19 & 15U)));
  v_7 = (long long)(! ((unsigned int)p_9 & 3568494573U)) % -666482823LL & - (- (
        36629712LL | (long long)v_11));
  v_5 = v_7;
  result = (unsigned long)((! v / (unsigned long long)((int)(! (~ p)) + 940)) * (unsigned long long)(! v_5));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 502213052
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p, int p_9, unsigned int p_11, char p_13)
{
  long long v_15;
  unsigned long v_7;
  unsigned long long v_5;
  short v;
  long long result;
  v_15 = (long long)p_11;
  v_5 = (unsigned long long)p_11;
  result = (long long)p_13;
  v_7 = (unsigned long)((unsigned long long)(! (- v_15) * (long long)(
                                             4143746267U % (p_11 + 403U))) + (
                        18446744073670981713ULL & ((unsigned long long)(
                                                   (int)p - (int)p_13) - v_5)));
  v_5 = (unsigned long long)(((v_7 - (unsigned long)p_9) & (unsigned long)(
                              p_9 % ((int)9821186048.f + 89))) + 4294967261UL) - 
        (v_5 ^ 3391581757ULL) * (unsigned long long)(((unsigned int)p - p_11) + (unsigned int)(! p_13));
  v = (short)2.05308104953e+38;
  result = (long long)((((18446744073480923416ULL + (unsigned long long)result) * (unsigned long long)(
                         (int)p & (int)v)) * 18446744072739626595ULL) * v_5);
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 922192222
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, unsigned int p_11, unsigned char p_17,
                  signed char p_19)
{
  int v_15;
  unsigned char v_13;
  long long v_9;
  unsigned long v_7;
  unsigned long long v_5;
  unsigned char v;
  unsigned char result;
  v_15 = 43986;
  v_9 = 616985315LL;
  v_5 = 53850ULL;
  v_13 = (unsigned char)((unsigned long long)((long long)(- p_17) % 699075753LL ^ (long long)(
                                              p - (int)(- p_19))) * v_5);
  v_7 = - ((626112469UL / (unsigned long)(v_15 + 541)) * 4077742273UL) % (unsigned long)(
        - (! (p - p)) + 44);
  v = (unsigned char)((unsigned long long)((long long)(58240UL / (27027UL % (
                                                                  v_7 + 1023UL) + 254UL)) + (
                                           ~ v_9 + (long long)p_11)) - (
                      v_5 + (unsigned long long)(! (- v_13))));
  result = (unsigned char)((unsigned long long)(- v) % ((unsigned long long)p % (
                                                        ~ v_5 + 6ULL) + 592ULL));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 802703582
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, signed char p_5, unsigned int p_7[5],
                  long long p_9, unsigned long p_11)
{
  unsigned short v_17;
  unsigned long v_15;
  signed char v_13;
  unsigned short v;
  unsigned long result;
  v_17 = (unsigned short)p_7[4];
  v_15 = (unsigned long)p_5;
  result = 4294915787UL;
  v_13 = (signed char)(! ((result + (unsigned long)p_7[1]) * (p_11 + (unsigned long)1.65653518936e+38) ^ 
                          (v_15 - (unsigned long)v_17) * p_11));
  result = (unsigned long)(- ((((int)v_13 + 40581886) / 223) * (int)(
                              ((float)p_9 + 4892800512.f) - 16086.f)));
  v = (unsigned short)(0. - (((double)(p_7[1] * 4294967239U) - -6.52005107576e+37) - (double)(
                             p_9 / (long long)(p_11 + 380UL) - (long long)(
                             result * 18503UL))));
  result = (unsigned long)(-594671488.f - ((float)(! v) + 382452480.f)) % (
           (unsigned long)5044140544.f * - (p % (unsigned long)((int)p_5 + 546)) + 453UL);
  return result;
}



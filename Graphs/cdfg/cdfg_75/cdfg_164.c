#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 689308556
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, unsigned int p_11, int p_15, unsigned int p_17,
           unsigned int p_19)
{
  signed char v_13;
  long v_9;
  unsigned short v_7;
  long long v_5;
  unsigned short v;
  double result;
  v_9 = -654428551L;
  v_7 = (unsigned short)9709;
  result = 213.305558715;
  v_13 = (signed char)(77UL ^ (unsigned long)v_7 * ((unsigned long)v_9 | (unsigned long)p_19));
  if (((long long)((int)(- result) & -27479 / ((int)((short)4.71571455343e+37) + 718)) | - (
       -258616524LL / (long long)(p + 453U))) <= (long long)((unsigned int)(- v_13) / (
                                                             p_11 + 602U))) {
    v = (unsigned short)(! p);
    result = (double)v * 806.103527478;
  }
  else {
    v_13 = (signed char)((3842208585U / (! p_17 + 602U)) * p_19);
    v_5 = (long long)(p_15 * ~ (14045 >> 3));
    result = (double)((v_5 + (long long)v_7) % (long long)(((unsigned long)v_9 & (unsigned long)p_11) + 641UL) + (long long)(! (
                      2681 % ((int)v_13 + 987))));
  }
  return result;
}



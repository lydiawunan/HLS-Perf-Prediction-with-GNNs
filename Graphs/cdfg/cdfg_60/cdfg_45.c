#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 459721937
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, char p_5, float p_7, char p_9, char p_15)
{
  double v_25;
  long v_23;
  unsigned char v_21;
  long v_19;
  unsigned short v_17;
  unsigned char v_13;
  long v_11;
  int v;
  int result;
  v_25 = (double)p_5;
  v_23 = 55802L;
  v_21 = (unsigned char)203;
  v_19 = (long)p;
  v_17 = (unsigned short)p_15;
  v_13 = (unsigned char)153;
  v_11 = (long)p;
  result = (int)p_7;
  while ((long long)p_9 < (long long)(((int)p_15 % ((int)p_5 + 212)) / (
                                      ((int)p_15 ^ result) + 518)) - 
                          (long long)(3488779498UL / (p + 962UL)) * (
                          -210969109LL ^ (long long)v_21)) {
    v_23 <<= 3;
    v_19 = (long)(- ((long long)(- v_25) + ((long long)result + 46774LL)));
    v_13 = (unsigned char)98;
    v_21 = (unsigned char)(- -535011872.f);
  }
  while_0_break: ;
  if (((unsigned long)p_9 | p) % (unsigned long)((132L + v_11) + 981L) + (unsigned long)(
      (int)v_13 / (((int)p_15 ^ 44) + 153)) != (unsigned long)((unsigned int)(! v_17) + 1U) - (unsigned long)v_19) 
    result = 45049;
  else {
    v = (int)p;
    result = v;
  }
  return result;
}



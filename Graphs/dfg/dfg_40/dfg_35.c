#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 821145339
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, float p_7, long long p_11, unsigned long p_13,
          unsigned long p_15)
{
  signed char v_19;
  unsigned long v_17;
  unsigned long v_9;
  unsigned short v_5;
  int v;
  float result;
  v_19 = (signed char)34;
  v_9 = 4294945761UL;
  v_5 = (unsigned short)p_13;
  v_17 = (unsigned long)((53412LL % (p_11 + 813LL) | (p_11 / 17696LL) * 206LL) % -36LL);
  v_9 = ~ ((v_9 << (p_13 & 31UL)) + (p_15 >> ((int)v_5 & 31))) - ((v_17 / (unsigned long)(
                                                                   (int)p + 367) & (
                                                                   3905373071UL - p_15)) ^ (unsigned long)(
                                                                  (int)(- v_19) - 
                                                                  (int)v_19 / (
                                                                  (int)p + 321)));
  v = (int)(~ (- ((long long)v_9 % (p_11 + 123LL))) / -66LL);
  result = (float)(~ v % ((124 + (-26315 - (int)p)) * (((int)((unsigned short)3.09056096138e+38) * (int)v_5) * (
                                                       (int)((short)p_7) % -29513)) + 835));
  return result;
}



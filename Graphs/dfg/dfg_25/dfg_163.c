#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1038393731
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, unsigned short p_9, signed char p_11, unsigned long p_13,
        long p_15)
{
  unsigned short v_7;
  unsigned int v_4;
  signed char v;
  int result;
  v_7 = (unsigned short)p_11;
  v = (signed char)p;
  v_4 = (unsigned int)(((int)((unsigned short)(- (- p))) - (int)p_9) % 105);
  v = (signed char)(p_13 / (unsigned long)(p_15 * (long)v + 718L));
  result = (int)(4294967194U * (((unsigned int)(-29395 - (int)p_11) & (
                                 (unsigned int)p - 4230649516U)) / ((unsigned int)p + 8U)));
  result = (int)(((unsigned int)((float)(520530606UL >> ((int)v & 31)) / (
                                 ((float)v_4 - p) + 316.f)) - 477931461U % (unsigned int)(
                                                              (int)(- v_7) + 614)) + (
                 (unsigned int)(! (- result)) - ((unsigned int)p_9 % (
                                                 v_4 + 391U)) % 554U));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1017133233
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p, short p_5[2], int p_9, unsigned int p_13)
{
  unsigned long long v_17;
  char v_15;
  unsigned long long v_11;
  unsigned char v_7;
  short v;
  unsigned char result;
  v_7 = (unsigned char)33;
  v = (short)p;
  v_15 = (char)(4294947761UL * (unsigned long)(~ (- p_9)));
  v_17 = 66ULL;
  v_11 = (unsigned long long)(~ (~ (4294928180U >> (v_17 & 31ULL)) % (
                                 (unsigned int)(! p_9) / (p_13 + 222U) + 539U)));
  result = (unsigned char)((unsigned long long)(22351 / (((int)v - (int)v) + 9) >> (
                                                p * (unsigned int)((int)p_5[0] / (
                                                                   (int)v_7 + 765)) & 31U)) % (
                           (((unsigned long long)(- p_9) - v_11) + (unsigned long long)(
                            (long long)(~ p_13) - ((long long)v_15 + 11177510LL))) + 754ULL));
  return result;
}



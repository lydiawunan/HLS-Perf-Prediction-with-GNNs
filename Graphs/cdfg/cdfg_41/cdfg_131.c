#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 940683172
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, unsigned long p_4, float p_6, unsigned long p_13,
         double p_15)
{
  unsigned char v_17;
  char v_11;
  unsigned char v_9;
  unsigned short v;
  long result;
  v_17 = (unsigned char)p_15;
  v_9 = (unsigned char)p;
  result = -32809L;
  v = (unsigned short)((int)((unsigned char)((double)(4294925058U >> (
                                                      p_4 & 31UL)) - 180.277844174)) * (int)v_17);
  while (! result * (long)((p / ((double)p_4 + 558.)) * (double)(- p_6)) != 122L) {
    v = (int)v_9 << ((int)v / 60294 & 7);
    v_11 = (char)p_15;
    v_9 = (unsigned char)p_13;
    result = (long)(~ (~ v_11));
  }
  while_0_break: ;
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 708635702
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p, unsigned long p_5, unsigned long p_9,
                  unsigned short p_11, short p_15)
{
  short v_21;
  long v_19;
  unsigned short v_17;
  unsigned long v_13;
  unsigned long long v_7;
  int v;
  unsigned char result;
  v_21 = (short)p;
  v_19 = (long)p_11;
  v_17 = (unsigned short)p;
  v_13 = 4294913686UL;
  v_7 = 18446744073622897931ULL;
  v = (int)p_9;
  while ((unsigned long long)((unsigned long)((int)p_11 % ((int)p_11 / 93 + 845)) / (
                              v_13 + 494UL)) >= (1864ULL | (unsigned long long)(~ p_15)) / (unsigned long long)(
                                                (int)v_17 + 141)) {
    v_21 = (unsigned long)v_21 + ((unsigned long)v_19 | 149381072UL);
    v_7 = (unsigned long long)p_11;
    v_19 = (long)(0LL / (long long)((int)p_11 + 642));
    v_17 = (unsigned short)(! ((unsigned long long)p_5 * p & 13977ULL));
  }
  while_0_break: ;
  if (- ((unsigned long long)((unsigned long)v + p_5) % (v_7 + 586ULL)) <= (unsigned long long)p_9) 
    result = (unsigned char)103;
  else result = (unsigned char)(-0ULL);
  return result;
}



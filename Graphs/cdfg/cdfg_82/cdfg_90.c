#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 499976629
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, float p_7, unsigned int p_9)
{
  short v_19;
  double v_17;
  unsigned long v_15;
  long long v_13;
  int v_11;
  unsigned int v_4;
  unsigned int v;
  unsigned int result;
  v_19 = (short)23926;
  v_15 = 44073UL;
  v_13 = -18861LL;
  v_11 = (int)p_9;
  v_4 = 4294958911U;
  v = 15933497U;
  while (((unsigned long)((v_4 + (unsigned int)p) * (unsigned int)((int)p << 3UL)) ^ (
          4294950888UL - (unsigned long)((unsigned int)p_7 & v))) != (unsigned long)(~ p_9)) {
    v_17 = v_15 + (unsigned long)((long)v_11 % 25869L);
    v_15 = (unsigned long)(- ((long long)(- p) % ((long long)v_4 % (v_13 + 362LL) + 954LL)));
    v_11 = (int)v_19;
    v = (unsigned int)(v_17 - (double)v_4);
  }
  while_0_break: ;
  result = v;
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 585809363
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, unsigned char p_5, char p_9, signed char p_15,
                 double p_17)
{
  unsigned int v_19;
  short v_13;
  unsigned int v_11;
  signed char v_7;
  unsigned short v;
  unsigned int result;
  v_13 = (short)-9189;
  v_11 = (unsigned int)p_9;
  v_7 = (signed char)56;
  v = (unsigned short)55865;
  while ((unsigned int)((int)v_7 - ~ ((int)p_9 % ((int)v_7 + 142))) >= (
         ! (~ v_11) ^ 789487098U)) {
    v_19 = (long long)v_13 ^ 1035262425LL;
    v_13 = (short)((unsigned int)(! ((int)((unsigned char)p_17) | 215)) & 
                   ~ v_19 * (unsigned int)(! v));
    v = (unsigned short)p_15;
    v_11 = (unsigned int)(~ p_9);
  }
  while_0_break: ;
  result = (unsigned int)(- p / ((float)v + 277.f));
  return result;
}



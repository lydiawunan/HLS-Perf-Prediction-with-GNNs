#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 511523958
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(signed char p, double p_11[1][3][5], unsigned char p_13)
{
  unsigned long v_9;
  float v_7;
  char v_5;
  short v;
  short result;
  v_7 = -938.309875488f;
  v_5 = (char)p_11[0][2][2];
  v = (short)p_11[0][1][1];
  result = (short)21643;
  while ((int)result == ! ((int)p | (int)p) / ((int)v_5 + 111)) {
    v_9 = v_7 * 23966.f;
    v_7 = (float)(- ((int)((unsigned char)(70. - p_11[0][1][4])) ^ (int)p_13));
    v = (short)-8;
    v_5 = (char)((167UL / (v_9 + 549UL)) % 1011UL - (unsigned long)((
                                                                    (int)result + -60407944) + 15507));
  }
  while_0_break: ;
  result = (short)(! (- ((unsigned int)v + 300439019U)));
  return result;
}



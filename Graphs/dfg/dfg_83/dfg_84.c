#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1057514989
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, unsigned int p_4[4][4][1], char p_6[4],
        signed char p_11[2], unsigned long p_17)
{
  unsigned long v_15;
  unsigned short v_13;
  int v_9;
  unsigned int v;
  int result;
  v_15 = 3536166473UL;
  v_13 = (unsigned short)10145;
  v_9 = 12545;
  result = (int)p_6[1];
  v_9 = (int)(~ ((((unsigned long)v_9 / 3587015332UL) / ((v_15 + (unsigned long)p_11[0]) + 563UL)) % (
                 ~ (p_17 * (unsigned long)p_11[1]) + 863UL)));
  v = (unsigned int)((int)v_13 >> (result & 15));
  result = (int)((unsigned long)(- p - (unsigned int)v_9) - ((unsigned long)p_11[0] + 4294913785UL));
  result = (int)((unsigned long long)(- (! p) >> (141U / ((p_4[3][1][0] - (unsigned int)p_6[3]) + 869U) & 31U)) * (
                 (unsigned long long)((int)((char)608.040576248) % ((int)p_6[0] + 791)) * (
                 (unsigned long long)result ^ 18446744073066190265ULL) - (unsigned long long)(
                 - v - (unsigned int)(15 >> (v_9 & 7)))));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 724655659
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p[4][4], unsigned long long p_4[4],
                       short p_7, double p_11[3][3][5], char p_13)
{
  int v_21;
  unsigned short v_19;
  unsigned short v_17;
  float v_15;
  unsigned int v_9;
  float v;
  unsigned long long result;
  v_21 = (int)p_13;
  v_19 = (unsigned short)56066;
  v_17 = (unsigned short)40953;
  v_15 = (float)(((unsigned int)(((int)v_19 / (v_21 + 935)) * (int)(! p_7)) + 
                  58951U / ((unsigned int)(- p_11[2][0][3]) + 934U)) - 3624313616U);
  v = (float)((int)((unsigned short)((double)(! ((int)p_13 + (int)((char)v_15))) - (
                                     (double)(- p_7) - 6643818623.29))) & (int)v_17);
  v_9 = (unsigned int)p_11[0][0][2];
  result = (! ((unsigned long long)p[3][3] | 18446744073121925416ULL) / (
            - (18446744072935135662ULL / (p_4[1] + 802ULL)) + 835ULL)) * (
           (164161367ULL / ((unsigned long long)v + 530ULL) | (2381ULL << (
                                                               (int)p_7 & 63))) % (unsigned long long)(
           - (~ v_9) + 187U));
  return result;
}



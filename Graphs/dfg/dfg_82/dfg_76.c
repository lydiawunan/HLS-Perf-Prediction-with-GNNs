#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 24808640
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(signed char p, unsigned short p_7, int p_15[5][5], short p_21)
{
  unsigned short v_23;
  int v_19;
  unsigned int v_17;
  unsigned int v_13;
  char v_11;
  unsigned long long v_9;
  unsigned short v_5;
  unsigned long long v;
  short result;
  v_23 = (unsigned short)31495;
  v_19 = -86721534;
  v_17 = (unsigned int)p_15[3][2];
  v_13 = 4294952972U;
  v_11 = (char)104;
  v_5 = (unsigned short)28296;
  v_5 = (unsigned short)((v_19 - ((int)(- v_5) - ((int)p_21 >> ((int)p_21 & 15)))) / (
                         (int)v_23 + 153));
  v_9 = (unsigned long long)(~ (-117 ^ ! p_15[0][3]) << (v_17 & 31U));
  v = (unsigned long long)((int)v_5 * (int)(! p_7)) & ((v_9 % 18446744073709551528ULL) / (unsigned long long)(
                                                       (int)v_11 + 6) ^ (unsigned long long)(
                                                       v_13 % (unsigned int)(
                                                       p_15[1][3] / (
                                                       (int)p + 410) + 774)));
  result = (short)(! ((unsigned long long)(~ ((int)p * -66)) * - v));
  return result;
}



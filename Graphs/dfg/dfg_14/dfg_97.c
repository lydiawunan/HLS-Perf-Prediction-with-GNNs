#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 590188135
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, char p_5, unsigned int p_7,
         unsigned long long p_13[1][5][2], signed char p_15)
{
  long v_19;
  unsigned short v_17;
  long long v_11;
  char v_9;
  unsigned int v;
  char result;
  v_19 = 308818432L;
  v_17 = (unsigned short)p_5;
  v_9 = p_5;
  v_11 = (long long)((p_13[0][1][0] | (unsigned long long)(~ p_15)) / (unsigned long long)(
                     ! ((unsigned long)v_17 - 4166358037UL) + 668UL) & 
                     (unsigned long long)((47644LL / (long long)((int)p_5 + 106)) % (long long)(
                                          (unsigned long)p_7 * (unsigned long)v_19 + 420UL)) * (
                     ((unsigned long long)p_7 / (p_13[0][0][1] + 3ULL)) % (unsigned long long)(
                     (int)(! v_9) + 746)));
  v_9 = (char)0;
  v = (unsigned int)(- ((long long)p_7 - ((long long)(15298L + (long)v_9) - -820474027LL)));
  result = (char)(((float)v + - p) * (float)p_5);
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 2311962
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, float p_9, char p_13)
{
  unsigned short v_11;
  unsigned short v_7;
  unsigned long long v_5;
  short v;
  char result;
  v_7 = (unsigned short)25523;
  result = (char)p;
  v_11 = (unsigned short)(62454ULL + (unsigned long long)result / ((unsigned long long)(
                                                                   (int)v_7 % 47) / 39684420ULL + 6ULL));
  v_5 = (unsigned long long)(((int)v_7 + (int)((unsigned short)p_9)) | (
                             (int)v_11 + (int)p_13));
  v = (short)(18446744073709549523ULL / (- v_5 * (unsigned long long)v_7 + 482ULL));
  result = (char)(530149740LL % (long long)(! ((unsigned int)(~ v) % (
                                               p + 379U)) + 325U));
  return result;
}



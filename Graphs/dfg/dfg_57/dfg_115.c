#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1002506690
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, unsigned long long p_7[2][3], char p_9, float p_11)
{
  short v_4;
  unsigned short v;
  long result;
  v_4 = (short)72;
  v = (unsigned short)23488;
  result = (long)((unsigned long long)((unsigned long)(! ((int)v / ((int)v_4 + 111))) % (
                                       (unsigned long)(! p) * 94970UL + 416UL)) * (
                  p_7[0][1] % (unsigned long long)((4294910675U % (unsigned int)(
                                                    (int)p_9 + 174) - (unsigned int)(- p_11)) + 724U)));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 198353867
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p[5][4][4], char p_7, unsigned short p_9,
              unsigned char p_11)
{
  int v_4;
  signed char v;
  long long result;
  v = (signed char)-78;
  result = (long long)p_9;
  v = (signed char)((unsigned long)p[0][3][0] % ((((unsigned long)p_9 / 3685309747UL + 713621185UL) + (unsigned long)(
                                                  (int)(- p_11) - (int)v)) + 346UL));
  v_4 = (int)(! ((unsigned long)((p[1][2][0] - (unsigned int)p_7) & (
                                 p[1][2][1] << (p[2][2][3] & 31U)))));
  result = result;
  result = ~ ((long long)(! ((int)v * 63185)) ^ result % (long long)(
                                                v_4 + 725));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 901574309
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, float p_7, unsigned short p_9[2][5][2])
{
  long long v_11;
  short v_4;
  float v;
  long result;
  v_11 = -58803LL;
  v_4 = (short)p_9[1][0][1];
  result = -54287L;
  v = (float)0;
  if ((float)((unsigned long)(127 | (int)((char)7602036674.73) * 84) / (
              (4294967061UL + 49730UL % ((unsigned long)p_7 + 102UL)) + 965UL)) > 
      (float)((long)p / ((23L + result) + 681L)) / (p_7 + 658.f)) {
    v_4 = (short)(v - (float)(! ((int)v_4 + -44)));
    v = (float)0;
    result = (long)(- v);
  }
  else result = (long)(! p);
  return result;
}



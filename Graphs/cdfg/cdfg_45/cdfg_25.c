#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 181214818
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, unsigned char p_7, unsigned long p_9,
                   signed char p_15)
{
  char v_19;
  unsigned short v_17;
  int v_13;
  float v_11;
  float v_4;
  unsigned short v;
  unsigned short result;
  v_19 = (char)-93;
  v_13 = p;
  if ((int)v_19 > (int)v_19) {
    v_11 = (float)p_7;
    v = (unsigned short)((unsigned long)(7081.f * - v_11) + ((unsigned long)(- v_13) ^ p_9));
    v_4 = (float)((unsigned long)(-204025176L - (long)(p + 12)) - (4294937016UL + 
                                                                   (unsigned long)p_7 / (
                                                                   p_9 + 934UL)));
  }
  else {
    v_17 = (unsigned short)((unsigned long)p - 0UL % (- p_9 + 988UL));
    v_4 = (float)(! ((int)p_15 - (int)v_17));
    v = (unsigned short)32743;
  }
  result = (unsigned short)((float)(96 - (int)v / 194) + - v_4);
  return result;
}



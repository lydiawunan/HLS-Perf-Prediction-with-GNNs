#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 502916105
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(signed char p, unsigned int p_5[1], float p_7[3][1],
          float p_11[5][4], unsigned char p_13)
{
  short v_15;
  unsigned char v_9;
  signed char v;
  short result;
  v_15 = (short)p_11[0][0];
  v_9 = (unsigned char)p_5[0];
  if (((int)((unsigned char)((float)v_9 + p_11[0][2])) - (int)p_13) - (
      (int)v_15 + 15859) >= (int)(! p) / ((int)p_13 + 840)) {
    v = p;
    result = (short)v;
  }
  else result = (short)(((4294967232U + p_5[0]) - (unsigned int)(- p_7[1][0])) - - (~ p_5[0]));
  return result;
}



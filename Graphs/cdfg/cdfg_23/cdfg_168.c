#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 958167393
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p[2][3][3], int p_7[3], unsigned int p_11, float p_15)
{
  unsigned char v_13;
  unsigned short v_9;
  char v_4;
  unsigned short v;
  unsigned char result;
  v_13 = (unsigned char)p_11;
  v_4 = (char)p[1][0][0];
  v = (unsigned short)p_11;
  if (p_11 * (unsigned int)v_13 < (unsigned int)(((129.897476196f + p_15) + (float)(- p_11)) + p[1][2][0])) {
    result = (unsigned char)((4963359 / (- p_7[0] + 233)) * (int)v);
    v = (unsigned short)(- ((float)(! result) - p[1][2][2]));
    result = (unsigned char)(- v_4);
  }
  else {
    v_9 = (unsigned short)(211201069 / ((int)1.50203463267e+38f + 68));
    result = (unsigned char)(~ (78U * ((unsigned int)v_9 - 48578U)));
    v = (unsigned short)(~ (! (- p_7[1])));
  }
  result = (unsigned char)((int)v + (int)result / ((int)v + 503));
  return result;
}



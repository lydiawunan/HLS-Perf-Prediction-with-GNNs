#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 422320720
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(signed char p, double p_7, float p_17[5])
{
  int v_15;
  unsigned long long v_13;
  float v_11;
  short v_9;
  char v_5;
  unsigned short v;
  short result;
  v_15 = (int)p_7;
  v_13 = (unsigned long long)p_17[1];
  v_11 = 4.84701114568e+37f;
  v_9 = (short)-5656;
  v = (unsigned short)48424;
  result = (short)-19558;
  v_5 = (char)(- ((int)((unsigned short)p_17[0]) / ((int)v + 527)) - ~ (
               (int)result / ((int)((short)p_7) + 143)));
  if ((float)(6152ULL - ((unsigned long long)((int)p - (int)((signed char)p_17[2])) + v_13)) > v_11) {
    v = (unsigned short)(~ 561456736ULL);
    v_5 = (char)((int)p + (int)((signed char)(- p_7 + (double)(- v_5))));
    result = (short)(! (29 + (int)p) ^ (int)(- v) * ((int)p % ((int)v_5 + 895)));
  }
  else {
    v_15 = v_15;
    v_11 = (float)(~ ((v_13 >> 41) / (unsigned long long)(v_15 + 483)));
    result = (short)(- (~ ((int)v_9 + (int)((short)v_11))));
  }
  return result;
}



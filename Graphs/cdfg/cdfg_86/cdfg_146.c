#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 247958050
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p, unsigned long p_5, unsigned long p_9[5][5][2])
{
  int v_13;
  unsigned char v_11;
  float v_7;
  int v;
  float result;
  v_13 = 6683;
  v_11 = (unsigned char)p_9[3][3][0];
  v = 740348279;
  v_13 = (int)((unsigned int)(! (33 + v_13)) - 57630U);
  if (! (-494134308L >> (v & 31)) < 64L) {
    v = (int)(- p);
    result = (float)(~ (! (11938 - v)));
  }
  else {
    v_7 = (float)(! ((int)v_11 / ((int)v_11 + 116)) % (- (~ v_13) + 660));
    v_7 = v_7;
    result = (float)(! (p_5 * 115UL)) - ((float)p_5 + v_7) * (float)(
                                        p_9[2][4][1] * 23718UL);
  }
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 849043693
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p, unsigned char p_9[2][2][2], unsigned short p_15,
                   short p_17[4][1], int p_21)
{
  unsigned long long v_25;
  short v_23;
  unsigned int v_19;
  long v_13;
  int v_11;
  unsigned int v_6;
  unsigned char v_4;
  long v;
  unsigned short result;
  v_25 = (unsigned long long)p;
  v_19 = 4294966782U;
  v_13 = -651169811L;
  v_11 = (int)p_9[0][0][0];
  v_6 = (unsigned int)p_21;
  v = 790269116L;
  if ((unsigned long long)v_6 < ((unsigned long long)p_15 % (v_25 + 295ULL) - (unsigned long long)(
                                 v_19 & (unsigned int)p)) / (unsigned long long)(
                                v_6 + 629U)) {
    v = (long)(v_19 + (unsigned int)(~ (p_21 / ((int)p_9[1][1][0] + 273))));
    v_4 = (unsigned char)((long)v_11 * (- v_13 - (long)((int)p_15 / (
                                                        (int)p_17[3][0] + 628))));
    v_6 = (unsigned int)(~ (60720 % ((int)((unsigned short)(p / ((double)p_9[0][1][1] + 756.))) + 420)));
  }
  else {
    v_23 = (short)p;
    v_4 = (unsigned char)((unsigned int)p_9[0][0][1] + (v_6 + (unsigned int)p_17[1][0]));
    v_6 = (unsigned int)((long)(~ (~ v_23)) + ! ((long)p_17[3][0] + 25212L));
  }
  result = (unsigned short)((unsigned long)((70L - v) + (long)(- v_4)) + (unsigned long)(~ v_6));
  return result;
}



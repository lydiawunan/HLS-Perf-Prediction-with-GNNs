#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 460456911
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p[4][4], unsigned char p_7)
{
  int v_11;
  unsigned short v_9;
  unsigned long v_5;
  char v;
  short result;
  v_11 = 26140;
  v = (char)43;
  result = (short)p_7;
  v_9 = (unsigned short)v;
  v_5 = (unsigned long)(~ (~ (char)82));
  v = (char)((((unsigned long)(61670 % ((int)result + 623)) - (unsigned long)v / 41043UL) | v_5) + (unsigned long)(- (
             (int)(! p_7) % (((int)v_9 + v_11) + 841))));
  result = (short)((int)v / ((int)p[0][0] + 312));
  return result;
}



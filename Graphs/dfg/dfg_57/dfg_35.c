#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 687192460
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p[2][1][4], unsigned short p_11[3])
{
  unsigned long v_9;
  char v_6;
  unsigned char v_4;
  unsigned short v;
  int result;
  v_6 = (char)-7;
  v_4 = (unsigned char)244;
  v = (unsigned short)24280;
  v_9 = (unsigned long)((((int)v / ((int)v + 836)) % ((int)p[1][0][1] + 380)) / (
                        ((-13398 ^ (int)p_11[1]) ^ (int)v_4) + 801) + (int)v_4);
  result = (int)(~ ((unsigned long)(((int)v_4 - 14) % ((int)v_6 + 712)) - (
                    (unsigned long)(! p[1][0][3]) - ! v_9)));
  v = (unsigned short)result;
  result = (int)v;
  return result;
}



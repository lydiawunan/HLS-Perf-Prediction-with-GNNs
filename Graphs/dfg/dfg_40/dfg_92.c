#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 148318844
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p[4][4][2], signed char p_5[4][1][2],
        unsigned short p_9)
{
  unsigned short v_13;
  signed char v_11;
  short v_7;
  short v;
  int result;
  v_13 = (unsigned short)p_5[1][0][0];
  v_7 = (short)(~ ((- p[0][1][0] * (unsigned long long)((int)p_5[3][0][0] - 16719)) % (unsigned long long)(
                   (int)v_13 + 731)));
  v_11 = (signed char)-46;
  v = (short)((- ((int)((short)2810066793.59) % ((int)v_7 + 892)) % (
               (int)p_9 + 294)) / (- (-684872474 ^ (int)v_11) + 637));
  result = (int)(p[0][1][1] + (unsigned long long)(~ (~ ((int)v % ((int)p_5[0][0][1] + 566)))));
  return result;
}



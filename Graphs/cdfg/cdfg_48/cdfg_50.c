#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 250106494
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, int p_7, unsigned long p_11[5][5], short p_13,
                  signed char p_15[4][2])
{
  long v_9;
  float v_5;
  unsigned char v;
  unsigned char result;
  v_9 = -17824L;
  v_5 = -2.59744731478e+38f;
  v = (unsigned char)p;
  while ((int)(- (814322176.f / (v_5 + 766.f))) / (p_7 + 850) != - p_7) {
    v = v_9 | 14764L;
    v_9 = (long)(~ ((int)p_13 * 20 - (int)p_15[0][1]));
    v_5 = (float)6629580UL;
    v_5 = (float)((((unsigned long)p_7 + p_11[2][1]) - ((unsigned long)v_5 ^ p_11[4][3])) % (unsigned long)(
                  - p_7 + 788));
  }
  while_0_break: ;
  result = (unsigned char)(((int)v + (int)(~ p)) & (int)(- (~ v)));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 379351508
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, char p_5[1][1], long long p_13)
{
  unsigned long long v_11;
  float v_9;
  unsigned char v_7;
  char v;
  long result;
  v_9 = (float)p_5[0][0];
  v = (char)-61;
  result = -784506408L;
  v = (char)(((long long)((int)p / 551862603) - (-48462LL ^ p_13)) - (long long)v);
  while (! (33700UL >> (-98 % ((int)v + 201) & 31)) <= (unsigned long)(
         ((int)p / ((int)(- p_5[0][0]) + 330)) / 418)) {
    v_7 = (int)((char)v_9) | -11;
    v_11 = (unsigned long long)(~ p_5[0][0]);
    v_9 = (float)(~ v_11 - (unsigned long long)(! v_7));
    v = (char)(! (~ (unsigned short)37145));
  }
  while_0_break: ;
  return result;
}



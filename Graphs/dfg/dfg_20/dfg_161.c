#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 853306072
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p[1][1], unsigned short p_9)
{
  signed char v_11;
  short v_6;
  unsigned int v_4;
  float v;
  signed char result;
  v_11 = (signed char)-48;
  v_6 = (short)-17026;
  v_4 = (unsigned int)(- 3443726080.f);
  v = (float)v_6;
  v = (float)(((int)p[0][0] + ((int)((unsigned short)v) & (int)p_9)) / 409499538 & (int)v_11);
  result = (signed char)(v / ((float)(((unsigned long)((unsigned int)2.82074535573e+38 - v_4) | 4042863060UL) % (unsigned long)(
                                      (int)(- (- v_6)) + 998)) + 813.f));
  return result;
}



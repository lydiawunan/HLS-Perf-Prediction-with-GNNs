#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1036678612
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, double p_5[3][1][4], unsigned long p_9)
{
  unsigned short v_15;
  short v_13;
  unsigned char v_11;
  signed char v_7;
  float v;
  unsigned char result;
  v_15 = (unsigned short)p_5[2][0][1];
  v_13 = (short)p_9;
  v_11 = (unsigned char)((int)v_13 - (int)(- (- v_15)));
  v_7 = (signed char)(4294967199UL + ~ ((unsigned long)v_11 - 111960353UL));
  v = (float)((long long)((unsigned long)(~ (~ v_7)) % (p_9 + 904UL)) - (
              -28704LL + (long long)p_9));
  result = (unsigned char)((double)(- v) / (1.84467440737e+19 / ((((double)p + p_5[2][0][0]) - p_5[1][0][3]) + 257.) + 805.));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 353718897
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, unsigned long p_9, long long p_11,
                  float p_13[3][4][3], unsigned int p_19)
{
  long long v_23;
  unsigned char v_21;
  short v_17;
  unsigned short v_15;
  int v_7;
  long v_5;
  unsigned short v;
  unsigned char result;
  v_23 = (long long)p_9;
  v_17 = (short)p_13[2][3][0];
  v_7 = 700545848;
  v = (unsigned short)p_9;
  result = (unsigned char)p_19;
  v_21 = (unsigned char)((long long)(2 - v_7) * v_23);
  if ((long long)(- (v_7 * (int)p_13[2][0][2])) > (long long)((unsigned long)v_17 % 223123964UL)) {
    v_7 = (int)(p_9 ^ (unsigned long)p);
    v_5 = (long)v_7;
    result = (unsigned char)((long)p - ((long)(5 % ((int)v + 788)) ^ - v_5));
  }
  else {
    v_17 = (short)(p_19 - (p_19 - (unsigned int)(~ v_21)));
    v_15 = (unsigned short)(-8429 / (((int)v_17 + (int)((short)-3.00774707467e+38f)) + 389));
    result = (unsigned char)((-868LL - p_11) ^ (long long)((int)((unsigned short)(
                                                           p_13[0][1][2] * (float)result)) * (int)v_15));
  }
  return result;
}



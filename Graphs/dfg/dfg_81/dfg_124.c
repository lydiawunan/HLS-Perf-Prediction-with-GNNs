#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 901219314
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p[5], long p_13[2][2][1])
{
  short v_10;
  unsigned short v_8;
  unsigned long v_6;
  long long v_4;
  unsigned short v;
  unsigned char result;
  v_10 = (short)p_13[1][0][0];
  v_6 = (unsigned long)p[2];
  v_8 = (unsigned short)((unsigned long)((4103727045U & (unsigned int)(! v_10)) * (unsigned int)p[1]) * (unsigned long)p_13[1][0][0]);
  v_4 = (long long)(- v_8);
  v = (unsigned short)(v_4 + (long long)(! v_6));
  result = (unsigned char)v;
  return result;
}



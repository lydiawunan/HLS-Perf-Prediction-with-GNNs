#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 524714446
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, double p_13[4][3][4], unsigned short p_15,
                unsigned long p_19[4][1][5], unsigned short p_21)
{
  unsigned short v_23;
  unsigned int v_17;
  short v_11;
  short v_9;
  unsigned long v_7;
  char v_5;
  long v;
  signed char result;
  v_23 = (unsigned short)480;
  v_17 = 4294922846U;
  v_11 = (short)-21329;
  v_9 = (short)-13450;
  v_7 = 3476391671UL;
  if ((long long)((unsigned long)(- p_13[2][2][2]) - - ((unsigned long)v_17 + p_19[0][0][2])) != 
      -17LL * (p - (long long)((int)p_21 - (int)v_23))) {
    v_5 = (char)v_11;
    v = (long)(~ ((v_7 + (unsigned long)v_9) - (unsigned long)(~ v_5)));
    v = v;
  }
  else {
    v = (long)(47532 & ((int)p_15 * (int)((unsigned short)-882.873906664) & (int)p_15));
    v_11 = (short)(! (~ (! 178749667UL)));
    v_5 = (char)(- ((long long)p_13[2][0][3] * -869668509LL) % (long long)(
                 (int)(- v_11) + 453));
  }
  result = (signed char)(1290LL + (p & (long long)(v * (long)v_5)));
  return result;
}



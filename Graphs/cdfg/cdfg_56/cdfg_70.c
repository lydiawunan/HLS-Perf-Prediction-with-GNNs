#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 928913248
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p, long p_9, unsigned long p_11, unsigned long p_15)
{
  signed char v_17;
  unsigned char v_13;
  unsigned char v_7;
  unsigned long long v_5;
  long long v;
  double result;
  v_17 = (signed char)-100;
  v_13 = (unsigned char)137;
  v_7 = (unsigned char)p;
  v_5 = (unsigned long long)p;
  v = (long long)p_11;
  result = -371.227523894;
  while (p != (float)(~ v_7)) {
    result = (unsigned long)v_13 % 4294927825UL;
    v_5 = (unsigned long long)(! ((p_11 / 4294947141UL) / (~ p_11 + 146UL)));
    v_13 = (unsigned char)(~ ((int)((signed char)result) % ((int)v_17 + 768)));
    v_7 = (unsigned char)((- p_15 - (unsigned long)p) + 146UL * ((unsigned long)result % (
                                                                 p_11 + 417UL)));
  }
  while_0_break: ;
  while (- (((double)p + result) / 572.) < (double)(-49 & (int)((char)-1.55604678917e+38))) {
    v = (unsigned long long)v_7 - (v_5 - (unsigned long long)(v / 96LL));
    v_5 = (unsigned long long)((unsigned long)(~ (p_9 / 95L)) - ~ (801UL / (
                                                                   p_11 + 195UL)));
    v_7 = (unsigned char)10.859241903;
    result = (double)p;
  }
  while_0_break_0: ;
  return result;
}



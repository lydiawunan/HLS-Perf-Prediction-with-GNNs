#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 220157993
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, unsigned short p_5, signed char p_7,
                  long p_9, unsigned char p_11)
{
  unsigned long v_15;
  signed char v_13;
  long long v;
  unsigned char result;
  v_15 = 926985175UL;
  v = 951738945LL;
  result = (unsigned char)224;
  v_13 = (signed char)p;
  v = ((long long)((int)(! v_13) >> ((int)((signed char)((float)v_15 + 720234368.f)) & 7)) * ~ (
       (long long)v_13 + v)) % (long long)((int)(! (- (- p_5))) + 370);
  result = (unsigned char)((-7648LL | - ((long long)result % (v + 453LL))) % (long long)(
                           ((int)((double)(p_9 & (long)result) - -1.75322619501e+38) - (
                            (int)p_11 / 15558 - (int)p_5)) + 398));
  result = (unsigned char)(~ (((long long)result + v) + (long long)p) ^ (long long)(! (
                           710368309 * ((int)p_5 - (int)p_7))));
  return result;
}



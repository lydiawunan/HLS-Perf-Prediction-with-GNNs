#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 332166485
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, double p_11)
{
  short v_19;
  float v_17;
  long v_15;
  signed char v_13;
  float v_9;
  char v_7;
  unsigned short v_5;
  long long v;
  long result;
  v_19 = (short)30692;
  v_17 = (float)p_11;
  v_15 = (long)p_11;
  v_13 = (signed char)126;
  v_9 = (float)p;
  v_5 = (unsigned short)24350;
  v = (long long)p_11;
  while ((unsigned int)((int)(! p) + (int)((short)v_17)) >= (4138353989U ^ (unsigned int)(
                                                             (int)((unsigned short)p_11) * 35001))) {
    v_5 = (double)v_19 - 4849987975.82;
    v_13 = (signed char)(- (1060802839UL / (((unsigned long)p + 374102461UL) + 331UL)));
    v_19 = (short)(! ((49280 - (int)v_5) + (int)p));
    v_17 = (float)(p_11 + (double)(v_17 * - v_17));
  }
  while_0_break: ;
  if ((unsigned long)(~ (! ((int)v_5 + (int)((unsigned short)v_9)))) != 
      (unsigned long)((int)((signed char)p_11) + (int)v_13) * ((unsigned long)p % 4138266898UL) - (unsigned long)v_15) 
    result = (long)(38902 - (int)(! (- p)));
  else {
    v_7 = (char)((double)(- (- v_9)) - (double)v_9 * p_11);
    v_5 = (unsigned short)v_7;
    result = (long)((7797LL - (v & (long long)v_5)) % (long long)((int)(- v_7) + 442));
  }
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 575055066
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, unsigned short p_5, unsigned short p_7,
                  long p_13)
{
  unsigned int v_19;
  unsigned long v_17;
  signed char v_15;
  unsigned char v_11;
  int v_9;
  unsigned char v;
  unsigned long result;
  v_19 = (unsigned int)p_5;
  v_17 = 59820UL;
  v_15 = (signed char)p_13;
  v_11 = (unsigned char)238;
  v_9 = 538931613;
  result = (((unsigned long)(! p_13) ^ 553976821UL) + (unsigned long)(
            604337262L * (long)p_7 << 5LL)) % (((unsigned long)(v_9 | (int)v_15) * (
                                                793926334UL - v_17)) * (unsigned long)(! (~ v_19)) + 1015UL);
  result = ((unsigned long)v_9 + - result) % (unsigned long)((int)v_11 + 22);
  v = (unsigned char)(! ((int)(! p) * ((int)p / ((int)p_5 + 365))) + 
                      (int)p_7 % ((int)(! p) + 844));
  result = - (~ (~ result % (unsigned long)((int)v % 152692667 + 190)));
  return result;
}



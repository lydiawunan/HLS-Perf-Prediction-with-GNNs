#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 348008846
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p[4][5], unsigned long p_4, short p_13)
{
  unsigned short v_11;
  double v_9;
  long v_7;
  signed char v;
  unsigned char result;
  v_11 = (unsigned short)30313;
  v_9 = (double)p_4;
  v_7 = 26539L;
  v = (signed char)(! (- (~ (- v_7))));
  v_7 = (long)p_13;
  result = (unsigned char)(! (- p_13));
  result = (unsigned char)((unsigned long)(((12611L + (long)p[0][4]) - (long)(~ result)) % 208L) + 
                           ((p_4 - (unsigned long)v) + (unsigned long)(
                            v_7 - (long)v_9)) % (unsigned long)((int)(! (! v_11)) + 585));
  return result;
}



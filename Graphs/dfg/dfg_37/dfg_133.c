#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 369358313
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(signed char p, short p_5, long p_9, float p_11)
{
  unsigned char v_15;
  signed char v_13;
  unsigned short v_7;
  unsigned char v;
  short result;
  v_15 = (unsigned char)98;
  v = (unsigned char)p_11;
  result = (short)31088;
  v_7 = (unsigned short)65448;
  v_13 = (signed char)(~ ((unsigned long)(! (28919 % ((int)p + 230))) / 4294927694UL));
  v_13 = (signed char)((int)(~ (! (! p_5))) + (((int)v_13 % ((int)p_5 + 203)) / (
                                               (int)v + 317)) % (- ((int)v_13 + (int)v_7) + 390));
  result = (short)((long)(((int)p ^ (int)v) / (((int)p_5 + (int)p_5) + 740)) % (
                   ((long)v_7 / (p_9 + 741L) + (long)result) + 357L) + (long)(- (
                   (int)(- p_11) / (((int)v_13 + (int)v_15) + 812))));
  return result;
}



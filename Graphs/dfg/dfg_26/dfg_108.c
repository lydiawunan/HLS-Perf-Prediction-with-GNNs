#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 483597968
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, float p_5[3], char p_9[1], int p_11, unsigned int p_13)
{
  signed char v_19;
  unsigned short v_17;
  unsigned char v_15;
  long v_7;
  short v;
  float result;
  v_19 = (signed char)p_13;
  v_17 = (unsigned short)p_5[2];
  v_15 = (unsigned char)p_13;
  v = (short)(! (((15678 + (int)v_15) + p_11) + (int)(- v_17) / ((int)(- v_19) + 481)));
  v_7 = (long)(! (255 * (int)((unsigned char)436.404281442)));
  result = (float)((unsigned long)((v_7 * (long)(-61956 % ((int)p_9[0] + 837))) * (long)(- (~ p_11))) * (unsigned long)p_13);
  result = (float)(((int)p & (int)(~ (! v))) ^ ~ ((int)p % ((int)((short)(
                                                            result - p_5[2])) + 191)));
  return result;
}



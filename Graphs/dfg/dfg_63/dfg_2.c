#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 211303276
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, double p_4, unsigned short p_6)
{
  float v_11;
  long v_9;
  long v;
  unsigned char result;
  v_11 = (float)p;
  v_9 = -558659867L;
  result = (unsigned char)p_6;
  v = (long)v_11;
  v = (long)(- (~ ((int)((double)v / 1.38040177517e+38) + 58464)));
  result = (unsigned char)((long)((int)(- (! p_6))) - ((long)(127 & (int)result) + 
                                                       v / -926526977L) % (
                                                      v_9 + 65L));
  result = (unsigned char)((double)((~ p ^ ((int)((unsigned char)903.81262207f) + (int)result)) | p) + p_4);
  return result;
}



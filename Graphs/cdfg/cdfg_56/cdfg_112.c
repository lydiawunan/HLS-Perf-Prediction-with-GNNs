#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 325598501
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, long long p_7, long p_17)
{
  char v_15;
  float v_13;
  unsigned long v_11;
  long long v_9;
  unsigned char v_4;
  short v;
  long result;
  v_15 = (char)p;
  v_13 = (float)p_17;
  v_11 = (unsigned long)p;
  v_9 = -36216LL;
  v_4 = (unsigned char)203;
  v = (short)p_7;
  result = p_17;
  while ((long long)(- ((v_13 - 4294922240.f) + (float)v_4)) <= ~ ((long long)p % (
                                                                   p_7 + 384LL)) - 20LL) {
    v_11 = (long long)v_15 * 43983LL;
    v = (short)(- v_13 * (float)(- p_17 - (long)p));
    v_13 = (float)(- (! v_9 * (p_7 / (p_7 + 568LL))));
    v_4 = (unsigned char)(result / (long)((int)(- v) + 545));
  }
  while_0_break: ;
  if (p_7 != - (((long long)v | p_7) / 4294933294LL)) {
    v_4 = (unsigned char)(v_9 << (~ (v_11 * 4294965804UL) & 63UL));
    v = (short)((long long)v_4 * ((long long)(! p) ^ ! p_7));
    result = (long)v;
  }
  else result = (long)(! (~ (~ (unsigned char)237)));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 810771081
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p, float p_4, long p_6, short p_9, long p_11[1][3])
{
  long v_25;
  unsigned char v_23;
  char v_21;
  unsigned short v_19;
  char v_17;
  char v_15;
  unsigned int v_13;
  unsigned char v;
  unsigned int result;
  v_25 = p_6;
  v_23 = (unsigned char)p_11[0][1];
  v_21 = (char)p_4;
  v_19 = (unsigned short)33433;
  v_17 = (char)88;
  v_15 = (char)p_9;
  result = (unsigned int)p_9;
  if (0L != (v_25 + (long)v_17) % 11405L) {
    v_13 = 4294967170U;
    v = (unsigned char)(- (829U / (result % 4294967178U + 915U)));
    v = (unsigned char)((double)p_9 / ((double)p_11[0][0] / -3.3563114132e+38 + 920.) - (double)(~ (
                        v_13 * (unsigned int)v)));
  }
  else {
    v_17 = (char)((unsigned long)(- ((double)p_9 + 347.486710191)) / 3384560725UL);
    v = (unsigned char)(((long long)(p_6 - (long)v_17) - p) * (long long)p_11[0][2]);
  }
  result = (unsigned int)((- p * (long long)(p_4 / ((float)p_6 + 643.f))) / (long long)(
                          ((int)((unsigned char)((float)p_6 - -589.35723877f)) - (int)v) + 607));
  return result;
}



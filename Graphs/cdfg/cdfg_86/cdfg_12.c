#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 494712610
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, short p_4, long p_6[1], unsigned long p_11, double p_19)
{
  unsigned long long v_25;
  unsigned long v_23;
  unsigned long v_21;
  long long v_17;
  long v_15;
  long long v_13;
  signed char v_9;
  unsigned short v;
  long long result;
  v_23 = 4294926147UL;
  v_21 = 63139UL;
  v_15 = (long)p;
  v_13 = (long long)p;
  v = (unsigned short)27836;
  result = (long long)p_6[0];
  if (- (! (~ v_13)) > result) {
    v_13 = (long long)((int)p_4 * (int)((short)p_19));
    v_17 = (long long)(~ (((unsigned long)p_4 * v_23) % 4294921538UL));
    v_15 = ~ (- (p_6[0] - 726439424L));
  }
  else {
    v_25 = (unsigned long long)(((long long)v + ((long long)p_4 - v_13)) % (long long)(
                                p_6[0] + 33L));
    v_17 = (long long)((unsigned long long)((v_13 >> ((long long)p_19 & 63LL)) % (long long)(
                                            (int)p + 6)) - (v_25 - (unsigned long long)v_15) / 18446744073709545577ULL);
    v_13 = (long long)(- (- (! p_11)));
  }
  if (~ ((v_13 - (long long)v_15) + v_17 % ((long long)p_19 + 134LL)) <= (long long)(! v_21)) 
    result = (long long)(- (~ p));
  else {
    v_9 = (signed char)(2230UL - p_11);
    v = (unsigned short)(21634 + - (-6 | (int)v_9));
    result = (long long)(- ((long)p_4 * p_6[0]) - (long)(~ (51 / ((int)v + 372))));
  }
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 62776083
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p, short p_7[1][3], unsigned short p_9,
                unsigned long p_13, char p_15)
{
  unsigned long long v_25;
  long v_23;
  long long v_21;
  unsigned char v_19;
  int v_17;
  long v_11;
  long long v_5;
  int v;
  signed char result;
  v_25 = (unsigned long long)p_9;
  v_21 = (long long)p;
  v_19 = (unsigned char)p_9;
  v_11 = -90175104L;
  result = (signed char)p_15;
  if ((int)v_19 > (int)p_7[0][0]) {
    v_17 = (int)v_19;
    v_5 = (long long)v_19;
    result = (signed char)(- (~ ((long long)p_15 + v_5)));
  }
  else {
    v_23 = (long)(- (929281499ULL ^ - v_25));
    v_17 = (int)(- (v_21 - 27703LL) - (long long)(~ ((unsigned long)v_23 - p_13)));
    v_11 = (long)(18445LL / (long long)(((int)p_15 & ((int)((char)-1.50319774097e+38) ^ (int)p)) + 50));
  }
  if (~ (! ((int)result | (int)p_7[0][1])) == ! (((int)p_15 / ((int)p_9 + 171)) * (
                                                 301866128 / (v_17 + 790)))) {
    v_5 = (long long)v_11;
    v = (int)(- (1561967472.27 - (double)p_9));
    result = (signed char)(((long long)((int)p >> (v & 7)) + - v_5) % (long long)(
                           ((int)p_7[0][0] - ((int)p_9 << 4)) + 56));
  }
  else result = (signed char)(- (0.f - 740.837890625f * (float)p_13));
  return result;
}



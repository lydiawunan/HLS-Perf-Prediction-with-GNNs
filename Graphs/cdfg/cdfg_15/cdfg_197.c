#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 250077709
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p, short p_7, char p_9, unsigned char p_13, char p_15)
{
  short v_21;
  double v_19;
  unsigned short v_17;
  char v_11;
  unsigned long v_4;
  unsigned long long v;
  float result;
  v_21 = (short)p_9;
  v_19 = -890.460722348;
  v_17 = (unsigned short)p;
  v = (unsigned long long)p_15;
  if ((unsigned long long)((double)v_17 - v_19) >= ! v / 3626902132ULL - (unsigned long long)(~ (~ v_21))) {
    v_4 = (unsigned long)p_13;
    v_11 = (char)(- (((long long)v_4 / 532852081LL) * (long long)((double)p / -2.43015086621e+38)));
    v = 939912153ULL;
  }
  else {
    v_17 = (unsigned short)((int)v_17 + 23702);
    v_4 = (unsigned long)((long long)((int)p_13 - (int)((unsigned char)(
                                      v_19 * 25536.))) ^ (832684557LL ^ (long long)(! p_7)));
    v_11 = (char)(! ((long)((int)p_15 % ((int)p_9 + 395)) + p % (long)(
                                                            (int)v_17 + 792)));
  }
  result = (float)((v % (unsigned long long)(v_4 + 301UL) + (unsigned long long)(
                    p / (long)((int)p_7 + 595))) & (unsigned long long)(
                   (int)p_9 | (19611 - (int)v_11)));
  return result;
}



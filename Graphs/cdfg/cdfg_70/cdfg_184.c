#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 460117769
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p, unsigned short p_4, unsigned char p_6,
                   long long p_11, int p_13[5])
{
  char v_23;
  long long v_21;
  float v_19;
  unsigned short v_17;
  float v_15;
  double v_9;
  short v;
  unsigned short result;
  v_21 = -14260LL;
  v_19 = 3494077952.f;
  v_17 = (unsigned short)26939;
  v_15 = (float)p_4;
  v = (short)p_13[4];
  if ((long long)(! v) / (((long long)p_13[0] - 126LL / (p_11 + 717LL)) + 166LL) <= -104LL) {
    result = (unsigned short)(249.f + ((float)((int)p_4 >> 3) - - v_19));
    v = (short)v_17;
    v_15 = (float)((long long)result / ((long long)(! p_6) % (((long long)v_17 ^ p_11) + 357LL) + 426LL));
  }
  else {
    v_23 = (char)(~ ((unsigned int)((int)p / 80) % 4294949568U));
    v = (short)(p_11 & -448913847LL);
    v = (short)((((long long)v % (p_11 + 971LL)) / (v_21 + 826LL)) / (long long)(
                (int)p % (21294 % ((int)v_23 + 214) + 830) + 604));
  }
  if ((float)(~ (- (p_13[1] * (int)v))) >= - v_15) result = (unsigned short)(
                                                   (int)(- p) >> (((int)(! p_4) + (int)p_6) & 15));
  else {
    v_9 = (double)(~ v);
    v = (short)(! -35532);
    result = (unsigned short)((long long)((int)p - (int)(~ v)) / (((long long)(
                                                                   v_9 * 30.5319983845) ^ - p_11) + 199LL));
  }
  return result;
}



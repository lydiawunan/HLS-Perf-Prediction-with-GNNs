#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 204552592
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p, double p_5, unsigned char p_7, int p_15, unsigned long p_17)
{
  char v_29;
  char v_27;
  char v_25;
  float v_23;
  unsigned short v_21;
  unsigned long long v_19;
  float v_13;
  char v_11;
  signed char v_9;
  long v;
  int result;
  v_29 = (char)72;
  v_27 = (char)p;
  v_25 = (char)p;
  v_23 = (float)p_5;
  v_21 = (unsigned short)p_7;
  v_19 = (unsigned long long)p;
  v_13 = 9984771072.f;
  v_11 = (char)p_15;
  v_9 = (signed char)-74;
  v = (long)p_7;
  result = (int)p;
  while (24163UL <= (- p_17 - (unsigned long)((int)((char)v_23) / ((int)v_25 + 905))) << (
                    (int)(~ (! v_9)) & 31)) {
    v_21 = (int)v_29 % (((int)v_27 >> 7ULL) + 713);
    v_19 = (unsigned long long)(31469LL % (long long)(~ p + 887L) | (long long)(! (~ v_11)));
    v = (long)(p_15 % ((int)(! p_7) + 283));
    v_25 = (char)(! v_19);
  }
  while_0_break: ;
  if ((long)(~ ((int)p_7 << (p_17 & 7UL)) + 41574) != v) {
    result = (int)((unsigned char)(- (- p_5))) / ((int)p_7 + 83);
    v = (long)(52569ULL + (unsigned long long)result * (23639ULL / (unsigned long long)(
                                                        p + 229L)));
    result = (int)v;
  }
  else {
    v_11 = (char)(- ((float)(- v_21) - v_23));
    v_9 = (signed char)((unsigned long long)((v_13 * (float)p_15) * (float)(! p_17)) + ~ (
                        v_19 - (unsigned long long)result));
    result = (int)((long long)(31224L & (long)((int)v_9 + (int)v_11)) * -31973LL);
  }
  return result;
}



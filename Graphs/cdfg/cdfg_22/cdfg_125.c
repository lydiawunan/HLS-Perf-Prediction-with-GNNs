#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 694126520
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, unsigned long p_5, char p_7, char p_9,
                 int p_13)
{
  int v_27;
  double v_25;
  unsigned int v_23;
  double v_21;
  short v_19;
  long v_17;
  signed char v_15;
  long v_11;
  int v;
  unsigned int result;
  v_27 = (int)p;
  v_25 = 9515922629.21;
  v_23 = 4294924084U;
  v_21 = 633.99476384;
  if ((long)((int)((char)((double)v_23 / (v_25 + 989.))) * (int)(- p_7)) - (
      (long)(p_13 * v_27) - ((long)p_7 & 28680L)) <= (long)p) {
    v_19 = (short)(v_21 * (double)(! (- p_7)));
    v_17 = (long)(- ((float)((long)v_19 / 653114406L) / -2.36136412347e+38f));
    result = (unsigned int)((unsigned long)((int)(- p_7) * ((int)p_9 * (int)p_9)) / (
                            ~ p_5 / (unsigned long)((252L ^ v_17) + 869L) + 847UL));
  }
  else result = (unsigned int)p_7;
  if ((unsigned int)(! ((int)((char)239.269378662f) & (int)p_7) << (51U % (
                                                                    - result + 939U) & 31U)) != 
      (unsigned int)p_13 * (18831066U | (unsigned int)(25 / ((int)p_9 + 576)))) {
    v = (int)(- ((unsigned long)((unsigned int)p - result) / ((p_5 - (unsigned long)p_7) + 994UL)));
    result = (unsigned int)v;
    result = ! (3394669575U * result) - (unsigned int)p;
  }
  else {
    v_15 = (signed char)(- (char)-7);
    v_11 = (long)((994655343ULL ^ (unsigned long long)v_15) / (unsigned long long)(
                  p_5 + 619UL) | 2173ULL);
    result = (unsigned int)(((long)((int)p_9 / ((int)p + 807)) % (v_11 % 29L + 293L)) * (long)(- p_13));
  }
  return result;
}



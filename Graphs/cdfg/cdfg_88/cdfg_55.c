#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 875691951
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, float p_11, long long p_15)
{
  long long v_17;
  double v_13;
  long v_9;
  double v_7;
  short v_4;
  unsigned char v;
  unsigned int result;
  v_17 = 489796642LL;
  v_4 = (short)p_11;
  v = (unsigned char)173;
  result = (unsigned int)p_11;
  v_13 = (double)((float)(result >> 16) - p_11) * (6004813551.87 - (double)(
                                                   (float)v_4 + -4289473024.f));
  if (p_15 >= ! ((v_17 + 4294944584LL) - (long long)(p + p))) {
    result = result;
    v_4 = (short)(p * -45071.f);
    result |= (unsigned int)(- ((int)v / ((int)v_4 + 80)));
  }
  else {
    v_9 = (long)(- ((unsigned long)v_13 - 853475134UL));
    v_7 = (double)((unsigned int)((int)((unsigned char)-5.6955379209e+37f) - 101) * result + (unsigned int)(- (
                   (double)p_11 * -326.598886348)));
    result = (unsigned int)(- ((double)result + v_7) * (double)v_9);
  }
  return result;
}



//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 609404299
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, int p_4[2][1], short p_7,
                   unsigned char p_9, long long p_13)
{
  float v_15;
  unsigned char v_11;
  double v;
  unsigned short result;
  v_15 = (float)p;
  v_11 = (unsigned char)37;
  v = (double)p_9;
  v = (double)((long long)((6805. / (v + 9.) - (double)((int)p_9 + -126)) + (double)(
                           -88 - (int)v_11 % 29714)) % (p_13 % ((long long)(
                                                                - v + (
                                                                (double)v_15 + 587.368192186)) + 423LL) + 738LL));
  result = (unsigned short)p_7;
  result = (unsigned short)(- (((p % (unsigned long)(p_4[0][0] + 93)) * 32UL) % (
                               (unsigned long)((int)result - -120) * (
                               p & (unsigned long)v) + 813UL)));
  result = result;
  return result;
}



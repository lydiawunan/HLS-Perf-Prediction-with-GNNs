#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 21678690
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, long p_5, unsigned long p_7, char p_9, unsigned char p_15)
{
  int v_21;
  unsigned int v_19;
  unsigned short v_17;
  unsigned long v_13;
  unsigned long v_11;
  double v;
  double result;
  v_21 = 57772;
  v_19 = (unsigned int)p;
  v_17 = (unsigned short)43871;
  v_13 = 20763UL;
  result = 2.86179847974e+38;
  v_11 = ~ (- v_13);
  v_13 = (unsigned long)((long long)(1002225UL / (((unsigned long)v_17 + v_13) + 204UL)) | 
                         (long long)((int)p_15 % 620 >> (- v_19 & 31U)) * (
                         (long long)(v_13 % (unsigned long)(v_21 + 868)) + -239304133LL));
  v = (double)(166444154U >> ((~ (! v_11) >> ((v_13 ^ (unsigned long)(
                                               (int)p_15 % ((int)((unsigned char)result) + 594))) & 31UL)) & 31UL));
  result = (double)((long long)(- (- v) / (- ((double)p - v) + 323.)) * (
                    (((long long)p_5 + 463805292LL) - (long long)(p_7 + (unsigned long)p_9)) * (long long)(
                    3191789568UL + v_11)));
  return result;
}



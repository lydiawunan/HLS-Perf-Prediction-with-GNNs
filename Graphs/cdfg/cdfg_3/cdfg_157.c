#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 388445587
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, unsigned short p_5, unsigned int p_13,
                  double p_17)
{
  signed char v_15;
  unsigned long v_11;
  int v_9;
  long v_7;
  int v;
  unsigned char result;
  v_15 = (signed char)46;
  v_11 = (unsigned long)p_5;
  v_9 = (int)p_5;
  result = (unsigned char)p_17;
  v = (int)((unsigned long)(((int)((unsigned short)p) - (int)p_5) - (int)(- result)) + (
            v_11 | (unsigned long)p_17));
  if (! (18446493988003322912ULL * (unsigned long long)v_9) != (unsigned long long)(
                                                               (-1.20258450345e+37f - (float)v_15) * (float)(
                                                               3250056374U - (unsigned int)v)) % 272845613ULL) {
    v = 64579 / ((-17939 % ((int)p_5 + 512)) % 14 + 994);
    result = (unsigned char)((int)p - v);
  }
  else {
    v_11 = (unsigned long)p_13;
    v_7 = (long)(- (471140835ULL * (unsigned long long)v_9) / (unsigned long long)(
                 (! v_11 + (unsigned long)((unsigned int)v - p_13)) + 994UL));
    result = (unsigned char)(- (p / ((double)v_7 + 332.)) / ((double)p_5 + 658.));
  }
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 411514876
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p)
{
  char v_17;
  unsigned char v_15;
  unsigned long v_13;
  long long v_11;
  long v_9;
  unsigned char v_7;
  unsigned long long v_4;
  unsigned short v;
  double result;
  v_17 = (char)-78;
  v_15 = (unsigned char)85;
  v_13 = 4240423763UL;
  v_7 = (unsigned char)89;
  v_4 = (unsigned long long)p;
  v = (unsigned short)p;
  result = p;
  if ((float)((unsigned long)(-349817133L << ((long)(- p) & 31L)) + (unsigned long)(
              (unsigned int)v_15 ^ (unsigned int)v_17 * 4294919792U)) > -2237895936.f) {
    v_11 = 200LL;
    v_9 = (long)(- -22688);
    v_7 = (unsigned char)(- p);
  }
  else {
    v_11 = (long long)((5615137792. / (p + 207.)) / (p + 79.));
    v_9 = (long)(! (! v_13 - (unsigned long)(- v_15)));
    result = (double)((int)((unsigned short)(p - 1.3169839887e+38)) % (
                      (int)v + 577));
  }
  while ((unsigned long long)(- (- result)) % ((unsigned long long)((int)v + 7147) % (
                                               (v_4 >> 43LL) + 198ULL) + 555ULL) < (unsigned long long)((long)(
         (int)((unsigned char)(p / 5.14697125073e+37)) - (int)v_7))) {
    v = v_11 / 82LL;
    v_11 = (long long)result;
    result = (double)((long long)(v_13 + (unsigned long)v) & - ((long long)p * v_11));
    v_7 = (unsigned char)(- (p / ((double)v_9 + 543.)) + (double)v_11);
  }
  while_0_break: ;
  return result;
}



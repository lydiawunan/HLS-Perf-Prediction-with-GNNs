#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 742604252
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, long p_11[3], char p_17, long long p_19, long p_23)
{
  unsigned char v_21;
  long v_15;
  double v_13;
  long v_9;
  double v_7;
  unsigned short v_5;
  unsigned long v;
  int result;
  v_21 = (unsigned char)p_19;
  v_13 = -541.563607187;
  v_9 = p_23;
  v_7 = (double)p_23;
  v_5 = (unsigned short)41467;
  v = 145875189UL;
  result = (int)p_17;
  if (- (56634LL / (p_19 + 525LL) | (long long)(3666328890UL % ((unsigned long)v_7 + 172UL))) < 
      ~ ((long long)p_23 / -52213LL) % (long long)(- (~ p_23) + 969L)) {
    result = (int)((double)(- (~ p_11[1])) / (- ((double)v_5 / (v_13 + 603.)) + 345.));
    v = (unsigned long)(! ((unsigned long long)p % 711164194ULL - (unsigned long long)(
                           (unsigned long)v_9 + (unsigned long)p)));
    v_7 = (double)((! p % 4294907333U) % ((25150U % (unsigned int)(result + 669) + ~ p) + 381U));
  }
  else {
    v_13 = (double)((long)(-44709 & (int)((unsigned char)3.22896508515e+38f) % (
                                    (int)v_21 + 630)) * - (p_11[0] % -30L));
    v_15 = (long)((long long)((int)((char)((double)result + v_13)) % (
                              (int)p_17 + 27)) * (4294908007LL * p_19 + (long long)(
                                                  71 >> 1ULL)));
    v_7 = (double)(~ v_15);
  }
  if ((double)(- v * 4294967247UL - 4294949466UL) <= - ((v_7 - 2373.) + -1.0943474809e+43)) 
    result = 52821;
  else {
    v = (unsigned long)(226U + p) / ((unsigned long)(- v_5) * ! v + 453UL);
    v = (unsigned long)((long long)((v % (v + 673UL)) / 54062UL) + (58804LL - (long long)(- p)));
    result = (int)(~ (- (v / 3979515934UL)));
  }
  return result;
}



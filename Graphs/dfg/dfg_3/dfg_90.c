//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 957624665
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, signed char p_7, int p_9, long p_11, float p_17)
{
  char v_21;
  short v_19;
  short v_15;
  int v_13;
  double v_4;
  float v;
  long long result;
  v_21 = (char)p_7;
  v_19 = (short)p_17;
  v_13 = 714778001;
  v_15 = (short)(((18446744073048733135ULL % (unsigned long long)(p_9 + 1024) - 43839ULL) - (unsigned long long)(
                  (float)(! v_21) - (p_17 + (float)p_11))) % 247ULL);
  v_4 = (double)(161726023ULL / ((384140816ULL % (unsigned long long)(
                                  p_11 + 755L) >> (v_13 % ((int)v_15 + 937) & 63)) + 713ULL) + (unsigned long long)(
                 (int)(- (p_17 + (float)v_19)) - ~ p_9));
  v = (float)(~ (- p_9));
  result = (long long)(-1.15951959838e+38 - ((double)v / ((v_4 - (double)v) + 405.)) / (
                                            (double)(6062UL % (unsigned long)(
                                                     (p + (long)p_7) + 81L)) + 210.));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 676967413
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p[5][5][4], int p_5, unsigned short p_9, long p_11,
         unsigned long p_13)
{
  unsigned char v_27;
  long long v_25;
  double v_23;
  short v_21;
  char v_19;
  unsigned int v_17;
  int v_15;
  short v_7;
  double v;
  char result;
  v_27 = (unsigned char)243;
  v_25 = -16785LL;
  v_23 = (double)p_13;
  v_21 = (short)-2803;
  v_19 = (char)77;
  v_17 = (unsigned int)p_9;
  v_15 = -42641;
  v_7 = (short)1244;
  v = -271.796267059;
  if ((float)((unsigned long)((int)(- v) ^ (int)p_9 % -97) / 3782196954UL) < - (
      (float)(-33691 * (int)-3820647424.f) - (float)p_13 / 4903022592.f)) {
    v_15 = (int)(p[3][3][3] - (double)p_5);
    v_7 = (short)(- (v_23 / 3.2551778685e+38 + (double)((long)v_7 + 605329987L)));
    v_21 = (short)((double)((long long)(41 - (int)((char)v_23)) + (v_25 - (long long)v_7)) / (
                   - (- v_23) + 5.));
  }
  else {
    v_17 = (unsigned int)(((long long)(- v_7) ^ ! v_25) * (long long)(- (
                          422.735809326f - (float)p_5)));
    v_7 = (short)((double)(((int)p_9 + v_15) * (v_15 - p_5)) / (((double)v_17 - (
                                                                 v - 829.013889535)) + 141.));
    v_15 = ! ((int)v_27 / ((p_5 << ((int)v_23 & 31)) + 704));
  }
  if ((unsigned long)(- ((unsigned int)v_15 + v_17)) + - (557976454UL * (unsigned long)v_19) > (unsigned long)v_21) {
    v = (double)(! v_7);
    v = - (p[1][0][3] - (double)p_5) / (- v + 452.);
    result = (char)v;
  }
  else result = (char)-103;
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 667713701
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, unsigned long long p_7, unsigned char p_9,
          int p_13[2][2][3], double p_15)
{
  long v_23;
  unsigned long v_21;
  unsigned long long v_19;
  double v_17;
  unsigned char v_11;
  unsigned char v_5;
  long long v;
  float result;
  v_21 = (unsigned long)p_13[0][0][2];
  v_19 = (unsigned long long)p;
  v_17 = -766.358120714;
  v_11 = (unsigned char)p_15;
  v = 565158562LL;
  result = (float)p_13[1][0][2];
  while (v == (long long)p_15) {
    v_23 = (double)v_19 * (v_17 / -194805131.);
    v_11 = (unsigned char)(- (- p_15 * (double)((int)p_9 - p_13[0][0][2])));
    result = (float)v_23;
    v = (long long)(20534. / ((92. - p_15) + 216.) + (double)v_21);
  }
  while_0_break: ;
  if (((long long)p_9 - v % -122LL) + (long long)(- ((int)((unsigned char)p_15) + (int)v_11)) == -59LL) {
    v_5 = v_11;
    v = (long long)(~ ((int)8.82341101445e+37f * (99 * (int)p_9)));
    result = (float)((unsigned long long)(- (p % ((unsigned int)result + 253U))) % (
                     ((unsigned long long)(v & (long long)v_5) + p_7 / 618ULL) + 337ULL));
  }
  else result = (float)(unsigned short)54482;
  return result;
}



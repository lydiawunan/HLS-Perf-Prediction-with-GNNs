#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 948350840
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p[3][1], int p_9, float p_15, int p_17,
        unsigned int p_21)
{
  char v_25;
  unsigned short v_23;
  long v_19;
  unsigned long long v_13;
  unsigned long long v_11;
  unsigned int v_7;
  unsigned int v_5;
  int v;
  int result;
  v_25 = (char)p_9;
  v_23 = (unsigned short)p_21;
  v_19 = (long)p_17;
  v_13 = 18446744073709502496ULL;
  v_11 = 18446744073510812207ULL;
  v_7 = p_21;
  v = (int)p_15;
  result = (int)p[1][0];
  while ((long long)(((long)v + 998811631L) / 104L) * -252731072LL <= (long long)(
         (~ v | p_17) / (p_17 + 389))) {
    v_23 = (int)v_25 * (int)((char)-219.128143311f);
    result = (int)-1248109952.f;
    v_7 = (unsigned int)p_15;
    v = (int)(- ((unsigned long long)v_23 - 587501101ULL) + 18446744073709551615ULL);
  }
  while_0_break: ;
  if ((unsigned long long)((long)(result + p_17) % (v_19 + 389L)) * (
      18446744073709508051ULL - (unsigned long long)(p_21 - (unsigned int)p[2][0])) == (unsigned long long)(
      (unsigned long)p_21 / (unsigned long)(-563805844L / (long)((int)v_23 + 224) + 948L))) {
    v = (int)p[2][0];
    result = - v;
  }
  else {
    v_13 = ! v_13 / ((unsigned long long)((float)(v_11 + 356292760ULL) / (
                                          - p_15 + 140.f)) + 220ULL);
    v_5 = (unsigned int)((unsigned long long)(- (v_7 % (unsigned int)(
                                                 p_9 + 21))) % (! v_11 / (
                                                                v_13 * 18446744073709488921ULL + 598ULL) + 449ULL));
    result = (int)(-3.79007602001e+37f - (float)(- (~ v_5)));
  }
  return result;
}



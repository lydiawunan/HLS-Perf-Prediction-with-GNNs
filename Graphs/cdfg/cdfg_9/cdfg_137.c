#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 853880454
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, int p_4[4], long long p_7[3][4][2],
                 unsigned char p_9, unsigned long p_11[5][2][3])
{
  short v_25;
  unsigned char v_23;
  char v_21;
  unsigned int v_19;
  unsigned long long v_17;
  signed char v_15;
  long long v_13;
  double v;
  unsigned int result;
  v_25 = (short)p_9;
  v_23 = (unsigned char)77;
  v_21 = (char)p_7[0][3][1];
  v_19 = (unsigned int)p_4[3];
  v_17 = 51753ULL;
  v_15 = (signed char)p_11[0][1][2];
  v_13 = 10544LL;
  while ((long long)p_9 == (long long)v_19 + (((long long)p + v_13) + (long long)(! v_21))) {
    v_23 = (long)v_23 / 323508833L;
    v_15 = (signed char)(~ v_25);
    v_17 = (unsigned long long)(47556451LL + (long long)(468160053 * (int)(~ v_15)));
    v_19 = (unsigned int)(- (- ((double)v_15 * -2981670154.58)));
  }
  while_0_break: ;
  if ((unsigned long long)(- ((v_13 + (long long)v_15) / (long long)(
                              p_11[4][1][0] + 570UL))) > 27373ULL + - (
                                                         18446744072718284910ULL - v_17)) 
    result = (unsigned int)(p * (unsigned long)p_4[1]);
  else {
    v = (double)(! (~ p_4[0]));
    result = (unsigned int)((((long long)v + p_7[0][3][1]) + (long long)(! p_9)) / (long long)(
                            ((unsigned long)p_9 & - p_11[2][1][0]) + 325UL));
  }
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 57409160
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, long long p_5, float p_11[4][1],
                unsigned short p_17, unsigned long long p_19)
{
  float v_23;
  char v_21;
  char v_15;
  unsigned int v_13;
  long v_9;
  unsigned char v_7;
  double v;
  signed char result;
  v_23 = -9110751232.f;
  v_21 = (char)-24;
  v_15 = (char)18;
  v_13 = (unsigned int)p;
  v_9 = 756760873L;
  v_7 = (unsigned char)114;
  v = -1.7027476025e+38;
  result = (signed char)72;
  while (((unsigned long)(- v_7) / 82420UL | (unsigned long)(- ((int)((char)v) % (
                                                                (int)v_15 + 763)))) >= (unsigned long)(
         ((unsigned int)((int)p_17 % 227) - 289993555U) - (v_13 + 18811U))) {
    v_7 = (int)v_21 % 5571;
    v_15 = (char)((long)(100 + (int)v_15) % ((v_9 - (long)v_23) + 578L) ^ 
                  ((long)v_23 % (v_9 + 445L)) / (long)((int)(- v_7) + 413));
    result = (signed char)v_13;
    v_7 = (unsigned char)p_11[3][0];
  }
  while_0_break: ;
  while ((long long)((int)p ^ (int)((unsigned char)(v * (double)(p_5 + -92LL)))) < 
         ((long long)(- v_7) - 548347425LL % (long long)(v_9 + 805L)) * (long long)p_11[3][0]) {
    v_9 = (unsigned int)v_15 / (v_13 / 33429U + 407U);
    result = (signed char)(- (5.76082201805e+13f * p_11[1][0]));
    v_15 = (char)(! (p_19 - (unsigned long long)p_5) + 3633621939ULL);
    v_7 = (unsigned char)(! (((int)((unsigned char)p_11[1][0]) + (int)v_7) % (
                             (int)p_17 / -57734 + 28)));
  }
  while_0_break_0: ;
  return result;
}



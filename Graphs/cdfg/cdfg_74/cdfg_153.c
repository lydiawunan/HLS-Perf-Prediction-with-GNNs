#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 569634743
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, unsigned short p_5, short p_7, unsigned short p_9, int p_11)
{
  long v_25;
  unsigned long v_23;
  unsigned long long v_21;
  double v_19;
  signed char v_17;
  unsigned long long v_15;
  short v_13;
  float v;
  char result;
  v_25 = -1043253386L;
  v_23 = (unsigned long)p_9;
  v_21 = 24942ULL;
  v_19 = (double)p_7;
  v_17 = (signed char)p_9;
  v_15 = (unsigned long long)p_5;
  v = (float)p_9;
  result = (char)p_9;
  while (37904UL != (unsigned long)v_17) {
    v_15 = (long long)v_25 / -899036243LL;
    v = (float)(signed char)-94;
    v_25 = (long)(~ ((int)p % ((int)result + 925)) + (int)p);
    v_17 = (signed char)((int)((char)v) % -54);
  }
  while_0_break: ;
  if ((unsigned long)(v_19 * (double)(v_21 % 668ULL - (unsigned long long)v_23)) >= ! (
      60263UL % (v_23 + 368UL) + 3787698538UL)) {
    v_13 = (short)((int)result * (((int)v & p_11) - (int)p_5));
    v = (float)((unsigned long)((int)p_9 - p_11 / ((int)p_7 + 188)) / (
                ((unsigned long)(- v_13) - 20162UL) + 620UL));
    result = (char)((int)p % ((int)((short)((v / ((float)p_5 + 662.f)) / (
                                            (float)((int)p_7 - (int)p) + 18.f))) + 123));
  }
  else {
    result = (char)(- (((unsigned long long)p_5 + v_15) / (unsigned long long)(
                       (int)(! v_17) + 660)));
    result = (char)((-35 + (int)(~ result)) * ((23576 / ((int)p + 867)) / 394));
    result = result;
  }
  return result;
}



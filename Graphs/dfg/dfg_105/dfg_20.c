#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 713744108
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, unsigned char p_5, float p_15[2])
{
  unsigned int v_13;
  signed char v_11;
  short v_9;
  signed char v_7;
  int v;
  unsigned short result;
  v_13 = 34084U;
  v_9 = (short)p;
  v_7 = (signed char)p_15[0];
  v = 1031054320;
  v_11 = (signed char)(~ (- v_13));
  result = (unsigned short)((int)v_9 / (((int)(- v_11) - (int)((signed char)(
                                         (float)v_13 * ((float)p - p_15[0])))) + 936));
  result = (unsigned short)((v % ((int)result + 248)) / (((v / ((int)p_5 + 296) + (int)(- v_7)) + -94) + 370));
  result = (unsigned short)(! ((21822UL % (unsigned long)(p + 223) >> (
                                (unsigned long)-5348724.f & 31UL)) / (unsigned long)(
                               (int)(~ (! result)) + 257)));
  return result;
}



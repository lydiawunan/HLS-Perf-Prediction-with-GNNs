#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 427596574
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, float p_13)
{
  signed char v_15;
  signed char v_10;
  unsigned long long v_8;
  double v_6;
  char v_4;
  short v;
  short result;
  v_15 = (signed char)p_13;
  v_8 = (unsigned long long)p;
  v_6 = (double)p;
  v_4 = (char)-120;
  v = (short)p;
  result = (short)20181;
  while ((double)(- result) > v_6) {
    v_10 = v_8 + 299ULL;
    v = (short)v_15;
    v_8 = (unsigned long long)(! (((int)v_4 - (int)((char)p_13)) ^ (101 ^ (int)((unsigned char)p_13))));
    v_6 = (double)(((int)v_10 * (int)p + (int)(-711.439147949f + (float)v_4)) % (
                   (int)((short)(p_13 * (float)v_8)) * (int)result + 182));
  }
  while_0_break: ;
  result = (short)(~ (- ((int)v % ((int)v_4 + 215))));
  return result;
}



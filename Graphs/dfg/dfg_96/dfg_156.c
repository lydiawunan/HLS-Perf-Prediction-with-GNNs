#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1067761247
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, signed char p_11)
{
  unsigned long v_9;
  short v_6;
  char v_4;
  short v;
  unsigned long result;
  v_6 = (short)-27658;
  v_4 = (char)p;
  v_9 = 338181138UL;
  v = (short)(-10476 - (int)(~ v_6) * 716);
  v_6 = (short)(((unsigned long)(- (p / 619886784.f)) + ! ((unsigned long)1.93340670061e+38f - v_9)) / (unsigned long)(
                (int)p_11 + 851));
  result = (unsigned long)((~ ((int)((short)-6.64208856309e+37) + (int)v) ^ - (
                            46709 % ((int)v_4 + 331))) - ! ((int)(- v_6) / (
                                                            (int)((short)(
                                                            31149.f / (
                                                            p + 138.f))) + 190)));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 986160473
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p, float p_7, unsigned char p_9, char p_13, float p_17)
{
  signed char v_19;
  signed char v_15;
  short v_11;
  unsigned long v_4;
  short v;
  double result;
  v_19 = (signed char)63;
  v_15 = (signed char)p;
  if ((float)((((unsigned int)p_9 % 4294916183U) / (unsigned int)((int)v_19 + 683)) / 4020132798U) == p_17) {
    v_4 = 58299UL;
    v = (short)(~ (36327U % (unsigned int)((int)p + 552) + (unsigned int)(- p_7)));
  }
  else {
    v = (short)11528;
    v_11 = (short)(((int)p_9 - (int)((char)-1049632885.48) / ((int)p_13 + 890)) + (int)(
                   p_7 * (float)v_15));
    v_4 = (unsigned long)(- ((unsigned long long)(- p_9) / (638261498ULL % (unsigned long long)(
                                                            (int)v_11 + 285) + 174ULL)));
  }
  result = (double)((86096581644143152ULL - (unsigned long long)((int)v - (int)((short)-7005934434.66))) * (unsigned long long)v_4);
  return result;
}


